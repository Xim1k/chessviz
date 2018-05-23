all: compile

compile: ignore build main.o board.o
	gcc build/main.o build/board.o -o ignore/main

main.o:
	gcc -c src/main.c -o build/main.o

board.o:
	gcc -c src/board.c -o build/board.o

build:
	mkdir build

ignore:
	mkdir ignore

clean:
	rm -rf *.o 
