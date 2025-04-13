compile-r7rs is a tool to compile R7RS Scheme programs, it aims for compability
with [SRFI-138](https://srfi.schemers.org/srfi-138/srfi-138.html).

## Supported implementations

- chibi
- cyclone
- gauche
- guile
- kawa
- mosh
- sagittarius
- skint
- stklos
- tr7
- ypsilon

## Dependencies

C toolchain and libuv, on Debian/Ubuntu/Mint run

    apt install build-essential libuv1-dev

You need to install each Scheme implementation yourself.

## Build and install

    ./configure
    make
    install

## Usage

The environment variable SCHEME must be set to the name of the implementation
as specified in the support list.

First to compile your libraries run the command without the .scm file.

    SCHEME=<implementation name> compile-r7rs -I .

Then run it with the .scm file.

    SCHEME=<implementation name> compile-r7rs -I . main.scm

Which produces file called main, which you can run. Note that when given Scheme
is interpreter the file contains commands that run the script, and even when
the file is combiled binary it might need the compiled libraries.
