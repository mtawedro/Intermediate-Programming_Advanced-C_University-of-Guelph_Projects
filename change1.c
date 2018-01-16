#include <stdio.h>

#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <strings.h>

#include <float.h>

#include <ctype.h>

#include <math.h>

/*
	char Menu( char userInput[20])
	{
	
	printf("Menu:\n+\n");
	
	printf("-\n");
	
	printf("Number:\n");
	
	printf("A:\n");
	
	printf("X:\n");
	
	fgets(userInput, 20, stdin);
	
	return userInput;
	
	
   }

*/


    struct  contact
    {

        unsigned long  phone_number;

        long first_name_posn;

        long last_name_posn;

        long company_name_posn;

        long email_posn;

        long  next;

    };

typedef struct contact contact;

 struct  contact_s
    {

        

        char first_name[100];

        char last_name[100];

        char company_name[100];

        char email[100];
        
        int order;


    };

typedef struct contact_s contact_s;


/*This function opens the file required and if file coud not be opened then user is prompt to enter file input again and returns a file pointer*/
FILE *OpenReadFile(char File[])
{

    /*File pointer*/
    FILE *inFile = NULL;

    /*Open file*/
    inFile = fopen(File, "rb+");


    /*Error Trap, if file could not be found or user enters in wrong file name*/
    while(inFile == NULL) {

        printf("Could not open file myfile.txt. Please enter in another file\n");


        fgets(File, 200, stdin);

        /*gets rid of hard return*/
		if(File[strlen(File)-1] == '\n')
        {


             File[strlen(File)-1] = '\0';

        }


        inFile = fopen(File, "rb+");

    }  




    return inFile;  

}




int main(int argc, char*argv[]) 
{
	
	/*Calls file pointer to open file*/
	FILE* inFile = OpenReadFile(argv[1]);
    
	contact *data = malloc(sizeof(contact) *1);
	
	contact *posArray = malloc(sizeof(contact) *1);

	contact_s *arrayString = malloc(sizeof(contact_s) *1);


	data[0].first_name_posn =  0;

	data[0].last_name_posn =  0;

	data[0].company_name_posn =  0;

	data[0].email_posn =  0;

   contact *remain = malloc(sizeof(contact) *1);
   
    char anwser[100];
    
    long nextArray[100];

	char Fname[100];

	char Lname[100];

	char phone[100];

	char comp[100];

	char Email[100];

	char String[100];

	char ret[100];
	
	char userEdit[10];
	
	char userInput[20];

int LnameExi;
	
	contact *newArray = malloc(sizeof(contact) *1);

  
    long Phone = 0;
   
    long phoneRet = 0;

    int k;

    int flag;
   
    char phoneU[100];
   
	int not ;

	data-> next = 0;

    long var2 = 0;
  
  
    fseek(inFile, 0, SEEK_END);

    /*calculates total bytes of file from end*/
    var2 = ftell(inFile);

    data->next=var2;
    
    


int count = 0;

//long nextArray[10];

nextArray[count] = 73;
	
	char Firstname[100];
	char Lastname[100];
	char Compname[100];
	char Emailstring[100];







printf("exited");
		 
		// read in the structs after the edited struct 
		
		   
		   fseek(inFile, 0, SEEK_END);
            
		   //calculates total bytes from end of file 
           long endFile = ftell(inFile);
           
            
		   fseek(inFile, nextArray[count], SEEK_SET);
		   
		   long currAfter = nextArray[count];
		   
		   // printf("CURRAFTER %ld", currAfter);
		 int  x = 0;
		   
		   while(currAfter < endFile)
		   {
			  remain = realloc(remain, sizeof(contact) * (x +1));
			  
			   
			  fread (remain, sizeof( contact), 1, inFile ); 
				
			  printf("Struct Pos, \n%ld\n%ld\n%ld\n%ld\n%ld\n", remain->first_name_posn, remain->last_name_posn, remain->company_name_posn, remain->email_posn, remain->next  );
			
				long temp = remain->next;
				
				
				//seeks to first name position //
                fseek(inFile, remain->first_name_posn, SEEK_SET);
   	
			    fgets(Firstname, 100, inFile);
		
			    if(remain->first_name_posn == 0)
			    {
			       Firstname[0]='\0';
			    }
			    
			   
               
               
                fseek(inFile, remain->last_name_posn, SEEK_SET);
		
                fgets(Lastname, 100, inFile);
        	
                if(remain -> last_name_posn == 0)
		        {
			        Lastname[0]='\0';
		        }
  
              
   
		       
		       fseek(inFile, remain-> company_name_posn, SEEK_SET);
		
			   fgets(Compname, 100, inFile);
			
			   if(remain -> company_name_posn == 0)
			   {
				  Compname[0]='\0';
			   }
			
				      
		       fseek(inFile, remain -> email_posn, SEEK_SET);
     
			   fgets(Emailstring, 100, inFile);
  
			   
			   printf("%s\n%s\n%s\n%s\n", Firstname, Lastname, Compname, Emailstring);
			   
				//greater then or less then? calcuate from getiing teh strlen of email
			  int diff= 4; 


	
			 remain-> first_name_posn  = remain->  first_name_posn + diff ;

			 remain->   last_name_posn = remain->   last_name_posn + diff ;

			 remain->  company_name_posn = remain->  company_name_posn + diff ;

			 remain->  email_posn = remain->  email_posn + diff;

			 remain->  next  = remain->  next + diff;
				
			 
			 
			  fseek(inFile, currAfter, SEEK_SET);
			 
			  fwrite(remain, sizeof(contact),1, inFile);
			 
			 
			/*if user entered in something (wont write null term if user entered in nothing)*/
			if(strlen(Firstname) !=0)
			{
	       
				fwrite(Firstname, sizeof(char),(strlen(Firstname) +1), inFile);

		
			}
    
    
			if(strlen(Lastname)!=0)
			{
    
				fwrite(Lastname, sizeof(char),(strlen(Lastname) +1), inFile);

			}
	
	
			if(strlen(Compname) !=0)
			{
	       
				fwrite(Compname, sizeof(char),(strlen(Compname) +1), inFile);

		
			}
	



			fwrite(Emailstring, sizeof(char),(strlen(Emailstring) +1), inFile);
    
   
        

				
				
				//before it goes to next positions 
				fseek(inFile, temp, SEEK_SET);
				
				currAfter = temp;
		  
			
			
			x++;
		  
		  
		  
		   }
	
	fclose(inFile);
	return 0;
	
	}	 
