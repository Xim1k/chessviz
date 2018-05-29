all: ignore/main

ignore/main: ignore build build/main.o build/board.o
	gcc -Wall -Werror build/main.o build/board.o -o ignore/main

build/main.o: src/main.c src/board.h
	gcc -Wall -Werror -c src/main.c -o build/main.o

build/board.o: src/board.c src/board.h
	gcc -Wall -Werror -c src/board.c -o build/board.o

build:
	mkdir build

ignore:
	mkdir ignore

clean:
	rm -rf build/*.o ignore/

gdb:
	gcc -Wall -O3 -g -o main src/main.c src/board.c
