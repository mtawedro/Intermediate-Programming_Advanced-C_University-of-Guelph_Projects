#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <strings.h>

int main(void) {

 
 char *ptr;

 int i = 0;

 char string[] = "doggg";

 int count = 0;


 ptr = index(string, 'g');
 
 if(ptr != NULL){
  
count++; 

 }

 

 while(ptr != NULL)

 {

  ptr++;

    
     ptr = index(ptr, 'g');


  if(ptr != NULL)

  {


  
    printf("in if tatememnt \n");
    count++;
 
printf(" num total %d\n", count);
 


     }

 

 }


 printf(" final num total %d\n", count);
 
 
 
 
 
 
 return 0;
}
