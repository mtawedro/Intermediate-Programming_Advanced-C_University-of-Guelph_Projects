#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <strings.h>

int main(void) {

 
 
 int i = 0;
 
 int x = 0;

 char string[] = "doggg";

 int count = 0;



struct Weather {
 
 char *temp;
 
 int percep;
 
};
 
struct  Weather **w;

w = malloc(sizeof(struct Weather *) * 10);

w[0]->temp = malloc(sizeof(char) * 10);

w[0]->percep= malloc(sizeof(int) *10);

strcpy(w[0]-> temp, "hello");


//for(x = 0; x<5; x++)
//{

while(x<10)

{
	x++;
	w[x]->percep = 20;


}	
//}



printf("num %d\n", w[4]->percep);


 
 printf("%s",w[0]->temp );




 
 return 0;
 
}
