#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "storeHead.h"

Store* createStore(void*item, void(*fptr)(void*p))

	{
		Store *s = malloc(sizeof(Store));
		
		s->item = item;
		s->fptr = fptr;
		
		return s;
	
	}

	void displayStore(Store *s)
	{
	
		void *ptr;
		ptr = s->item;
		
		void(*fptr)(void* p);
		fptr = s->fptr;
		
		fptr(ptr);
		
	
	
	}
