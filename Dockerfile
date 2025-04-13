FROM debian:stable
RUN apt-get update && apt-get install -y build-essential make wget
RUN wget https://ziglang.org/builds/zig-linux-x86_64-0.15.0-dev.300+9e21ba12d.tar.xz && tar -xf *.tar.xz
RUN ls -1
