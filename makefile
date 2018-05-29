all: ignore build ignore/main/prog ignore/test/main

ignore/test/main: build/test/test.o build/main/board.o
	gcc -Wall -Werror build/test/test.o build/main/board.o -o ignore/test/main

ignore/main/prog: build/main/main.o build/main/board.o
	gcc -Wall -Werror build/main/main.o build/main/board.o -o ignore/main/prog

build/main/main.o: src/main.c src/board.h
	gcc -Wall -Werror -c src/main.c -o build/main/main.o

build/main/board.o: src/board.c src/board.h
	gcc -Wall -Werror -c src/board.c -o build/main/board.o

build/test/test.o: test/test.c src/board.h
	gcc -Wall -Werror -c test/test.c -o build/test/test.o

build:
	mkdir build
	mkdir build/test
	mkdir build/main

ignore:
	mkdir ignore
	mkdir ignore/main
	mkdir ignore/test

clean:
	rm -rf build/main/*.o build/test/*.o ignore/

gdb:
	gcc -Wall -O3 -g -o main src/main.c src/board.c
