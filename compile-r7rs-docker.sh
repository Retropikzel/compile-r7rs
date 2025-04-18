#!/bin/sh

{
    echo "ARG COMPILE_R7RS=chibi"
    echo "FROM debian:bookworm AS build"
    echo "RUN apt-get update && apt-get install -y build-essential wget make cmake libgc-dev zlib1g-dev libffi-dev libssl-dev"
    echo "RUN wget https://bitbucket.org/ktakashi/sagittarius-scheme/downloads/sagittarius-0.9.12.tar.gz && tar -xf sagittarius-0.9.12.tar.gz"
    echo "RUN cd sagittarius-0.9.12 && mkdir build && cd build && cmake -DCMAKE_INSTALL_PREFIX=/usr/local-other .. && make && make install"
    echo ""
    echo "FROM schemers/${COMPILE_R7RS}"
    echo "RUN apt-get update && apt-get install -y make libffi8 libgc1 libssl3 libuv1"
    echo "COPY --from=build /usr/local-other/ /usr/local-other/"
    echo 'ENV PATH=${PATH}:/usr/local-other/bin'
    echo "ARG COMPILE_R7RS=chibi"
    echo "ENV COMPILE_R7RS=${COMPILE_R7RS}"
} > /tmp/Dockerfile.compile-r7rs-docker

docker build . \
    -f /tmp/Dockerfile.compile-r7rs-docker \
    --tag=compile-r7rs-docker-${COMPILE_R7RS}

docker run \
    -v "${PWD}":/workdir \
    -w /workdir \
    -t compile-r7rs-docker-${COMPILE_R7RS}
