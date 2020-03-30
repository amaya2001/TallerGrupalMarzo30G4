all: programa
programa: Main Bsangre
	gcc -o bsangre main.o bsangre.o
	bsangre.exe
Main: main.c bsangre.h
	gcc -c main.c
Bsangre: bsangre.c bsangre.h
	gcc -c bsangre.c