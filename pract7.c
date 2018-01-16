#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
 
   int  voweleAlone = 0; 
    int vowelBeside = 0;
    int vowelAlone = 0;
    int eAlone = 0;
    int totalVowel = 0;

   
   
   char secondArray[1000];
 
  strcpy(secondArray,"helloe" );

    
 printf(" string %d\n", strlen(secondArray));
 
 
		 for(int z = 0; z< strlen(secondArray) +1; z++)
 {
			 
			 
			 
			  if(secondArray[z] == 'a' || secondArray[z] == 'i' || secondArray[z] == 'o' || secondArray[z] == 'u' || secondArray[z] == 'e') 
			  
			    {
					
					
					 vowelAlone++;
					
					
				}
			  
			
	 
	 }
		 
		  printf(" value alone before%d\n", vowelAlone);
		 
		 for(int z = 0; z<strlen(secondArray) +1; z++)
 {
 
            if((secondArray[z] == 'e' && secondArray[z+1] == '\0') )
			  {
			      vowelAlone--;
			     secondArray[z] = '\0';
			  
			  }
 
 
}
 
		 
		 
		 
		 
		 
		 
		 //printf("eAlone%d\n", eAlone);
		 
	

 printf(" value alone after%d\n", vowelAlone);
 
 printf("length is %d\n", strlen(secondArray));
 
 for(int z = 0; z< strlen(secondArray) +1; z++)
 {
 

 
 if((secondArray[z] == 'a' || secondArray[z] == 'e' || secondArray[z]== 'i' || secondArray[z] == 'o' || secondArray[z] == 'u')
		 && (secondArray[z+1] == 'a' || secondArray[z+1] == 'e' || secondArray[z+1] == 'i' || secondArray[z+1] == 'o' || secondArray[z+1] == 'u'))
		 {
			 
			 
			 if((secondArray[z] == 'a' || secondArray[z] == 'e' || secondArray[z]== 'i' || secondArray[z] == 'o' || secondArray[z] == 'u') && (secondArray[z+1] == 'e' &&
			 secondArray[z+2] == '\0')) 
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
 printf("value beside%d\n", vowelBeside);


/*
else if ( vowelBeside!=0)
{
	
	if((secondArray[z] == 'a' || secondArray[z] == 'e' || secondArray[z]== 'i' || secondArray[z] == 'o' || secondArray[z] == 'u')
		 && (secondArray[z+1] == 'a' || secondArray[z+1] == 'e' || secondArray[z+1] == 'i' || secondArray[z+1] == 'o' || secondArray[z+1] == 'u'))
	
	{
		
		
		printf("inside continue");
		continue;
		
		
	}
	
	else if((secondArray[z] == 'a' || secondArray[z] == 'e' || secondArray[z]== 'i' || secondArray[z] == 'o' || secondArray[z] == 'u')
		 && (!(secondArray[z+1] == 'a' || secondArray[z+1] == 'e' || secondArray[z+1] == 'i' || secondArray[z+1] == 'o' || secondArray[z+1] == 'u')))
		 {
			 
			 
			 continue;
			 
			 
		 }
	
	else if((!(secondArray[z] == 'a' || secondArray[z] == 'e' || secondArray[z]== 'i' || secondArray[z] == 'o' || secondArray[z] == 'u'))
		 && (secondArray[z+1] == 'a' || secondArray[z+1] == 'e' || secondArray[z+1] == 'i' || secondArray[z+1] == 'o' || secondArray[z+1] == 'u'))
		 {
			 
			 
			 continue;
			 
			 
		 }
	
	
	
	
	
	else
	{
		
		printf("should be 2\n");
		vowelAlone++;
		
	}





}





*/



 
 
 
 
 
 
 
 //printf("outside value alone %d\n", voweleAlone);
 //printf("value beside %d\n", vowelBeside);
// printf("value alone %d\n", vowelAlone);
 
 
  totalVowel = (vowelAlone - vowelBeside);
 
printf("total Vowels : %d\n", totalVowel);

 
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 return 0;
}
