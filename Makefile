.SILENT: test
PREFIX=/usr/local
SCHEME=chibi
DOCKER_TAG=latest
DEBIAN_IMAGE=${SCHEME}:${DOCKER_TAG}
ALPINE_IMAGE=${SCHEME}:alpine-${DOCKER_TAG}
RNRS=r7rs

SFX=sps
ifeq "${RNRS}" "r7rs"
SFX=scm
endif

all: build

build:
	echo "Nothing to build, run make install"

install:
	install compile-r7rs ${PREFIX}/bin/compile-r7rs

uninstall:
	rm -rf ${PREFIX}/bin/compile-r7rs

test:
	# Misc
	rm -rf .tmp
	mkdir -p .tmp
	mkdir -p .tmp/libs
	mkdir -p .tmp/libs/foo
	mkdir -p .tmp/other_libs
	# R6RS testfiles
	printf "#!r6rs\n(import (rnrs))\n(display \"Hello main1\") (newline))\n" > .tmp/main1.sps
	printf "#!r6rs\n(import (rnrs) (foo bar))\n(baz)\n" > .tmp/main2.sps
	printf "#!r6rs\n(library (foo bar) (export baz) (import (rnrs)) (define (baz) (display \"Hello from bar.sls\") (newline)))" > .tmp/libs/foo/bar.sls
	# Racket compability testfiles
	printf "#lang r7rs (import (scheme base)) (include \"bar.sld\")" > .tmp/libs/foo/bar.rkt
	# R7RS testfiles
	printf "(import (scheme base) (scheme write))\n(display \"Hello main1\") (newline)" > .tmp/main1.scm
	printf "(import (scheme base) (scheme write) (foo bar))\n(baz)" > .tmp/main2.scm
	printf "(define-library (foo bar) (import (scheme base) (scheme write)) (export baz) (include \"bar.scm\"))" > .tmp/libs/foo/bar.sld
	printf "(define (baz) (display \"Hello from bar.scm\") (newline))" > .tmp/libs/foo/bar.scm
	# Tests
	rm -rf .tmp/a.out
	cd .tmp && COMPILE_R7RS=${SCHEME} sh ../compile-r7rs main1.${SFX}
	cd .tmp && ./a.out
	rm -rf .tmp/a.out
	cd .tmp && COMPILE_R7RS=${SCHEME} sh ../compile-r7rs -o main main1.${SFX}
	cd .tmp && ./main
	rm -rf .tmp/main
	cd .tmp && COMPILE_R7RS=${SCHEME} sh ../compile-r7rs -o main -I libs main2.${SFX}
	cd .tmp && ./main
	cd .tmp && ./main
	rm -rf .tmp/main
	cd .tmp && COMPILE_R7RS=${SCHEME} sh ../compile-r7rs -o main -A libs main2.${SFX}
	cd .tmp && ./main
	cd .tmp && ./main
	then cd .tmp && COMPILE_R7RS=${SCHEME} sh ../compile-r7rs -o main -I libs -A libs main2.${SFX}
	cd .tmp && ./main

test-docker-debian:
	docker build --build-arg IMAGE=${DEBIAN_IMAGE} --build-arg SCHEME=${SCHEME} -f Dockerfile.test --tag=${SCHEME}-testing --quiet .
	docker run ${SCHEME}-testing sh -c "make SCHEME=${SCHEME} RNRS=${RNRS} test"

test-docker-alpine:
	docker build --build-arg IMAGE=${ALPINE_IMAGE} --build-arg SCHEME=${SCHEME} -f Dockerfile.alpine.test --tag=${SCHEME}-alpine-testing --quiet .
	docker run ${SCHEME}-alpine-testing sh -c "make SCHEME=${SCHEME} RNRS=${RNRS} test"



