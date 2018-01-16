#ifndef STOREHEAD_H
#define STOREHEAD_H

    typedef struct Store
    {
		
		void *item;
		void (*ptr)(void *);
		
		
	} s; 

Store* createStore(void*item, void(*fptr)(void*p));

void displayStore(Store *s);
	



#endif
