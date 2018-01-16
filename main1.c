#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char ** argv)
{
	
	
	Book *book1 = createBook(" Harry Potter And The Cursed Child", 19.99);
	
	Book *book2 = createBook("The Hunger Games", 10.50);
	
	BoardGame *game1 = createBook(" Uno", 5.99,"Matta" );
	
	BoardGame *game2 = createBook("Trouble", 14.99, "Hasbro");
	
	void(*bkPtr)(void * ptr);
	bkPtr = &printBook;
	
	void(*gamePtr)(void * ptr2);
	gamePtr = &printGame;
	
	
	Store *myStore1 = createStore(book1, bkPtr);
	Store *myStore2 = createStore(book2, bookPtr);
	Store *myStore3 = createStore(game1, gamePtr); 
	Store *myStore4 = createStore(game2, gamePtr); 
	
	
	displayStore(myStore1);
	
	displayStore(myStore2);
	
	displayStore(myStore3);
	
	displayStore(myStore4);
	
	
	
	return 0;
	
	
}
