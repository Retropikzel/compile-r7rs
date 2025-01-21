Non Scheme implementation specific implementation of
[SRFI-138](https://srfi.schemers.org/srfi-138/srfi-138.html).

## Dependencies

For scripts:

    apt install sharutils

For binaries:

    apt install build-essential

For jar:

    apt install default-jdk

## Installing

- Download the scman script
- Place it in ${HOME}/.local/bin
- Add ${HOME}/.local/bin to the PATH
    - For example add to your .bashrc: export PATH="${HOME}/.local/bin:${PATH}"
- Make the script runnable
    - chmod -x ${HOME}/.local/bin/scman

You can also run it in place with

    ./scman ...

but the ${HOME}/.local/bin needs to be in your path for you to be able to run the implementations.

## Usage

The environment variable SCMC must be set to the same value as the implementations command.
The command is the first word on the list.  So for example guile for Guile, csi for Chicken
interpreter, csc for Chicken compiler.

If the command has .exe at it's end cross compilation from Linux to .exe with Wine is assumed.


Run

    SCMC=<SCHEME> compile-r7rs -I <DIR> <file.scm>

## Outputs

### Self contained, self extracting and runnable shell script

Requires the Scheme implementation to be installed to run.

- chibi-scheme
- csi (Chicken)
- icyc (Cyclone)
- gsi (Gambit)
- gosh (Gauche)
- guile
- mosh
- sash
- stklos
- skint
- tr7i (tr7)
- ypsilon

### Static binary executable

Requires nothing to be installed to run.

- csc (Chicken)
- racket (Racket)

### Java ARchive (JAR)

Only requires Java to be installed to run.

- kawa
    - The build folder needs to contain kawa.jar

### .exe

- racket.exe

## How it works

The scripts searches for .sld files in given paths, compiles them if needed and combines them with
the main script to form something that can be run on it's own. Meaning that the only thing the
person running the things needs, might be, the Scheme implementation, Java, or nothing.
