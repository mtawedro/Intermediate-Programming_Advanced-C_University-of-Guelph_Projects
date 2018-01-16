#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <strings.h>

int main(void) {

	int ROWS=5;
    int COLS= 80;
    char buffer[ROWS][COLS];
    char secondArray[1000][1000];
    char thirdArray[1000][1000];
    int r =0;
    int c =0;
    int p =0;
    int m=0;
    int totalWords=0;
    int totalSen = 0;
    
    
    
    
   for(int a = 0; a<1000; a++)
   {
		secondArray[a][0] = 'x';
		thirdArray[a][0] = 'x';
		
		
		
   }

    strcpy(buffer[0],"1 I can dream. dreams ............. that nobody has h dreamt before?" );
    strcpy(buffer[1],"2 advent adventures all over the world" );
    strcpy(buffer[2],"3 I want to write out my imagination" );
    strcpy(buffer[3],"4 tomorrow and yesterday and today" );
    strcpy(buffer[4],"5 A yellow and your face fire clinging deep in a dry well what " );
    
    
    for(int i = 0; i<5; i++)
    {
		for(int j =0; j<(strlen(buffer[i]) +1); j++)
		{
			
			if(buffer[i][j] == ' ' || buffer[i][j] == '\n' ||buffer[i][j] == '\t' || buffer[i][j]=='\0')
			{
				
				
				//secondArray[r][c] = buffer[i][j];
				r++;
				c=0;				
			
			}
			
			else
			{
				secondArray[r][c] = buffer[i][j];
				c++;
			}
			
			
	}
		
			
		
	}




	
		totalWords= r; 
		
		
		
		
		
		for(int z =0; z<r; z++)
		{
			
			if(secondArray[z][0] == 'x' || secondArray[z][0] == '\n' || secondArray[z][0] == '\t' || secondArray[z][0]=='\0' )
			{
				
				totalWords--;
				
			}
		
		}





printf("Total Words %d: \n", totalWords);


//


for(int u = 0; u<5; u++)
    {
		for(int k =0; k<(strlen(buffer[u]) +1); k++)
		{
			
			if(buffer[u][k] == '!' || buffer[u][k] == '.' ||buffer[u][k] == '?' || buffer[u][k]==':'|| buffer[u][k]==';')
			{
				//thirdArray[p][m] = buffer[u][k]; //tst take this after
				p++;
				m=0;				
			
			}
			
			else
			{
				thirdArray[p][m] = buffer[u][k];
				//printf("%s\n", thirdArray[p]);
				m++;
			}
			
			
	}
		
			
		
	}



for(int g = 0; g<p; g++)
{
	printf("%s\n", thirdArray[g]);
		
}		
		
		
		
		
		
		
		
		totalSen= p; 
		
		
		for(int s =0; s<p; s++)
		{
			
			if(thirdArray[s][0] == '!' || thirdArray[s][0] == '.' || thirdArray[s][0] == '?' || thirdArray[s][0]==':' || thirdArray[s][0]==';')
			{
				
				
				//printf("inside totals entence");
				totalSen--;
				
			}
		
		}





printf("Total Sentences %d: \n", totalSen);






return 0; 



}
