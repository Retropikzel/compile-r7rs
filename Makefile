.SILENT: test
PREFIX=/usr/local
SCHEME=chibi
IMAGE=${SCHEME}:latest
RNRS=r7rs

all: build

build:
	echo "Nothing to do, run make install"

install:
	install compile-r7rs ${PREFIX}/bin/compile-r7rs

test:
	# Misc
	rm -rf .tmp
	mkdir -p .tmp
	mkdir -p .tmp/libs
	mkdir -p .tmp/libs/foo
	mkdir -p .tmp/other_libs
	# R6RS testfiles
	printf "#!r6rs\n(import (rnrs) (foo bar))\n(baz)" > .tmp/main.sps
	printf "#!r6rs\n(library (foo bar) (export baz) (import (rnrs)) (define (baz) (display \"Hello from bar.sls\") (newline)))" > .tmp/libs/foo/bar.sls
	# Racket compability testfiles
	printf "#lang r7rs (import (scheme base)) (include \"bar.sld\")" > .tmp/libs/foo/bar.rkt
	# R7RS testfiles
	printf "(import (scheme base) (scheme write) (foo bar))\n(baz)" > .tmp/main.scm
	printf "(define-library (foo bar) (import (scheme base) (scheme write)) (export baz) (include \"bar.scm\"))" > .tmp/libs/foo/bar.sld
	printf "(define (baz) (display \"Hello from bar.scm\") (newline))" > .tmp/libs/foo/bar.scm
	# Tests
	rm -rf .tmp/main
	if [ "${RNRS}" = "r6rs" ]; then cd .tmp && COMPILE_R7RS=${SCHEME} sh ../compile-r7rs -o main -I libs main.sps; fi
	if [ "${RNRS}" = "r7rs" ]; then cd .tmp && COMPILE_R7RS=${SCHEME} sh ../compile-r7rs -o main -I libs main.scm; fi
	cd .tmp && ./main
	rm -rf .tmp/main
	if [ "${RNRS}" = "r6rs" ]; then cd .tmp && COMPILE_R7RS=${SCHEME} sh ../compile-r7rs -o main -A libs main.sps; fi
	if [ "${RNRS}" = "r7rs" ]; then cd .tmp && COMPILE_R7RS=${SCHEME} sh ../compile-r7rs -o main -A libs main.scm; fi
	cd .tmp && ./main

test-docker:
	docker build --build-arg IMAGE=${IMAGE} --build-arg SCHEME=${SCHEME} -f Dockerfile.test --tag=${SCHEME}-testing .
	docker run ${SCHEME}-testing sh -c "make SCHEME=${SCHEME} RNRS=${RNRS} test"



