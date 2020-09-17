CC=gcc
CFLAGS=-I.

make: pwgen.o
	$(CC) -o pwgen pwgen.o
