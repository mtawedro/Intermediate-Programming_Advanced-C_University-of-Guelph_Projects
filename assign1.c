#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <strings.h>

#include <float.h> 

#include <ctype.h>

#include <math.h>


//This function opens the file required and if file coud not be opened then user is prompt to enter file input again and returns a file pointer
FILE *OpenFile(char File[])
{
    // File pointer
    FILE *inFile = NULL; 
      
    // Open file
    inFile = fopen(File, "r");
   
    // Error Trap, if file could not be found or user enters in wrong file name
    while(inFile == NULL) 
    {
        printf("Could not open file myfile.txt. Please enter in another file\n");
             
        fgets(File, 200, stdin);
      
        //gets rid of hard return 
        if(File[strlen(File)-1] == '\n')
        {
             File[strlen(File)-1] = '\0';
        }
                  
        inFile = fopen(File, "r");
    
    }    
    
    
    return inFile;    

}









int main(int argc, char*argv[]) {
	
	int x = 0; 
	int i = 0;
	 char Line[200];
	 char Result[200] ;
	 char secondArray[200][200];
	 int m = 0;
	 int countSen = 0;
	 int countWords = 0;
	 int vowelBeside = 0;
	 int vowelAlone = 0; 
	 int vowelEnd = 0;
	 int totalVowel = 0;
	 int voweleAlone = 0;
	 int eAlone = 0;
	 int totalResult = 0;
	float index = 0.00;
	int counterTerm = 0;
	int flag =0;


//calls OpenFile function to acess and open file 
    FILE* inFile = OpenFile(argv[1]);
     
    //as a line is read in (line by line) from file, each data segement will be sorted and stored to either the guelph or sasaktoon array
    while(!feof(inFile)) 
    {
   
	   fscanf(inFile, "%s", Line);
		strcpy(secondArray[i], Line);
		printf("%s\n", secondArray[i]);
     countWords++;
         
          i++;
    
    
    }

printf("\nWORDS %d\n",  (countWords-1) );
      
      
      for(m =0; m<( i-1); m++)
      {
        printf("%s\n",  secondArray[m]);
      }
    
 
 
 
for(int z=0; z< (i -1); z++ )
    {
     
     
     for(int j=0; j<strlen(secondArray[z])+1; j++ )
     {
		 if(secondArray[z][j] == '.' || secondArray[z][j] == '!' || secondArray[z][j] == '?' || secondArray[z][j] == ':'|| secondArray[z][j] == ';')
		 {
			 
			 countSen++;
			 break;
			 
		 }
		 
	 }
	 
   }
 
 
 printf(" count Sen %d\n", countSen);
 
 
 // get srid of stuff
 
  
for(int z=0; z< (i -1); z++ )
    {
     
     
     for(int j=0; j<strlen(secondArray[z])+1; j++ )
     {
		 if(secondArray[z][j] == '.' || secondArray[z][j] == '!' || secondArray[z][j] == '?' || secondArray[z][j] == ':'|| secondArray[z][j] == ';' || secondArray[z][j] == ',')
		 {
			 
			 secondArray[z][j] = '\0';
			 
			 
			 
		 }
		 
			if(isalpha(secondArray[z][j]) ==0)
			 {
			     secondArray[z][j] = '\0';
			 
			 }
			 
	 
	 
	 
	 }
	 
   }
 
 
	  for(m =0; m<( i-1); m++)
     {
        
        if(secondArray[m][0] == '\0')
        {
			countWords--;
			
		
		}
        
        
        
        
        printf("New:  %s\n",  secondArray[m]);
      }
    
 
		printf("\nWords %d\n",  (countWords-1) );
 
 
 
 //counts period 
 
				
 for(int z=0; z< (i-1); z++ )
    {
     
     
		for(int j=0; j<strlen(secondArray[z])+1; j++ )
		{

              if(secondArray[z][0] == '\0')
              {
				  flag = 1;
				  totalVowel = 0;
				  
			  }
				
			  
			  if(secondArray[z][j] == 'a' || secondArray[z][j] == 'i' || secondArray[z][j] == 'o' || secondArray[z][j] == 'u' || secondArray[z][j] == 'e'|| secondArray[z][j] == 'y') 
			  
			    {
					
					
					 vowelAlone++;
					
					
				}
 
 
				
		//here
				
	//here
		
		
		
	}
 
 
		
						for(int j=0; j<strlen(secondArray[z])+1; j++ )
						{
			
						if((secondArray[z][j] == 'e' && secondArray[z][j+1] == '\0') )
						{
							vowelAlone--;
							secondArray[z][j] = '\0';
			  
						}
 
		
		
		
						}
		
		
		
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
					//printf("total Vowels : %d\n", totalVowel);
					
					if(totalVowel == 0 && flag !=1)
					{
						totalVowel= 1;
						
					}
					
					//if(counterTerm != 0)
					//{
						//totalVowel =0; 
						
					//}
					
					
					printf("total Vowels : %d\n", totalVowel);
					totalResult = totalResult + totalVowel;
					
					vowelAlone = 0;
					vowelBeside = 0;
					flag  = 0;

		
	
	} //end of for
 
 
 
 
 
 printf("total Result : %d\n", totalResult);
 
//index =	206.835	– 84.6	*	(	#syllables /	#words )	– 1.015	*	(#words /	#sentences)
 
 index = 206.385 - 84.6 * ( (float) totalResult / (float) (countWords-1) ) - 1.015 * ( (float) (countWords-1) / (float) countSen );

  //index = round(index);

// index = 206.835 - 84.6 * ((float)totalResult / (float) (countWords-1))-1.015 * ((float) (countWords-1)/ (float)countSen);
 
 printf("Index %lf\n",  (double)index);
 
 
 
 fclose(inFile);
 
 
 
 
 
 
 return 0;   
    
}

