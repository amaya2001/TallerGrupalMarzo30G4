programa: main.o bsangre.o
	gcc -o bsangre main.o bsangre.o
	bsangre.exe
bsangre.o: bsangre.c
	gcc -c bsangre.c
main.o: main.c 
	gcc -c main.c
