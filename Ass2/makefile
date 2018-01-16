CC=gcc
CFLAGS=-Wall -std=c99

fleschIndex: fleschIndex.o
	$(CC) -o fleschIndex fleschIndex.o -lm

fleschIndex.o : fleschIndex.c
	$(CC) $(CFLAGS) -c fleschIndex.c
clean :
	rm fleschIndex fleschIndex.o
