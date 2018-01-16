#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
 
   int  voweleAlone = 0; 
    int vowelBeside = 0;
    int vowelAlone = 0;
    int eAlone = 0;
    int totalVowel = 0;
    int totalResult = 0;
    
     char secondArray[1000][1000];
    
    
    strcpy(secondArray[0],"readymade" );

    strcpy(secondArray[1],"readymade" );

   


 for(int z=0; z< (2); z++ )
    {
     
     
		for(int j=0; j<strlen(secondArray[z])+1; j++ )
		{


				
			  if(secondArray[z][j] == 'a' || secondArray[z][j] == 'i' || secondArray[z][j] == 'o' || secondArray[z][j] == 'u' || secondArray[z][j] == 'e' || secondArray[z][j] == 'y') 
			  
			    {
					
					
					 vowelAlone++;
					
					
				}
 
 
			
				
	//here
		
		
		
	}
 	printf("suppose to be 5%d \n", vowelAlone);
		//here
 
		
						for(int j=0; j<strlen(secondArray[z])+1; j++ )
						{
			
						if((secondArray[z][j] == 'e' && secondArray[z][j+1] == '\0') )
						{
							vowelAlone--;
							secondArray[z][j] = '\0';
			  
						}
 
		
		
		
						}
		
		printf("suppose to be 4%d \n", vowelAlone);
		
						for(int j=0; j<strlen(secondArray[z])+1; j++ )
					{
		
		
						if((secondArray[z][j] == 'a' || secondArray[z][j] == 'e' || secondArray[z][j]== 'i' || secondArray[z][j] == 'o' || secondArray[z][j] == 'u' || secondArray[z][j] == 'y')
						&& (secondArray[z][j+1] == 'a' || secondArray[z][j+1] == 'e' || secondArray[z][j+1] == 'i' || secondArray[z][j+1] == 'o' || secondArray[z][j+1] == 'u' || secondArray[z][j+1] == 'y'))
						{
			 
			 
							if((secondArray[z][j] == 'a' || secondArray[z][j] == 'e' || secondArray[z][j]== 'i' || secondArray[z][j] == 'o' || secondArray[z][j] == 'u' || secondArray[z][j] == 'y') && (secondArray[z][j+1] == 'e' &&
							secondArray[z][j+2] == '\0')) 
							{
								printf("inside continue\n");
								continue; 
			     
							}
			 
							else
							{
								vowelBeside++;
							}
		    
		 
		 
					 }
		 

		
		
				}
		
		
		            totalVowel = (vowelAlone - vowelBeside);
					printf("total Vowels : %d\n", totalVowel);
		
					vowelAlone = 0;
					vowelBeside = 0;
					
					
					
					//totalResult = totalResult + totalVowel;
		
	
	} //end of for
 
 
 
 
 
// printf("total Result : %d\n", totalResult);
 
 
 
 /*
 
 for(int z=0; z< (i -1); z++ )
    {
     
     
		for(int j=0; j<strlen(secondArray[z])+1; j++ )
		{
			
				 if((secondArray[z][j] == 'e' && secondArray[z][j+1] == '\0') )
				{
					vowelAlone--;
					secondArray[z][j] = '\0';
			  
				}
 
		
		
		
		}
		
		
		
		
		
	}
 
 
 */
 
 /*
 for(int z=0; z< (i -1); z++ )
    {
     
     
		for(int j=0; j<strlen(secondArray[z])+1; j++ )
		{
		
		
			if((secondArray[z][j] == 'a' || secondArray[z][j] == 'e' || secondArray[z][j]== 'i' || secondArray[z][j] == 'o' || secondArray[z][j] == 'u')
			&& (secondArray[z][j+1] == 'a' || secondArray[z][j+1] == 'e' || secondArray[z][j+1] == 'i' || secondArray[z][j+1] == 'o' || secondArray[z][j+1] == 'u'))
			{
			 
			 
				if((secondArray[z][j] == 'a' || secondArray[z][j] == 'e' || secondArray[z][j]== 'i' || secondArray[z][j] == 'o' || secondArray[z][j] == 'u') && (secondArray[z][j+1] == 'e' &&
				secondArray[z][j+2] == '\0')) 
				{
					printf("inside continue\n");
					continue; 
			     
				}
			 
				else
				{
					vowelBeside++;
				}
		    
		 
		 
			}
		 

		
		
		
		}
	
	
	
}
 */
 
 //totalVowel = (vowelAlone - vowelBeside);
 
//printf("total Vowels : %d\n", totalVowel);

 return 0 ;
}
 
