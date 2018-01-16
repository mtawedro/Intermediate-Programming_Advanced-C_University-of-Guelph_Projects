#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "boardGame.h"

boardGame* createBook( char * title, double price, char * brand )
{
    boardGame* bo = malloc(sizeof(boardGame));
    
    boardGame->price  = price;
    boardGame->name = title;
    boardGame->brandName = brand; 
   
    return bo;
}

double getPrice(  boardGame * bo ) 
{ 
    return bo->price;
}


char* getName(  boardGame *bo )
{
	return bo->name;
}


char* getBrandName(  boardGame *bo )
{
	return bo->name;
}



void printBoardGame( void * v )
{
     boardGame * bo = ( boardGame *) v;
   
    printf("<%s> : <%f>: <%s>\n", getName(bo), getPrice(bo), getBrandName(bo) );
}



