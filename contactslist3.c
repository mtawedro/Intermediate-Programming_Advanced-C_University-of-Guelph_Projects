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
FILE *OpenFile(char File[])
{

    /*File pointer*/
    FILE *inFile = NULL;

    /*Open file*/
    inFile = fopen(File, "ab+");


    /*Error Trap, if file could not be found or user enters in wrong file name*/
    while(inFile == NULL) {

        printf("Could not open file myfile.txt. Please enter in another file\n");


        fgets(File, 200, stdin);

        /*gets rid of hard return*/
		if(File[strlen(File)-1] == '\n')
        {


             File[strlen(File)-1] = '\0';

        }


        inFile = fopen(File, "ab+");

    }  




    return inFile;  

}


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
	FILE* inFile = OpenFile(argv[1]);
    
	contact *data = malloc(sizeof(contact) *1);
	
	contact *posArray = malloc(sizeof(contact) *1);

	contact_s *arrayString = malloc(sizeof(contact_s) *1);


	data[0].first_name_posn =  0;

	data[0].last_name_posn =  0;

	data[0].company_name_posn =  0;

	data[0].email_posn =  0;

    char anwser[100];

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
    
    int o;
    
    char ReceiveUserInput[20];
   
    /*itanalizes each element in char array to null term so doesnt hold any garbage values */
    for(o = 0; o < 100; o++){
	
        Fname[o]= '\0';
		
		Lname[o] = '\0';
		
		comp[o] = '\0';
		
		Email[o] ='\0';
		
		String[o] ='\0';
	
	
	}

	
	//find struct co
	//	fseek(inFile, 0, SEEK_END);
     
        
        //calculates total bytes from end of file 
       // long endFile = ftell(inFile);
  
 
        //fseek(inFile, 0, SEEK_SET);
    
   
        //bytes from begining of file 
      //  long curr = ftell(inFile);
 //strcpy(ReceiveUserInput, Menu(userInput));
 
		//int x = 0;
	/*	
		//find struct co
		fseek(inFile, 0, SEEK_END);
     
        
        //calculates total bytes from end of file 
        long endFile = ftell(inFile);
  
 
        fseek(inFile, 0, SEEK_SET);
    
   
        //bytes from begining of file 
        long curr = ftell(inFile);
    
  
		
		while( curr < endFile){
				posArray = realloc(posArray, sizeof(contact) * (x +1));
				
				arrayString = realloc(arrayString, sizeof(contact_s) * (x +1));
				
				fread (&posArray[x], sizeof( contact), 1, inFile ); 
				
			printf("Struct Pos, %ld\n%ld\n%ld\n%ld\n%ld\n", posArray[x].first_name_posn, posArray[x].last_name_posn, posArray[x].company_name_posn, posArray[x].email_posn, posArray[x].next  );
	
 
           
				//seeks to first name position //
                fseek(inFile, posArray[x].first_name_posn, SEEK_SET);
   	
			    fgets(String, 100, inFile);
		
			    if(posArray[x].first_name_posn == 0)
			    {
			       String[0]='\0';
			    }
			    
			    printf("%d. %s\n", (x+1), String);
		
		        strncpy(arrayString[x].first_name, String, strlen(String)+1);	
		        
		         
                fseek(inFile, posArray[x].last_name_posn, SEEK_SET);
		
                fgets(String, 100, inFile);
        	
                if(posArray[x].last_name_posn == 0)
		        {
			        String[0]='\0';
		        }
  
               strncpy(arrayString[x].last_name, String, strlen(String)+1);
   
   
		       
		       fseek(inFile, posArray[x].company_name_posn, SEEK_SET);
		
			   fgets(String, 100, inFile);
			
			   if(posArray[x].company_name_posn == 0)
			   {
				  String[0]='\0';
			   }
			
			
		       strncpy(arrayString[x].company_name, String, strlen(String)+1);
		
		      
		       fseek(inFile, posArray[x].email_posn, SEEK_SET);
     
			   fgets(String, 100, inFile);
  
			  // printf("Email: %s\n", String );
			   
			   strncpy(arrayString[x].email, String, strlen(String)+1);
			
			   //printf("Struct Strings, %s\n%s\n%s\n%s\n", arrayString[k].first_name, arrayString[k].last_name, arrayString[k].company_name, arrayString[k].email);
	
			  
			  fseek(inFile, posArray[x].next, SEEK_SET);
		
			   curr = posArray[x].next;
		       	

			
			
			x++;
			
		}
		
		//intalizes struct to each number 
		for(int x = 0 ; x< 5; x++)
		{
			
			arrayString[x].order = (x+1);
			
			//printf("%d", arrayString[x].order);
	
			
		}
		
		
		*/
		
 
	printf("Menu:\n+\n");
	
	printf("-\n");
	
	printf("Number:\n");
	
	printf("A:\n");
	
	printf("X:\n");
	
	fgets(userInput, 20, stdin);
	
	
    if(userInput[strlen(userInput)-1] == '\n')
    {

         userInput[strlen(userInput)-1] = '\0';

    }

