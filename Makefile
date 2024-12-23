PREFIX=/usr/local
build:
	@echo "No need to build, just run make install"

install:
	mkdir -p ${PREFIX}/bin
	install compile-r7rs ${PREFIX}/bin/compile-r7rs

run-test:
	@cd test && ../compile-r7rs -D ./libs -D ./libs2 main.scm

clean:
	find . -name "*.c*" -delete
	find . -name "*.o*" -delete
	find . -name "*.so*" -delete
	find . -name "*.import.scm" -delete
	find . -name "*.link" -delete
	find . -name "*.class" -delete
	find . -name "META-INF" -exec rm -rf {} \;
	find . -not -name "kawa.jar" -name "*.jar" -delete
	rm -rf test/main
