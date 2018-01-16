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
    char totalArray[1000];
    int s = 0;
    char prevChar = '\0';
    
   printf("how many lines would you like to enter?\n");
   scanf("%d", &len);
   getchar();
    
    //user enters in their poem **DONT KNOW HWNE TO STOP?  
    for(j = 0; j<len; j++)
  {
    
   printf("enter in line %d of the poem\n", (j+1));
    
   scanf("%s", line);
    
   fgets(line, 50, stdin);
    
    //printf("not working");
    
    //if(line[strlen(line)-1] == '\n')
   // {
      // line[strlen(line)-1] = '\0';
   // }
    
   // printf("enter the poem\n:");
   // while(matrix[x][0] != '.')
   // {
		 //fgets(line, 50, stdin);
		//strcpy(matrix[x], line); 
    
		//printf("%s\n", matrix[x]);
		
		
	   //x++;
	//}
    
    
    
    
   strcpy(matrix[j], line); 
    
    //printf(" word is %s\n", matrix[j]);
    
    
    
   // if(matrix[j] == '.')
   // {
		
	//	break; 
			
	//}
    
    
    
   }
   
   printf("exited the loop");
    
    //AMOUNT OF WORDS AND LINES 
    for(i = 0; i < len; i++)
    {
		strcpy(tempLine, matrix[i]);
		
		//printf("temp line is %s\n", tempLine);
		
		 printf("%d\n", strlen(tempLine)); 
		
		for(int x = 0; matrix[i][x]!= '\0'; x++)
		{
				    
		    if(matrix[i][x] != ' ' || matrix[i][x] == '\t' )
			{
				
				
				 //if(prevChar!=' ' && prevChar!='\n' && prevChar!='\t' && prevChar!='\0')
                 
                   total= total +1;
				    totalWords++;
				//printf("total is %d\n", total);
				
  	            while (matrix[i][x] != ' ' && matrix[i][x] == '\t' )
  	            {
					
					
					break;
					
				}
			
			
			
			
			
			
			}
			
			
			
			//if(matrix[strlen(tempLine) ]==' ')
			//{
				
			//	matrix[strlen(tempLine) ]=='\0';
				
			//}
			
			
			
			if(matrix[i][x] == '.')
			{
				
				
				flag = 1;
				break;
				
			}
			
			
		//printf("total after last array  is %d\n", total);
		
		}
		
		
		//if(matrix[i] == '.') this should go in the begging before inner loop strats after bigger loop 
			//{
				
				
				//flag = 1;
				//eachLine[i] = total;
				//break;
				
			//}
			
		   if(flag == 1)
		   {
		 
		     eachLine[i] = total;
		    break; 
			
		  }
		
		    else 
		    {
			  eachLine[i] = total;
			
			  total = 0;
			
		   }
		
		
	
	} 
    
   
   printf("%d words on %d lines\n" , totalWords, i);
   
    for(int r = 0; r<len; r++)
    {
    
    
    printf("%d ", eachLine[r]);
    
    
    
    }
    
    
    
    
    return 0; 
    
    }