if(userInput[0] == 'A')
{

    do{

		printf("Next is : %ld\n", data->next);
		
       // printf("Do you wish to enter a new contact (Yes or No)?:");

	   // fgets(anwser, 100, stdin);

		/*gets rid of hard return*/
		//if(anwser[strlen(anwser)-1] == '\n')
		//{

			//anwser[strlen(anwser)-1] = '\0';

		//}



       // if((strcmp(anwser, "Yes")) == 0)
       // {

			printf("First Name:");

			fgets(Fname, 100, stdin);

            if(Fname[strlen(Fname)-1] == '\n')
			{

			    Fname[strlen(Fname)-1] = '\0';

            }

     
            /*user enters in nothing for first name*/
            if(Fname[0] == '\0' )
		    {
				/*struct size plus next is stored in last name position*/
                data->last_name_posn = 24 + data->next;
      
                data->first_name_posn =  0;

            }



            else if(Fname[0] != '\0')
            {

                /*struct size plus the next value is stored in first name position*/
                data->first_name_posn = 24 + data->next;

            }
    

            printf("Last Name:");

            fgets(Lname, 100, stdin);

            if(Lname[strlen(Lname)-1] == '\n')
            {

               Lname[strlen(Lname)-1] = '\0';

            }

        
            /*user enters in nothing for last name*/
            if(Lname[0] == '\0')
            {
                
                LnameExi = 1;
                
                /*user enters in nothing for first name*/
                if(Fname[0]== '\0')
                {

                    /*struct size plus next is stored in company name posn*/
                    data->company_name_posn = 24 + data->next;
                
                    data->last_name_posn =  0;

                }

		   
                else if(Fname[0]!='\0')
                {
					/*first name of plus length of first name is stored in company name posn*/
                    data->company_name_posn =data->first_name_posn + (strlen(Fname) +1 );
                
                    data->last_name_posn =  0;

                }




          }


          /*user enters in nothing for first name and something for last name*/
          else if(Lname[0] != '\0' && Fname[0] == '\0' )
          {

              /*struct size plus next is stored in last name posn*/
              data->last_name_posn =   24 + data->next;
          }


          /*user enters in something for first name and something for last name */
          else if(Lname[0] != '\0' && Fname[0] != '\0' )
          {

              /*first name posn plus length of first name is stored in last name posn*/
              data->last_name_posn =   data->first_name_posn + (strlen(Fname) +1 );
          }


          printf("Company Name:");

          fgets(comp, 100, stdin);

          if(comp[strlen(comp)-1] == '\n')
          {

              comp[strlen(comp)-1] = '\0';

          }

  	 
		 if(Lname[0] == '\0')
		 {
			 
			 while(comp[0] == '\0')
			 {
				 
				 
				 printf("Sorry Please enter in a company name :( ");
				 
				 fgets(comp,100,stdin);
				 
				 if(comp[strlen(comp)-1] == '\n')
				 {

					comp[strlen(comp)-1] = '\0';

				 }


				 
			 }
			 
		 
		 
		 }
       
       
          
		   
       
          /*user enters in nothing for company name and something for last anme*/
          if(comp[0] == '\0' && Lname[0]!= '\0')
          {

			 /*user enters in nothing for first name*/
              if(Fname[0] == '\0' )
              {

                  /*last name posn plus length of last name is stored in email posn*/
                  data->email_posn = data->last_name_posn + (strlen(Lname) + 1);
               
                  data->company_name_posn = 0;

              }

		    
		  }
	
	
		/*user enters in something for company and something for first name and nothing for last name*/
        else if(comp[0] != '\0' && Lname[0] == '\0' && Fname[0] != '\0' )
        {

            /*first name posn plus length of first name is stored in company posn*/
            data->company_name_posn = data->first_name_posn + (strlen(Fname) + 1);

        }

       
       else if(comp[0] != '\0' && Lname[0]=='\0' && Fname[0] == '\0')
       {
       
			 data->company_name_posn = 24 + data->next;
       
	   }
       
        /*user enters in something for company name and something for last name*/
        else if(comp[0] != '\0' && Lname[0] != '\0' )
        {

           /*last name posn plus length of last name is stored in company name posn*/
           data->company_name_posn = data->last_name_posn + (strlen(Lname) + 1);

        }



        printf("Phone Number(enter only numbers):");

        fgets(phone,100, stdin);

        if(phone[strlen(phone)-1] == '\n')
        {

            phone[strlen(phone)-1] = '\0';

        }


        
        for(k =0; k<strlen(phone) + 1; k++) {
      
           if(isalpha(phone[k])!= 0 || phone[0] == '\0'  )
           {

               flag = 1;
               
               break;

           }


       }

        while(flag == 1 ) {

            printf("Phone Number(enter only numbers):");

            fgets(phone,100, stdin);


            if(phone[strlen(phone)-1] == '\n')
            {

                phone[strlen(phone)-1] = '\0';

            }

            for(k =0; k<strlen(phone) + 1; k++){
                
                if(isalpha(phone[k])!= 0 || phone[0] == '\0' )
                {

                    flag = 1;
                    
                    break;

                }

                else
                {
                    flag = 0;

                }


            }

        }



        Phone = atol(phone);

        data->phone_number = Phone;


 
        printf("Email:");

        fgets(Email, 100, stdin);

        if(Email[strlen(Email)-1] == '\n')
        {

            Email[strlen(Email)-1] = '\0';

        }

       /*error trap*/
        while(Email[0] == '\0' ){

            printf("Sorry, please enter in an email:");

            fgets(Email, 100, stdin);

            if(Email[strlen(Email)-1] == '\n')
            {

                Email[strlen(Email)-1] = '\0';

            }


        }

		//strncpy(data->newString, Email, strlen(Email)+1 );
			
		/*user enters in something for company name*/
        if(comp[0]!= '\0')
        {
            
            /*company name posn plus length of company name stored in email posn*/
            data-> email_posn  = data->company_name_posn + (strlen(comp) +1 );
        }

        /*user enters in something for last name and nothing for company name*/
        else if(comp[0]== '\0' && Lname[0] != '\0' )
        {
            /*last name posn plus length of last name stored in email posn*/
            data-> email_posn  = data->last_name_posn + (strlen(Lname) +1 );

        }

 
        data-> next = data-> email_posn  + (strlen(Email) +1 );
   
		printf("%ld\n%ld\n%ld\n%ld\n%ld\n", data->first_name_posn, data->last_name_posn, data->company_name_posn, data->email_posn, data->next);
 
 
        //}

		printf("Save? : s\n");
		
		printf("Return? : r\n");
	
		fgets(anwser, 100, stdin);
		
		
		//writes info to end of file (later sort it alpha order) 
		if(anwser[0] == 's')
		{
			
		/*writes the struct to file*/
        fwrite(data, sizeof(contact), 1, inFile);
    
	    /*if user entered in something (wont write null term if user entered in nothing)*/
	    if(strlen(Fname) !=0)
	    {
	       
	        fwrite(Fname, sizeof(char),(strlen(Fname) +1), inFile);

		
	    }
    
    
        if(strlen(Lname)!=0)
        {
    
	        fwrite(Lname, sizeof(char),(strlen(Lname) +1), inFile);

        }
	
	
	    if(strlen(comp) !=0)
	    {
	       
	        fwrite(comp, sizeof(char),(strlen(comp) +1), inFile);

		
	    }
	



       fwrite(Email, sizeof(char),(strlen(Email) +1), inFile);
    
   		
		printf("%s\n", Fname);
		
		
		
		
		}
	
	//not nessaray but safe!
	else
	{
		
		
		data[0].first_name_posn =  0;

		data[0].last_name_posn =  0;

		data[0].company_name_posn =  0;

		data[0].email_posn =  0;
		
		
		
		for(o = 0; o < 100; o++){
	
        Fname[o]= '\0';
		
		Lname[o] = '\0';
		
		comp[o] = '\0';
		
		Email[o] ='\0';
		
		
	
	
	}
		
		
		
		
		
		
	
		
	
}
    } while(anwser[0]== 's'); //change to cap a after

}

