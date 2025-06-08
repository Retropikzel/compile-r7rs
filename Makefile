PREFIX=/usr/local

build:
	printf "#!/bin/sh\nsash --disable-cache -r7 -L ${PREFIX}/lib/compile-r7rs/snow ${PREFIX}/lib/compile-r7rs/main.scm \"\$$@\"\n" > compile-r7rs

build-docker-images:
	for implementation in $(shell sash -L ./snow -L . compile-r7rs.scm --list-schemes); \
		do \
		docker build . --build-arg COMPILE_R7RS=$${implementation} --tag=retropikzel1/compile-r7rs:$${implementation}; \
		done

#for implementation in $(shell sash -L ./snow -L . compile-r7rs.scm --list-schemes);

push-docker-images:
	for implementation in chibi chicken sagittarius; \
		do \
		docker push compile-r7rs:$${implementation}; \
		done

snow:
	mkdir -p snow
	cp -r ../foreign-c/foreign snow/
	cp -r ../foreign-c-srfi-170/srfi snow/

# Does uninstall because without that the changes do not seem to update
install: uninstall
	mkdir -p ${PREFIX}/lib/compile-r7rs/snow
	cp -r snow/* ${PREFIX}/lib/compile-r7rs/snow
	cp -r libs ${PREFIX}/lib/compile-r7rs/snow/libs
	cp compile-r7rs.scm ${PREFIX}/lib/compile-r7rs/main.scm
	install compile-r7rs ${PREFIX}/bin/compile-r7rs

install-compile-r7rs-docker:
	install compile-r7rs-docker.sh ${PREFIX}/bin/compile-r7rs-docker

uninstall:
	rm -rf ${PREFIX}/lib/compile-r7rs/snow
	rm -rf ${PREFIX}/bin/compile-r7rs

dist:
	mkdir -p dist

# Uses wine and innosetup
installer-exe: dist
	cp README.md README.txt
	wine "${HOME}/.wine/drive_c/Program Files (x86)/Inno Setup 6./Compil32.exe" /cc installer.iss

test-r6rs:
	rm -rf /tmp/compile-r7rs-test-result.txt
	mkdir -p test
	mkdir -p test/snow
	mkdir -p test/snow/foo
	printf "#!r6rs\n(library (foo bar) (export baz) (import (rnrs)) (define baz (lambda () (display \"Test successfull\") (newline))))" > test/snow/foo/bar.sls
	printf "#!r6rs\n(import (rnrs) (foo bar)) (baz)" > test/main.sps
	cd test && COMPILE_R7RS=${COMPILE_R7RS} compile-r7rs -I ./snow -o main main.sps
	-cd test && ./main > /tmp/compile-r7rs-test-result.txt 2>&1
	@grep "Test successfull" /tmp/compile-r7rs-test-result.txt || (echo "Test failed, output: " && cat /tmp/compile-r7rs-test-result.txt && exit 1)

test-r6rs-docker:
	docker build --build-arg COMPILE_R7RS=${COMPILE_R7RS} --tag=compile-r7rs-test-${COMPILE_R7RS} .
	docker run -v "${PWD}":/workdir -w /workdir -t compile-r7rs-test-${COMPILE_R7RS} sh -c "make && make install && make clean-test COMPILE_R7RS=${COMPILE_R7RS} test-r6rs"

test-r7rs:
	rm -rf /tmp/compile-r7rs-test-result.txt
	mkdir -p test
	mkdir -p test/snow
	mkdir -p test/snow/foo
	echo "(import (scheme base) (foo bar)) (baz)" > test/main.scm
	echo "(define baz (lambda () (display \"Test successfull\") (newline)))" > test/snow/foo/bar.scm
	echo "(define-library (foo bar) (import (scheme base) (scheme write)) (export baz) (include \"bar.scm\"))" > test/snow/foo/bar.sld
	cd test && COMPILE_R7RS=${COMPILE_R7RS} compile-r7rs -I ./snow -o main main.scm
	-cd test && ./main > /tmp/compile-r7rs-test-result.txt 2>&1
	@grep "Test successfull" /tmp/compile-r7rs-test-result.txt || (echo "Test failed, output: " && cat /tmp/compile-r7rs-test-result.txt && exit 1)

test-r7rs-docker:
	docker build --build-arg COMPILE_R7RS=${COMPILE_R7RS} --tag=compile-r7rs-test-${COMPILE_R7RS} .
	docker run -v "${PWD}":/workdir -w /workdir -t compile-r7rs-test-${COMPILE_R7RS} sh -c "make && make install && make clean-test COMPILE_R7RS=${COMPILE_R7RS} test-r7rs"

clean-snow:
	rm -rf snow

clean-test:
	rm -rf test

clean:
	find . -name "*.so" -delete
	find . -name "*.o*" -delete
	find . -name "*.rkt" -delete
	find . -name "*.link" -delete
	find . -name "*.meta" -delete
	find . -name "*.import.*" -delete
	rm -rf README.txt
	rm -rf dist
	rm -rf test


