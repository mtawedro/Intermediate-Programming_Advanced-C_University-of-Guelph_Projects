#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
    
    int main (void)
    {
    
    char **matrix;
    char line [1000] ;
    char tempLine [100] ;
   /*char matrix[1000][100] ; */
    int total = 0; 
    int eachLine[1000];
    int i;
    int totalWords= 0; 
    int x = 0;
  
   matrix = malloc(sizeof(char*) * 1);
	 
	 printf("Enter the poem:\n");
    
   
  do
  {
  
        fgets(line, 1000, stdin);
		/*strcpy(matrix[x], line);*/
		 matrix = realloc(matrix, sizeof(char*) * (x +1));
        
         matrix[x] = malloc(sizeof(char) * (strlen(line) +1 )); 
         
         strncpy(matrix[x], line, (strlen(line) +1));
         
         //printf(" Tst %s\n", matrix[x]);
		
	    x++;
   
   
    } while(matrix[x-1][0]!= '.');
     
   
    
    /*CALCS AMOUNT OF WORDS AND LINES */
    for(i = (x - 1); i >= 0; i--)
    {
		printf(" String %s\n", matrix[i]);
		
		
		strcpy(tempLine, matrix[i]);
		
	
	
		// if(matrix[i][0] == '.') 
		  //{
				
			//break;
				
	      //}


         for(int x = 0; x<strlen(tempLine); x++)
		{
				    
		    if(matrix[i][x] == ' ' || matrix[i][x] == '\n' || matrix[i][x] == '\t' ||  matrix[i][x]=='\0') 
		    
		    {
			    
                 total= total +1;
				 totalWords++;
				
  	
			}
			
			
			if((matrix[i][x] == ' ' && matrix[i][x+1] == ' ' )|| (matrix[i][x] == ' ' && matrix[i][x+1] == ' ' && matrix[i][x+2] == '\n') )
			{
				
				total--;
				totalWords--;
				
				
			}
			
	
		
		}
		
			  eachLine[i] = total;
			
			  total = 0;
						
	
	} //end of outer for 
    
   
   
   
   if(i==1 && totalWords == 1)
   {
	   
	   
	   printf("%d word on %d line\n" , totalWords, i);
	   
	   
   }
   
   else if(i==1)
   {
	   
	   printf("%d words on %d line\n" , totalWords, i);
	   
	   
	   
   }
   
   else if(totalWords == 1)
   {
	   
	   printf("%d word on %d lines\n" , totalWords, i);
	    
	   
   }
   
   
   
   else
   {
   
    printf("%d words on %d lines\n" , totalWords, i);
   
    for(int r = 0; r<i; r++)
    {
    
      printf("%d ", eachLine[r]);

    }
      
  } 
       
       
       return 0; 
     
    }