printf("outside loop");

long nextArray[50];



do{

        printf("Do you wish to retrieve a contact (Yes or No)?:");

        fgets(ret, 100, stdin);
 
        if(ret[strlen(ret)-1] == '\n')
        {

            ret[strlen(ret)-1] = '\0';

        }
 

        if((strcmp(ret, "Yes")) == 0)
        {

            printf("Phone Number:");

            fgets(phoneU,100, stdin);

            if(phoneU[strlen(phoneU)-1] == '\n')
            {

                phoneU[strlen(phoneU)-1] = '\0';

            }
     
     
        phoneRet = atol(phoneU);
 
       
       
        fseek(inFile, 0, SEEK_END);
     
        
        /*calculates total bytes from end of file */
        long endFile = ftell(inFile);
  
 
        fseek(inFile, 0, SEEK_SET);
    
   
        /*bytes from begining of file */
        long curr = ftell(inFile);
    
  

		while( curr < endFile){

            fread (newArray, sizeof( contact), 1, inFile ); 
 
            if(newArray->phone_number == phoneRet )
	        {
    
				/*seeks to first name position */
                fseek(inFile,  newArray->first_name_posn, SEEK_SET);
   	
			    fgets(String, 100, inFile);
		
			    if(newArray->first_name_posn == 0)
			    {
			       String[0]='\0';
			    }
		
		    
                printf("First Name: %s\n", String);
		
		 
		 
                fseek(inFile, newArray->last_name_posn, SEEK_SET);
		
                fgets(String, 100, inFile);
        	
                if(newArray->last_name_posn == 0)
		        {
			        String[0]='\0';
		        }
  
                printf("Last Name: %s\n", String );
 
   
   
		       fseek(inFile, newArray->company_name_posn, SEEK_SET);
		
			   fgets(String, 100, inFile);
			
			   if(newArray->company_name_posn == 0)
			   {
				  String[0]='\0';
			   }
			
			
		       printf("Company Name: %s\n", String );
		
	
		       printf("Phone Number(enter only numbers): %lu\n", newArray->phone_number);
		       
		     
		       fseek(inFile, newArray->email_posn, SEEK_SET);
     
			   fgets(String, 100, inFile);
  
			   printf("Email: %s\n", String );
		
			   /*flag*/
			   not = 0;
			
			   break;
    
        }
	
	
	
        else
	    {
		
		
	        fseek(inFile, newArray->next, SEEK_SET);
		
		    curr = newArray->next;
		
		    not = 1;
		
	    }
	


    }



	if(not ==1)
	{
		
     printf("No match found.\n");
		
	}


}
}while(!((strcmp(ret, "No")) == 0));













