#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int **createArray ( int rows, int cols )
{
	int i;
	
	int **array;
	
	array= malloc(sizeof(int*) * rows);
	
	 for(i = 0;i<rows; i++)
	 {
		 
		 
		 array[i]=malloc(sizeof (int) * cols);
		 
	 }
	  
	  

	
	return array; 
}

void freeArray ( int **array, int rows, int cols ) 
{
	int i;
	
	for ( i=0; i<rows; i++ ) 
	{    
		
	    
	      free ( array[i] ); 
	      
     } 
	      
	      free ( array );
	

}



int main ( )
{
   int **table;
   int rows, cols;

   rows = 10;
   cols = 20;
   printf ( "table = createArray ( %d, %d )\n\n", rows, cols );
   table = createArray ( rows, cols );

   printf ( "Storing 33, 44, 55\n" );
   table[2][7] = 33;
   table[3][4] = 44;
   table[9][19] = 55;
   
   printf ( "Retrieving %d, %d, %d\n", table[2][7],table[3][4], table[9][19] );
  
   freeArray ( table, rows, cols );
 
   return(0);
}
