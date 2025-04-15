compile-r7rs is a tool to compile R7RS Scheme programs, it aims for compability
with [SRFI-138](https://srfi.schemers.org/srfi-138/srfi-138.html).

## Supported implementations

- chibi
- cyclone
- gauche
- guile
- kawa
- loko
- mosh
- sagittarius
- skint
- stklos
- tr7
- ypsilon

## Dependencies



## Getting started

### Install Sagittarius scheme

#### Linux

On Debian/Ubuntu/Mint:

    apt-get install -y build-essential cmake libgc-dev zlib1g-dev libffi-dev libssl-dev
    wget https://bitbucket.org/ktakashi/sagittarius-scheme/downloads/sagittarius-0.9.12.tar.gz
    tar -xf sagittarius-0.9.12.tar.gz
    cd sagittarius-0.9.12.tar.gz
    mkdir build
    cd build
    cmake ..
    make
    make install

#### Windows

Download the installer from
[https://bitbucket.org/ktakashi/sagittarius-scheme/downloads/](https://bitbucket.org/ktakashi/sagittarius-scheme/downloads/)
and install it.

### Install libuv

#### Linux

On Debian/Ubuntu/Mint run:

    apt install libuv1

#### Windows

dll is included, no need to install anything.

### Build on Linux

    ./configure
    make
    make install

### Build on Windows

Work in progres
In command prompt run:

    build.bat
    install.bat

## Usage

You need to install each Scheme implementation yourself.

The environment variable SCHEME must be set to the name of the implementation
as specified in the support list.

First to compile your libraries run the command without the .scm file.

    SCHEME=<implementation name> compile-r7rs -I .

Then run it with the .scm file.

    SCHEME=<implementation name> compile-r7rs -I . main.scm

Which produces file called main, which you can run. Note that when given Scheme
is interpreter the file contains commands that run the script, and even when
the file is combiled binary it might need the compiled libraries.
