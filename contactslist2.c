#include <stdio.h>

#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <strings.h>

#include <float.h>

#include <ctype.h>

#include <math.h>

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


int main(int argc, char*argv[]) 
{
	
	/*Calls file pointer to open file*/
	FILE* inFile = OpenFile(argv[1]);
    
	contact *data = malloc(sizeof(contact) *1);

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
   
    /*itanalizes each element in char array to null term so doesnt hold any garbage values */
    for(o = 0; o < 100; o++){
	
        Fname[o]= '\0';
		
		Lname[o] = '\0';
		
		comp[o] = '\0';
		
		Email[o] ='\0';
		
		String[o] ='\0';
	
	
	}


    do{

        printf("Do you wish to enter a new contact (Yes or No)?:");

	    fgets(anwser, 100, stdin);

		/*gets rid of hard return*/
		if(anwser[strlen(anwser)-1] == '\n')
		{

			anwser[strlen(anwser)-1] = '\0';

		}



        if((strcmp(anwser, "Yes")) == 0)
        {

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
                
                /*user enters in nothing for first name*/
                if(Fname[0]== '\0')
                {

                    /*struct size plus next is stored in company name posn*/
                    data->company_name_posn = 24 + data->next;
                
                    data->last_name_posn =  0;

                }

		   
                else
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

       
          /*user enters in nothing for company name*/
          if(comp[0] == '\0')
          {

              /*user enters in nothing for last name*/
              if(Lname[0] == '\0' )
              {

                  /*first name posn plus length of first name is stored in email posn*/
                  data->email_posn = data->first_name_posn + (strlen(Fname) + 1);
               
                  data->company_name_posn = 0;

              }

              /*user enters in nothing for first name*/
              else if(Fname[0] == '\0' )
              {

                  /*last name posn plus length of last name is stored in email posn*/
                  data->email_posn = data->last_name_posn + (strlen(Lname) + 1);
               
                  data->company_name_posn = 0;

              }

              /*user enters in nothing for last name and first name*/
              else if(Fname[0] == '\0' && Lname[0] == '\0' )
              {

                  /*struct size plus next is stored in email posn*/
                  data->email_posn = 48 + data->next;
               
                  data->company_name_posn = 0;

              }

		      else
              {
				 /*last name position plus length of last name is stored in email posn*/
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
      
           if(isalpha(phone[k])!= 0 || phone[0] == '\0')
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
                
                if(isalpha(phone[k])!= 0 || phone[0] == '\0')
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

        /*size of struct plus next is stored in email posn*/
        else if(comp[0] == '\0' && Lname[0] == '\0' && Fname[0] == '\0' )
        {
    
            data->email_posn = 24 + data->next;

        }


        data-> next = data-> email_posn  + (strlen(Email) +1 );
   
 
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
    
   
        }


    }while(!((strcmp(anwser, "No")) == 0));


 
 
 
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
		
	 do
	 {
        printf("Do you wish to enter a new contact (Yes or No)?:");

	    fgets(anwser, 100, stdin);

		/*gets rid of hard return*/
		if(anwser[strlen(anwser)-1] == '\n')
		{

			anwser[strlen(anwser)-1] = '\0';

		}



        if((strcmp(anwser, "Yes")) == 0)
        {

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
                
                /*user enters in nothing for first name*/
                if(Fname[0]== '\0')
                {

                    /*struct size plus next is stored in company name posn*/
                    data->company_name_posn = 24 + data->next;
                
                    data->last_name_posn =  0;

                }

		   
                else
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
              data->last_name_posn =   48 + data->next;
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

       
          /*user enters in nothing for company name*/
          if(comp[0] == '\0')
          {

              /*user enters in nothing for last name*/
              if(Lname[0] == '\0' )
              {

                  /*first name posn plus length of first name is stored in email posn*/
                  data->email_posn = data->first_name_posn + (strlen(Fname) + 1);
               
                  data->company_name_posn = 0;

              }

              /*user enters in nothing for first name*/
              else if(Fname[0] == '\0' )
              {

                  /*last name posn plus length of last name is stored in email posn*/
                  data->email_posn = data->last_name_posn + (strlen(Lname) + 1);
               
                  data->company_name_posn = 0;

              }

              /*user enters in nothing for last name and first name*/
              else if(Fname[0] == '\0' && Lname[0] == '\0' )
              {

                  /*struct size plus next is stored in email posn*/
                  data->email_posn = 24 + data->next;
               
                  data->company_name_posn = 0;

              }

		      else
              {
				 /*last name position plus length of last name is stored in email posn*/
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
      
           if(isalpha(phone[k])!= 0 || phone[0] == '\0')
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
                
                if(isalpha(phone[k])!= 0 || phone[0] == '\0')
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

        /*size of struct plus next is stored in email posn*/
        else if(comp[0] == '\0' && Lname[0] == '\0' && Fname[0] == '\0' )
        {
    
            data->email_posn = 48 + data->next;

        }


        data-> next = data-> email_posn  + (strlen(Email) +1 );
   
 
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
    
   
 
 }
 
        

      }while(!((strcmp(anwser, "No")) == 0));
		
        
        
		
		
    
        
    }


}


 

}while(!((strcmp(ret, "No")) == 0));

int x =0;

fseek(inFile, 0, SEEK_SET);
		
		while( x < 5)
		{

			fread (newArray, sizeof( contact), 1, inFile ); 
	
			fseek(inFile,  newArray->first_name_posn, SEEK_SET);
   	
			fgets(String, 100, inFile);
		
			if(newArray->first_name_posn == 0)
			{
				String[0]='\0';
			}
		
		    
			printf("%d. %s\n", (x+1), String);
		
			fseek(inFile, newArray->next, SEEK_SET);			

			x++;
			
		}




char plusUser[20];

//fseek(inFile, 0, SEEK_CUR);
	
do
{
	printf("enter +:");
	
	fgets(plusUser,20,stdin);
	/*
	if(plusUser[0]== '+' && x>5)
	{
		fseek(inFile, 0, SEEK_SET);
		
		fread (newArray, sizeof( contact), 1, inFile ); 
	
		fseek(inFile,  newArray->first_name_posn, SEEK_SET);
   	
		fgets(String, 100, inFile);
		
		if(newArray->first_name_posn == 0)
		{
			String[0]='\0';
		}
		
		    
		printf("First Name: %s\n", String);
		
		
		
		
		
		
	}
		*/
	fread (newArray, sizeof( contact), 1, inFile ); 
	
	fseek(inFile,  newArray->first_name_posn, SEEK_SET);
   	
	fgets(String, 100, inFile);
		
	if(newArray->first_name_posn == 0)
	{
		String[0]='\0';
	}
		
		    
    printf("First Name: %s\n", String);
		
	fseek(inFile, newArray->next, SEEK_SET);
	
	//x++;			
	
	
}while(plusUser[0]== '+');

 x =-1;

//fseek(inFile, 0, SEEK_END);

//long endFile = ftell(inFile);
  

do
{
	printf("enter -:");
	
	fgets(plusUser,20,stdin);
	
	fseek(inFile,  newArray->first_name_posn, SEEK_CUR);
		
	fread (newArray, sizeof( contact), 1, inFile ); 
	
	//fseek(inFile,  newArray->first_name_posn, SEEK_CUR);
   	
	fgets(String, 100, inFile);
		
	if(newArray->first_name_posn == 0)
	{
		String[0]='\0';
	}
		
		    
    printf("First Name: %s\n", String);
		
	fseek(inFile, ftell(inFile) - 24, SEEK_CUR);
	
	fseek(inFile, newArray->next, SEEK_CUR);	
	
	x--;		
	
	
}while(plusUser[0]== '-');


















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
				
				printf("Struct Pos, %ld\n%ld\n%ld\n%ld\n%ld\n", posArray[k].first_name_posn, posArray[k].last_name_posn, posArray[k].company_name_posn, posArray[k].email_posn, posArray[k].next  );
	
 
           
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
  
			   printf("Email: %s\n", String );
			   
			   strncpy(arrayString[k].email, String, strlen(String)+1);
			
			   printf("Struct Strings, %s\n%s\n%s\n%s\n", arrayString[k].first_name, arrayString[k].last_name, arrayString[k].company_name, arrayString[k].email);
	
			  
			   fseek(inFile, posArray[k].next, SEEK_SET);
		
			   curr = posArray[k].next;
		       
		       k++;
		   
		      printf("k is %d", k);
	
        }



for(int i = 0; i< k; i++)
{
	//do a condition when entering in company and last name in begg both cant be pos 0!
	
	if(posArray[i].last_name_posn == 0 && posArray[i].company_name_posn !=0 )
	{
		
		compFlag = 1;
	
		
	}
	 
	 else if(posArray[i].last_name_posn != 0 && posArray[i].company_name_posn ==0)
	 {
		 lastFlag = 1;
		 
	 }
	 // printf("in loop");
	//printf("Struct Pos, %ld\n%ld\n%ld\n%ld\n%ld\n", posArray[i].first_name_posn, posArray[i].last_name_posn, posArray[i].company_name_posn, posArray[i].email_posn, posArray[i].next  );
	
	//printf("Struct Strings, %s\n%s\n%s\n%s\n", arrayString[i].first_name, arrayString[i].last_name, arrayString[i].company_name, arrayString[i].email);
	
	
	
}

  
  if(compFlag ==1)
  {
	  
  for (int i = 0; i < (k-1) ; i++) {
      
      for ( int j = 0; j < (k-1)  - 1; j++) {
         
         if (strcmp(arrayString[j].company_name, arrayString[j + 1].company_name) > 0) {
            
                strcpy(temp, arrayString[j]. company_name);
                strcpy(arrayString[j].company_name, arrayString[j+ 1]. company_name);
                strcpy(arrayString[j + 1]. company_name, temp);
         
             
                strcpy(nametemp, studentInfo[j]. firstName);
                strcpy(studentInfo[j]. firstName, studentInfo[j+ 1]. firstName);
                strcpy(studentInfo[j + 1]. firstName, nametemp);
            
                strcpy(lasttemp, studentInfo[j]. lastName);
                strcpy(studentInfo[j]. lastName, studentInfo[j+ 1]. lastName);
                strcpy(studentInfo[j + 1]. lastName, lasttemp);
             
               strcpy(emailtemp, studentInfo[j]. email);
               strcpy(studentInfo[j]. email, studentInfo[j+ 1]. email);
               strcpy(studentInfo[j + 1]. email, emailtemp);
                     
             
         }
      }
   }

}//end of if



*/






fclose(inFile);

//free(newArray);

//free(data);



return (0) ;

}
