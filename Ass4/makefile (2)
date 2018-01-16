CC=gcc
CFLAGS = -Wall -std=c99

contactsList1 : contactsList1.o
	$(CC) -o contactsList1 contactsList1.o

contactsList1.o : contactsList1.c
	$(CC) $(CFLAGS) -c contactsList1.c

clean:
	rm contactsList1 contactsList1.o