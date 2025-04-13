PREFIX=/usr/local
CC=gcc

build:
	${CC} -o compile-r7rs \
		-Os \
		-fomit-frame-pointer \
		-DHAVE_CHICKEN_CONFIG_H \
		src/compile-r7rs.c \
		chicken/src/*.c \
		-lm \
		-Ichicken/include

c-files: src
	csc -t compile-r7rs.scm -optimize-level 3 -output-file src/compile-r7rs.c

src:
	mkdir -p src

install:
	mkdir -p ${PREFIX}/bin
	install compile-r7rs ${PREFIX}/bin/compile-r7rs

clean:
	rm -rf src
