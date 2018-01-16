#ifndef BOARDGAME_H
#define BOARDGAME_H

    typedef struct boardgame
    {
		
		char *name;
		double price;
		char *brandName;
		
	} boardGame;

	boardGame* createBook( char * title, double price, char * brand );
	
	double getPrice(  boardGame * bo ) ;

	char* getName( boardGame *bo );

	char* getBrandName( boardGame *bo );

	void printBoardGame( void * v );

	
	
	
#endif
