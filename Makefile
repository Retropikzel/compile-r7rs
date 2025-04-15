.PHONY: snow
PREFIX=/usr/local

build:
	printf "#!/bin/sh\nash -r7 -L ${PREFIX}/lib/compile-r7rs/snow ${PREFIX}/lib/compile-r7rs/main.scm \"\$$@\"\n" > compile-r7rs

snow:
	rm -rf snow
	mkdir -p snow
	cp -r ../r7rs-pffi/retropikzel snow/
	cp -r ../pffi-srfi-170/srfi snow/

install:
	mkdir -p ${PREFIX}/lib/compile-r7rs/snow
	cp -r snow/* ${PREFIX}/lib/compile-r7rs/snow
	cp -r libs ${PREFIX}/lib/compile-r7rs/snow/libs
	cp compile-r7rs.scm ${PREFIX}/lib/compile-r7rs/main.scm
	install compile-r7rs ${PREFIX}/bin/compile-r7rs

uninstall:
	rm -rf ${PREFIX}/lib/compile-r7rs/snow
	rm -rf ${PREFIX}/bin/compile-r7rs

clean:
	rm -rf test/foo
	rm -rf test/libs/bar/baz
	find . -name "*.so" -delete
	find . -name "*.o*" -delete
	find . -name "*.rkt" -delete
	find ./test -name "*.c" -delete
	find . -name "*.link" -delete
	find . -name "*.meta" -delete
	find . -name "*.import.*" -delete
