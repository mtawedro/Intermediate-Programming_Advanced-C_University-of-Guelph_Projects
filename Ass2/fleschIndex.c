/*****************************************
 * Program: fleschIndex.c
 * Name: Martina Tawedrous
 * Date: February 17 2017
 * Email: mtawedro@mail.uoguelph.ca
 * Student Num: 0977473
 * ***************************************/

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <strings.h>

#include <float.h> 

#include <ctype.h>

#include <math.h>


/*This function opens the file required and if file coud not be opened then user is prompt to enter file input again and returns a file pointer*/
FILE *OpenFile(char File[])
{
    /* File pointer*/
    FILE *inFile = NULL; 
      
    /* Open file */
    inFile = fopen(File, "r");
   
    /* Error Trap, if file could not be found or user enters in wrong file name */
    while(inFile == NULL) {
        printf("Could not open file myfile.txt. Please enter in another file\n");
             
        fgets(File, 200, stdin);
      
        /*gets rid of hard return*/
        if(File[strlen(File)-1] == '\n')
        {
             File[strlen(File)-1] = '\0';
        }
                  
        inFile = fopen(File, "r");
    
    }    
    
    
    return inFile;    

}


int main(int argc, char*argv[]) {
	
    int i = 0;
	char Line[200];
	int m = 0;
	int countSen = 0;
    int countWords = 0;
	int vowelBeside = 0;
	int vowelAlone = 0; 
	int totalVowel = 0;
	int totalResult = 0;
	float index = 0.00;
	int flag =0;
	char **secondArray; 
	 
	secondArray = malloc(sizeof(char*) *1);

	/*calls OpenFile function to acess and open file*/
    FILE* inFile = OpenFile(argv[1]);
  
    /*reads in file word by word and parses each word into another 2d array*/
    while(!feof(inFile)) 
    {
		fscanf(inFile, "%s", Line);
		
		secondArray = realloc(secondArray, sizeof(char*) *  (i +1));
		
		/*each world will be placed on a new row in the 2d array*/
		secondArray[i] = malloc(sizeof(char) * (strlen(Line) +1 )); 
  
		strncpy(secondArray[i], Line, (strlen(Line) +1));

        countWords++;
          
        i++;
    
    
    }

   
    /*counts the sen by counting the first ocuurance of the puncuation on each row in (2d array) that contains each word of the file*/ 
	for(int z=0; z< (i ); z++ ){
     
     
		for(int j=0; j<strlen(secondArray[z])+1; j++ ){
			
			if(secondArray[z][j] == '.' || secondArray[z][j] == '!' || secondArray[z][j] == '?' || secondArray[z][j] == ':'|| secondArray[z][j] == ';')
			{
			 
				countSen++;
				break;
			 
			}
		 
		}
	 
	}

 
  
    
    /*nested loop that goes through each word in the 2d array and searches for punctions and symbols that are not letters and replaces it with null term to 
      indicate the end of the word since punc is ignored. */
    for(int z=0; z< (i ); z++ ){
        
       for(int j= 0; j< strlen(secondArray[z]) +1; j++ ) {
		  
           if(secondArray[z][j] == '.' || secondArray[z][j] == '!' || secondArray[z][j] == '?' || secondArray[z][j] == ':'|| secondArray[z][j] == ';' || secondArray[z][j] == ',')
		   {
				
		       secondArray[z][j] = '\0';
	
		   }
			
		   if(isalnum(secondArray[z][j]) == 0)
		   {
			   
			   secondArray[z][j] = '\0';
			 
		   }
	
	 }
	 
   }
 
    /*if there is a null term in the first index of each row then subtract the word count by 1 since its not valid */
    for(m =0; m<i; m++){
        
        if(secondArray[m][0] == '\0')
        {
			countWords--;
			
		}
          
   }
    
    /*searches each row of words*/
    for(int z=0; z< (i); z++ ){
     
        /*searches the word in each row */
        for(int j=0; j<strlen(secondArray[z])+1; j++ ){

              /*searches for null term in first index of the each row and sets total syl to 0 */
              if(secondArray[z][0] == '\0')
              {
				  flag = 1;
				  
				  totalVowel = 0;	  
			  }
				
			  
			  /*searches the word and counts vowels alone NOT including any adjacent vowels*/
			  if(secondArray[z][j] == 'a' || secondArray[z][j] == 'i' || secondArray[z][j] == 'o' || secondArray[z][j] == 'u' || secondArray[z][j] == 'e'|| secondArray[z][j] == 'y'
				|| secondArray[z][j] == 'A' || secondArray[z][j] == 'I' || secondArray[z][j] == 'O' || secondArray[z][j] == 'U' || secondArray[z][j] == 'E'|| secondArray[z][j] == 'Y')   
			  {
						
			     vowelAlone++;
					
			  }
 
		
		
		} /*end of inner FOR loop*/
		
			  /* **before going to the next line (word)*/
 
              /*seaches for an 'e' at the end of the word and if true then subtract 1 from the vowel count and set the position at 'e' to a null term becasue it would be useless*/    
			  for(int j=0; j<strlen(secondArray[z])+1; j++ ){
			
			      if((secondArray[z][j] == 'e' && secondArray[z][j+1] == '\0') || (secondArray[z][j] == 'E' && secondArray[z][j+1] == '\0') )
				  {
				     vowelAlone--;
					 secondArray[z][j] = '\0';
			  
				  }
 
		
			  }
		
		
			 for(int j=0; j<strlen(secondArray[z])+1; j++ ){
		
				 /* **counts adjacent vowels in the word*/
			     if((secondArray[z][j] == 'a' || secondArray[z][j] == 'e' || secondArray[z][j]== 'i' || secondArray[z][j] == 'o' || secondArray[z][j] == 'u' || secondArray[z][j] == 'y' ||
					 secondArray[z][j] == 'A' || secondArray[z][j] == 'E' || secondArray[z][j]== 'I' || secondArray[z][j] == 'O' || secondArray[z][j] == 'U' || secondArray[z][j] == 'Y' )
					 && (secondArray[z][j+1] == 'a' || secondArray[z][j+1] == 'e' || secondArray[z][j+1] == 'i' || secondArray[z][j+1] == 'o' || secondArray[z][j+1] == 'u' || secondArray[z][j+1] == 'y'
					 || secondArray[z][j+1] == 'A' || secondArray[z][j+1] == 'E' || secondArray[z][j+1] == 'I' || secondArray[z][j+1] == 'O' || secondArray[z][j+1] == 'U' || secondArray[z][j+1] == 'Y' ))
				 {
			 
					 /*if there is an adjcent vowel before an 'e' at the end of the word, then won't be counted as an adjacent vowel ex. ''mae'' */
				     if((secondArray[z][j] == 'a' || secondArray[z][j] == 'e' || secondArray[z][j]== 'i' || secondArray[z][j] == 'o' || secondArray[z][j] == 'u' || secondArray[z][j] == 'y' 
				         || secondArray[z][j] == 'A' || secondArray[z][j] == 'E' || secondArray[z][j]== 'I' || secondArray[z][j] == 'O' || secondArray[z][j] == 'U' || secondArray[z][j] == 'Y') 
					     && ((secondArray[z][j+1] == 'e' && secondArray[z][j+2] == '\0' )|| (secondArray[z][j+1] == 'E' && secondArray[z][j+2] == '\0') ) )
				      {
						
				          continue; 
				          		     
				      }
			 
					 
					 else
					 {
						  vowelBeside++;
					 
					 }
		    
		 
		 
			    }
		
			}
		
		            /*Formula: **subtract the number of vowels alone from the vowels that are adjacent will give you the total vowels in that word */           
		            
		            /* **cases, if vowelAlone is greater then subtract from the bigger number so you dont get a negetive syllable */
		            if(vowelAlone >= vowelBeside)
		            {
						totalVowel = (vowelAlone - vowelBeside);
						
					}
		            
		            else 
		            {
						totalVowel = (vowelBeside - vowelAlone);
								
					}
										
					/*if there are no syllables and there are no null term in one of the rows (2d array) then add 1 */
					if(totalVowel == 0 && flag !=1)
					{
						totalVowel= 1;
						
					}
				
					/*acculmates the number of syllables as searches through each word on a diff row */
					totalResult = totalResult + totalVowel;
					
					vowelAlone = 0;
					vowelBeside = 0;
					flag  = 0;

		
	
	} /*end of outer FOR loop*/
 
 
    /*calculates Flesch Index*/
    index = 206.385 - 84.6 * ( (float) totalResult / (float) (countWords) ) - 1.015 * ( (float) (countWords) / (float) countSen );
 
	printf("Flesch Index = %d\n", (int)round(index));
	
	printf("Syllable Count = %d\n", totalResult);
	
	printf("Word Count = %d\n", (countWords));
	
	printf("Sentence Count = %d\n", countSen);
	
	
    /*frees each element in the pointer */
    for(m =0; m< i; m++){
     
		free(secondArray[m]);
        
     }
 
    /*frees pointer*/
    free(secondArray);
 
    fclose(inFile);
 
    return 0;   
    
}

