.PHONY: test
PREFIX=/usr/local
CC=gcc
CHICKEN_FLAGS=-optimize-level 3

build:
	${CC} -o compile-r7rs \
		-Os \
		-fomit-frame-pointer \
		-DHAVE_CHICKEN_CONFIG_H \
		src/*.c \
		chicken/src/*.c \
		-lm \
		-Ichicken/include

test-sagittarius:
	cd test && sash -r7 -L ${PWD}/snow ../compile-r7rs.scm

test-racket:
	cd test && racket -I r7rs -S ${PWD}/snow --script ../compile-r7rs.scm

build-snow:
	rm -rf snow
	mkdir -p snow
	cp -r ../r7rs-pffi/retropikzel snow/
	cp -r ../pffi-srfi-170/srfi snow/

c-files: src
	csc -t snow/retropikzel/pffi.sld -J ${CHICKEN_FLAGS} -output-file src/retropikzel.pffi.c
	csc -t snow/srfi/170.sld -J ${CHICKEN_FLAGS} -output-file src/srfi.170.c
	csc -t compile-r7rs.scm ${CHICKEN_FLAGS} -output-file src/compile-r7rs.c

test:
	cd test && ../compile-r7rs -I ./libs
	cd test && ../compile-r7rs -I ./libs foo.scm
	cd test && ./foo

src:
	mkdir -p src

install:
	mkdir -p ${PREFIX}/bin
	install compile-r7rs ${PREFIX}/bin/compile-r7rs

clean:
	rm -rf src
