compile-r7rs is a tool to compile Scheme programs, it aims for compability
with [SRFI-138](https://srfi.schemers.org/srfi-138/srfi-138.html).

Despite it's name it also supports R6RS implementations and compilation.
Schemers, unite! <3

- [Notes](#notes)
- [Supported implementations](#supported-implementations)
- [Roadmap](#roadmap)
- [Dependencies](#dependencies)
    - [Linux](#dependencies-linux)
    - [Windows](#dependencies-windows)
- [Installation](#installation)
    - [Linux](#installation-linux)
    - [Windows](#installation-windows)
- [Usage](#usage)
    - [Environment variables](#usage-environment-variables)
- [Usage with docker](#usage-with-docker)
- [Usual RnRS project](#usual-rnrs-project)
    - [File structure](#usual-rnrs-project-file-structure)
    - [Installation of your project](#usual-rnrs-project-installation-of-your-project)
- [Development](#development)
    - [Adding new implementations](#development-adding-new-implementations)
    - [Misc notes](#development-misc-notes)

## Notes
<a name="#notes"></a>

- No support for -D flag yet.
- Not all implementations support adding to beginning or end o load path so
-I and -A might work the same

## Supported implementations
<a name="#supported-implementations"></a>

Some implementations support both compiling and interpreting, in that
case only the compiler functionality is used and the implementation is marked
as compiler.

- chezscheme
    - interpreter
    - r6rs
- chibi
    - interpreter
    - r7rs
- chicken
    - compiler
    - r7rs
- cyclone
    - compiler
    - r7rs
- Gambit
    - compiler
    - r7rs
- foment
    - interpreter
    - r7rs
- gauche
    - interpreter
    - r7rs
- guile
    - interpreter
    - r6rs
    - r7rs
        - Has include bug https://debbugs.gnu.org/cgi/bugreport.cgi?bug=66046
        but for some reason it seems to work for me atleast sometimes
- ikarus
    - interpreter
    - r6rs
- ironscheme
    - interpreter
    - r6rs
- kawa
    - interpreter
    - r7rs
- larceny
    - interpreter
    - r6rs
    - r7rs
- loko
    - compiler
    - r6rs
    - r7rs
- mit-scheme
    - interpreter
    - r7rs
- mosh
    - interpreter
    - r6rs
    - r7rs
- sagittarius
    - interpreter
    - r6rs
    - r7rs
- skint
    - interpreter
    - r7rs
- stklos
    - interpreter
    - r7rs
- tr7
    - interpreter
    - r7rs
- ypsilon
    - interpreter
    - r6rs
    - r7rs

## Roadmap
<a name="#roadmap"></a>

- Support for more implementations
    - Gerbil
        - Dont know how to run this thing yet :D
    - Husk
        - Dont know how to add directories to load path yet, might not be
        implemented
    - Meevax
        - Asked how to add directory to load path
        https://github.com/yamacir-kit/meevax/issues/494, might not be
        implemented yet
    - Picrin
        - Might not be possible, seems to not have (include...) that works like
        others
    - Stak
        - Waiting for implementation support
        https://github.com/raviqqe/stak/issues/2355
    - Vicare
        - So old that I have problems compiling it in Docker, so testing is
        hard but I expect it to work once I get it to compile as it is R6RS
        implementation
- Better and tested support for Windows
    - Right now there is support for running this but I can not quarantee it
    works on all if any cases
- Support for -D
    - Most implementations dont have this or equivalent flag, but it would be
    really nice feature to have so filing issues and implementing it myself is
    something I would like to do
- Ask implementations to support adding to the front and back of load path, or
    implement this onto implementations myself
    - This might not be as important, but it would be nice to go towards SRFI-138
    conformaty

## Dependencies
<a name="#dependencies"></a>

### Linux
<a name="#dependencies-linux"></a>

#### Sagittarius Scheme

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

#### libuv

On Debian/Ubuntu/Mint run:

    apt install libuv1

### Windows
<a name="#dependencies-windows"></a>

### Sagittarius Scheme
Download the installer from
[https://bitbucket.org/ktakashi/sagittarius-scheme/downloads/](https://bitbucket.org/ktakashi/sagittarius-scheme/downloads/)
and install it into **default location**.

### libuv

Libuv is distributed with compile-r7rs on Windows.

## Installation
<a name="#Installation"></a>

### Linux
<a name="#Installation-linux"></a>

    ./configure
    make
    make install

### Windows
<a name="#Installation-windows"></a>

Donwload the setup-compile-r7rs.exe from dist directory from this repository.

If you want to compile the installer yourself look into the makefile and
installer.iss, it is made with innosetup.

## Usage
<a name="#usage"></a>

You need to install each Scheme implementation yourself.

The environment variable COMPILE\_R7RS must be set to the **name** of the
implementation as specified in the support list.
**This differs from the SRFI** as the SRFI excepts a path.

To get the list of supported implementations run:

    compile-r7rs --list-schemes

Then run it with the .scm file for r7rs, or .sps file for r6rs.

    COMPILE_R7RS=<implementation name> compile-r7rs -I . -o main main.scm

Which produces file called main, which you can run. Note that when given Scheme
is interpreter the file contains commands that run the script, and even when
the file is combiled binary it might need the compiled libraries.

No other file suffixes are supported at the moment.

Setting value of COMPILE\_R7RS to implementation name that supports only r7rs
and input file to .sps file and other way around is undefined behaviour.

### Environment variables
<a name="#usage-environment-variables"></a>

- COMPILE\_R7RS
    - **Name** of the implementation you want to compile with
    - **This differs from the SRFI** as it excepts a path
- COMPILE\_R7RS\_SCHEME_NAME
    - Additional string to insert right after the command and it's arguments
    can be used for example to pass C compiler flags on implementations that
    compile to C
    - For example for Chicken to link with libcurl you would set
    COMPILE\_R7RS\_CHICKEN="-L -lcurl"
    - If implementation has - it is changed to \_, for example mit-scheme ->
    MIT\_SCHEME
    - **This differs from the SRFI** as it's not in there

## Usage with Docker
<a name="#usage-with-docker"></a>

Here is a sample Dockerfile to get you started.

    ARG COMPILE_R7RS=chibi
    FROM debian:bookworm AS build
    RUN apt-get update && apt-get install -y build-essential wget make cmake libgc-dev zlib1g-dev libffi-dev libssl-dev
    RUN wget https://bitbucket.org/ktakashi/sagittarius-scheme/downloads/sagittarius-0.9.12.tar.gz && tar -xf sagittarius-0.9.12.tar.gz
    RUN cd sagittarius-0.9.12 && mkdir build && cd build && cmake -DCMAKE_INSTALL_PREFIX=/usr/local-other .. && make && make install

    FROM schemers/${COMPILE_R7RS}
    RUN apt-get update && apt-get install -y make libffi8 libgc1 libssl3 libuv1 git
    COPY --from=build /usr/local-other/ /usr/local-other/
    ENV PATH=${PATH}:/usr/local-other/bin
    ENV COMPILE_R7RS=${COMPILE_R7RS}
    RUN git clone https://git.sr.ht/~retropikzel/compile-r7rs && cd compile-r7rs && make && make install

To use this run:

    export COMPILE_R7RS=<your scheme>
    docker build --build-arg COMPILE_R7RS=${COMPILE_R7RS} --tag=compile-r7rs-${COMPILE_R7RS} .
    docker run -v "${PWD}":/workdir -w /workdir -t compile-r7rs-${COMPILE_R7RS} sh -c "compile-r7rs -I -o main ./snow main.scm"

## Usual RnRS projects
<a name="#usual-rnrs-projects"></a>

The reports do not say much, if anything, about the file structure of your
project. However in practice certain patterns will repeat a lot. Here we use
R7RS .sld and .scm files as example but for R6RS .sld = .sld and .scm = .sps.

### File structure
<a name="#usual-rnrs-projects-file-structure"></a>

The implementations most often expect library named (foo bar) to be in file
foo/bar.sld. Some implementations add the current directory to the load path
implicitly, some do not. If you store your libraries directly in your projects
root it's propably best to always pass . as load path to compile-r7rs.

For example if your projects file structure is:

    foo/bar.sld
    main.scm

The command to compile and run this project is:

    compile-r7rs -I . -o myproject main.scm
    ./main

If your project has more than one library then you propably want to store the
libraries in one directory. For example:

    snow/foo/bar.sld
    main.scm

This is the case the compile-r7rs is tested against, main.scm imports (foo bar).
The command to compile and run this project is:

    compile-r7rs -I ./snow -o myproject main.scm
    ./main

### Installation of your project
<a name="#usual-rnrs-projects-installation-of-your-project"></a>

compile-r7rs (that is, this project) does not install your project files
anywhere, that is left for you to do. I will update this section as I use this
project more but here are some ideas. Basically each implementation might need
it's own specific way and is outside of scope of this project.

#### Interpreters

The interpreters, that is for example Sagittarius, Gauche, Chibi and STklos,
produce an executable that contains the command to run the main .scm file
and add given paths to the implementations load paths. So if you run this:

    compile-r7rs -I ./snow -o main main.scm

the resulting main file will only work in this directory, as the load path is
relative. For system wide installation the paths would need to be more like this:

    compile-r7rs -I /usr/local/lib/myproject/snow -o myproject main.scm

and then in makefile you would have:

    install:
        mkdir -p /usr/local/lib/myproject
        cp -r snow /usr/local/lib/myproject/
        install myproject /usr/local/bin/

#### Compilers

Compilers, that is for example Chicken, Gambit, Cyclone either produce static
executable or shared libraries. Cyclone produces static executable so
if you run this:

    compile-r7rs -I /usr/local/lib/myproject/snow -o myproject main.scm

and then in makefile you would have:

    install:
        install myproject /usr/local/bin/

Chicken compiles shared object files and is different from that, like I said I
hope to update this section when I get more experience with installing stuff
compiled by using this project. :)

## Development
<a name="#development"></a>

The program relies on two projects,
[r7rs-pffi](https://sr.ht/~retropikzel/r7rs-pffi/) and
[pffi-srfi-170](https://git.sr.ht/~retropikzel/pffi-srfi-170). They both are
stil work in progress so best way to help this project is to help on those
projects. That said bug fixes for this projects are also welcome. Pull requests
that add more SRFI-138 support are also welcome, but lets keep the scope on
that.

The program itself is a quite simple transformer of inputs to implementation
specific inputs. It stands on the shoulders of giants and relies on the
implementations to have all the needed features, then unifies the interface to
use them.

### Adding new implementations
<a name="#development-adding-new-implementations"></a>

The main program reads the flags and other inputs and passes them to a
transformer functions. So to add support for new implementations you need
to add the transformer functions and other data for it in libs/data.scm. You
should be able to decuct how they work from other transformers. If you need to
make utility functions add them into libs/util.scm and export them in
libs/util.sld.

### Misc notes
<a name="#development-misc-notes"></a>

When developing and testing, run:

    make && sudo make uninstall install

without the uninstall the changes to libraries dont seem to update.
