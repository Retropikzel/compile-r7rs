Implementation of
[SRFI-138: Compiling Scheme programs to executables](https://srfi.schemers.org/srfi-138/srfi-138.html)
made with POSIX Shell.


## Usage

    COMPILE_R7RS=${SCHEME} compile-r7rs -o main -I libs -A other_libs main.scm
    ./main

## Suppoerted implementations
- capyscheme
- chezscheme
- chibi
- chicken
- cyclone
- foment
- gauche
- guile
- ikarus
- ironscheme
- kawa
- larceny
- loko
- meevax
- mosh
- mit-scheme
- racket
- sagittarius
- skint
- stklos
- tr7
- ypsilon

## How it works

With compilers, it compiles. With interpretes it creates a script file which
contains shebang to run the implementation with given -I and -A paths and
contents of input file (.sps or .scm).

## Misc
- No support for -D yet.
