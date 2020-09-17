CC=gcc
CFLAGS = -g -Wall
make: 
	$(CC) $(CFLAGS) -DCOMP_TIME=$$(date +%s) -o pwgen pwgen.c

.PHONY: clean
clean:
	rm -f pwgen *.o
