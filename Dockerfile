ARG COMPILE_R7RS=chibi
FROM debian:bookworm AS build
RUN apt-get update && apt-get install -y build-essential wget make cmake libgc-dev zlib1g-dev libffi-dev libssl-dev
RUN wget https://bitbucket.org/ktakashi/sagittarius-scheme/downloads/sagittarius-0.9.12.tar.gz && tar -xf sagittarius-0.9.12.tar.gz
RUN cd sagittarius-0.9.12 && mkdir build && cd build && cmake -DCMAKE_INSTALL_PREFIX=/usr/local-other .. && make && make install

FROM schemers/${COMPILE_R7RS}
ARG COMPILE_R7RS=chibi
RUN apt-get update && apt-get install -y make libffi8 libgc1 libssl3 libuv1
COPY --from=build /usr/local-other/ /usr/local-other/
ENV PATH=${PATH}:/usr/local-other/bin
ENV COMPILE_R7RS=${COMPILE_R7RS}
