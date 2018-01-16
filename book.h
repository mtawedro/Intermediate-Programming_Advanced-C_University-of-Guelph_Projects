#ifndef BOOK_H
#define BOOK_H

    typedef struct book {
    
    
    double price;
    
    
    char *name;



} Book;


Book* createBook( char * title, double price );

double getPrice( Book * b );


char* getName( Book *b );


char* getBrandName( Book *b );


void printBook( void * v );





#endif