//call function 

	
	/*
	
	
	
	k = 0;
int compFlag;

 char temp [100] ;
    char nametemp [100];
    char lasttemp [100];
    char emailtemp [100];

contact *posArray = malloc(sizeof(contact) *1);
contact_s *arrayString = malloc(sizeof(contact_s) *1);


fseek(inFile, 0, SEEK_END);
     
        
        //calculates total bytes from end of file 
        long endFile = ftell(inFile);
  
 
        fseek(inFile, 0, SEEK_SET);
    
   
        //bytes from begining of file 
        long curr = ftell(inFile);
    
  

		while( curr < endFile)
		{


				posArray = realloc(posArray, sizeof(contact) * (k +1));
				
				arrayString = realloc(arrayString, sizeof(contact_s) * (k +1));
				
				fread (&posArray[k], sizeof( contact), 1, inFile ); 
				
			//	printf("Struct Pos, %ld\n%ld\n%ld\n%ld\n%ld\n", posArray[k].first_name_posn, posArray[k].last_name_posn, posArray[k].company_name_posn, posArray[k].email_posn, posArray[k].next  );
	
 
           
				//seeks to first name position //
                fseek(inFile, posArray[k].first_name_posn, SEEK_SET);
   	
			    fgets(String, 100, inFile);
		
			    if(posArray[k].first_name_posn == 0)
			    {
			       String[0]='\0';
			    }
		
		        strncpy(arrayString[k].first_name, String, strlen(String)+1);
				
       
                
                fseek(inFile, posArray[k].last_name_posn, SEEK_SET);
		
                fgets(String, 100, inFile);
        	
                if(posArray[k].last_name_posn == 0)
		        {
			        String[0]='\0';
		        }
  
               strncpy(arrayString[k].last_name, String, strlen(String)+1);
   
   
		       
		       fseek(inFile, posArray[k].company_name_posn, SEEK_SET);
		
			   fgets(String, 100, inFile);
			
			   if(posArray[k].company_name_posn == 0)
			   {
				  String[0]='\0';
			   }
			
			
		       strncpy(arrayString[k].company_name, String, strlen(String)+1);
		
		      
		       fseek(inFile, posArray[k].email_posn, SEEK_SET);
     
			   fgets(String, 100, inFile);
  
			  // printf("Email: %s\n", String );
			   
			   strncpy(arrayString[k].email, String, strlen(String)+1);
			
			   //printf("Struct Strings, %s\n%s\n%s\n%s\n", arrayString[k].first_name, arrayString[k].last_name, arrayString[k].company_name, arrayString[k].email);
	
			  
			   fseek(inFile, posArray[k].next, SEEK_SET);
		
			   curr = posArray[k].next;
		       
		       k++;
		   
		     // printf("k is %d", k);
	
        }


	*/
	
	
	
	

fclose(inFile);


return 0;

}
