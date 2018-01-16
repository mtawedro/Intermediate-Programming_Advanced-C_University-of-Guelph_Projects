#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
    
    
    int main (void)
    {
    
    char line [100] ;
    char tempLine [100] ;
    char matrix[1000][50] ;
    int total = 0; 
    int flag = 0;  
    int eachLine[1000];
    int len= 0; 
    int j; 
    int i;
    int totalWords= 0; 
    int x = 0;
    char totalArray[1000][100];
    int r = 0;
    int c = 0;
    
   // printf("how many lines would you like to enter?\n");
   // scanf("%d", &len);
    //getchar();
    
    //user enters in their poem **DONT KNOW HWNE TO STOP?  
    //for(j = 0; j<len; j++)
   //{
    
    //printf("enter in line %d of the poem\n", (j+1));
    
    //scanf("%s", line);
    
   // fgets(line, 50, stdin);
    
    //printf("not working");
    
    //if(line[strlen(line)-1] == '\n')
   // {
      // line[strlen(line)-1] = '\0';
   // }
    
    
   // while(matrix[x][0] != '.')
    //{
		// fgets(line, 50, stdin);
		//strcpy(matrix[x], line); 
    
		
		
		
	  // x++;
	//}
    
    
    
    
   // strcpy(matrix[j], line); 
    
    //printf(" word is %s\n", matrix[j]);
    
    
    
   // if(matrix[j] == '.')
   // {
		
	//	break; 
			
	//}
    
     strcpy(matrix[0],"1 I can dream dreams that nobody has dreamt before" );
     strcpy(matrix[1],"2 advent adventures all over the world" );
     strcpy(matrix[2],"3 I want to write out my imagination" );
   
  
    
   //}
    
    //AMOUNT OF WORDS AND LINES 
    for(i = 0; i < 3; i++)
    {
		strcpy(tempLine, matrix[i]);
		
		//printf("temp line is %s\n", tempLine);
		
		 printf("%d\n", strlen(tempLine)); 
		
		for(int x = 0; x<strlen(tempLine); x++)
		{
				    
		    
		    if(matrix[i][x] != ' ' || matrix[i][x] != '\n')
			{
				
				//printf("checking this words");
				
				totalArray[r][c]= matrix[i][x];
				//totalWords++;
				//printf("total is %d\n", total);
			  
			    
			    // printf("char ecah time %c\n", totalArray[r][c]);
			    
			    c++;
			 
			 
		
			}
			
	     if(matrix[i][x] == ' ')
			   {
			     r++;
			     c= 0;
			     //x++;
			     printf("INSIDE IF");
			  	
			   }
	    
	    
	    
	    printf("testing before inner loop");
		
		}//end of inner for
		
		
		for(int z =0; z<r; r++)
		{ 
		    printf("string ecah time %s\n", totalArray[r]);
			    
		}
		
		
			  
			  for(int x = 0; x<r; x++)
		      {
		
		         if(totalArray[r]!= " ")
		         {
		         totalWords++;
			     } 	
	          
	          }
			  
		  
			  eachLine[i] = totalWords;
			
			  totalWords = 0;
			  r=0;
			
		
		
	
	} 
    
   
   //printf("%d words on %d lines\n" , totalWords, i);
   
    for(int u = 0; u<len; u++)
    {
    
    
    printf("each line %d ", eachLine[u]);
    
    
    
    }
    
    
    
    
    return 0; 
    
    }
