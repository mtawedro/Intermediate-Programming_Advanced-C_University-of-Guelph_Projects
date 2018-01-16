#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
 
   

   
   
   char secondArray[1000][1000];
 
  strcpy(secondArray[0],"readymade" );

    
 for(int z = 0; z< strlen(secondArray[0]) +1; z++)
 {
 
 
 
 
 
 if(secondArray[z] == 'e' && (secondArray[strlen(secondArray[0])] == 'e'  && secondArray[strlen(secondArray[0])+1] == '\0')) /*|| 
		( secondArray[z][j] == 'e' && (secondArray[z][strlen(secondArray[z])] == 'e' && secondArray[z][strlen(secondArray[z])+1] == '\0'))) */
		 {
			 
			 
			 voweleAlone++;
			 printf("inside value alone\n");
			
			 
		 }
 
}
 return 0;
}
