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
	@rm -rf .tmp
	@mkdir -p .tmp
	@mkdir -p .tmp/libs
	@mkdir -p .tmp/other_libs
	@echo "(import (rnrs))" > .tmp/main.sps
	@echo "(display \"Hello\") (newline)" >> .tmp/main.sps
	@echo "(import (scheme base) (scheme write))" > .tmp/main.scm
	@echo "(display \"Hello\") (newline)" >> .tmp/main.scm
	@rm -rf .tmp/main
	@if [ "${RNRS}" = "r6rs" ]; then cd .tmp && COMPILE_R7RS=${SCHEME} sh ../compile-r7rs -o main main.sps; fi
	@if [ "${RNRS}" = "r7rs" ]; then cd .tmp && COMPILE_R7RS=${SCHEME} sh ../compile-r7rs -o main main.scm; fi
	@cd .tmp && ./main

test-docker:
	docker build --build-arg IMAGE=${IMAGE} --build-arg SCHEME=${SCHEME} -f Dockerfile.test --tag=${SCHEME}-testing .
	docker run ${SCHEME}-testing sh -c "make SCHEME=${SCHEME} RNRS=${RNRS} test"



