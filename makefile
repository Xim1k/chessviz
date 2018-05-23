all: compile

compile: ignore build main.o board.o
	gcc build/main.o build/board.o -o ignore/main

main.o:
	gcc -Wall -Werror -c src/main.c -o build/main.o

board.o:
	gcc -Wall -Werror -c src/board.c -o build/board.o

build:
	mkdir build

ignore:
	mkdir ignore

clean:
	rm -rf build/*.o
