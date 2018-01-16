CC = gcc
CFLAGS = -Wall -pedantic -std=c99 -Iinclude -c -o

all:
		$(CC) $(CFLAGS) bin/store.o src/store.c
		$(CC) $(CFLAGS) bin/gameboard.o src/gameboard.c
		$(CC) $(CFLAGS) bin/book.o src/book.c
		$(CC) $(CFLAGS) bin/main.o src/main.c
		$(CC) bin/store.o bin/gameboard.o bin/book.o bin/main.o -o bin/runMe
		
		

clean:
		rm bin/*.o







//CXXFLAGS = -O3 -o prog -rdynamic -D_GNU_SOURCE -L./libLinkedList
//LIBS = libLinkedList.a -lpthread 