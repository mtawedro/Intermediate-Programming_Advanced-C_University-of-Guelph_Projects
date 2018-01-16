/*******************************************
 * Name: Martina Tawedrous
 * Date: January 31 2017
 * Program: reversePoem.c
 * Email: mtawedro@mail.uoguelph.ca
 * Student Num: 0977473
 * *****************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
    
int main (void)
{
    
    char **matrix;
    char line [1000] ;
    int i;
    int j;
    int x = 0;
  
   /*mallocs only 1 space to start with*/
    matrix = malloc(sizeof(char*) * 1);
	 
    printf("Enter the poem:\n");
    
   
    do
    {
  
        fgets(line, 1000, stdin);
		
        /* reallocs 1 space as the user enters in a line */
        matrix = realloc(matrix, sizeof(char*) * (x +1));
        
        /* at index x, reserve spaces dependent on the length of the string */
        matrix[x] = malloc(sizeof(char) * (strlen(line) +1 )); 
         
        /* copys the string at index x */
        strncpy(matrix[x], line, (strlen(line) +1));
         	
	    x++;
   
   
    } while(matrix[x-1][0]!= '.');
     
   
    
    /*Prints Lines Backwards */
    for(i = (x - 1); i >= 0; i--){
		
        /*if period is present, then wont print period with newline*/
        if(matrix[i][0] == '.') 
		{
				
            continue;
				
	    }
		
		
		else
		{
		    printf("%s", matrix[i]);
	    
	    }
	
    }


    /*free pointers*/
    for ( j=0; j< (x - 1); j++ ) {    
		
	      free ( matrix[j] ); 
	      
    } 
	      
	 
	free ( matrix );
    
    
    return (0);


}
