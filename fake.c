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
 
  strcpy(secondArray,"maitiina" );

    
 printf(" string %d\n", strlen(secondArray));
 
 for(int z = 0; z< strlen(secondArray) +1; z++)
 {
 
 
 
 /*
 
 if((secondArray[z] == 'e') && (secondArray[strlen(secondArray) -1] == 'e'  && secondArray[strlen(secondArray)] == '\0')) /*|| 
		( secondArray[z][j] == 'e' && (secondArray[z][strlen(secondArray[z])] == 'e' && secondArray[z][strlen(secondArray[z])+1] == '\0'))) 
		 {
			 
			 
			 voweleAlone++;
			
			   
			
			 printf("inside for %d\n", voweleAlone );
			
			 
		 }

 
             // if(secondArray[z] == secondArray[strlen(secondArray) -1])
			  // {
			     //  printf("inside if\n");
			    //   break;
			       
			  // }

  */
 
 if((secondArray[z] == 'a' || secondArray[z] == 'e' || secondArray[z]== 'i' || secondArray[z] == 'o' || secondArray[z] == 'u')
		 && (secondArray[z+1] == 'a' || secondArray[z+1] == 'e' || secondArray[z+1] == 'i' || secondArray[z+1] == 'o' || secondArray[z+1] == 'u'))
		 {
			 
			 vowelBeside++;
			  printf("value beside%d\n", vowelBeside);
		    
		 
		 
		 }
		 


 
 
 
 
 
}
 
 
 
 
 //good doesnt include e at the end 
 if(vowelBeside!=0  )
		 {
			 
			 
			 
			 
			 
			  if((secondArray[z] == 'a' || secondArray[z] == 'i' || secondArray[z] == 'o' || secondArray[z] == 'u' || secondArray[z] == 'e') &&  (!(secondArray[z+1] == 'a' || secondArray[z+1] == 'e'
			   || secondArray[z+1] == 'i' || secondArray[z+1] == 'o' || secondArray[z+1] == 'u') ))
			  
			    {
					
					 printf(" if valueBeside == 0 should be 2\n");
					 vowelAlone++;
					
					
				}
			  
			
	 
		 
		 
		 }





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









 
 for(int z = 0; z< strlen(secondArray) +1; z++)
 {
 
            if((secondArray[z] == 'e' && secondArray[z+1] == '\0') )
			  {
			      vowelAlone--;
			      
			      if(vowelAlone ==0)
			      {
			      
					eAlone++;
				  
				  }
			      
			      printf("inside if\n");
			  }
 
 
}
 
 
 
 
 
 
 //printf("outside value alone %d\n", voweleAlone);
 printf("value beside %d\n", vowelBeside);
 printf("value alone %d\n", vowelAlone);
 
 
  totalVowel = vowelBeside+ vowelAlone + eAlone;
 
printf("total Vowels : %d\n", totalVowel);

 
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 return 0;
}
