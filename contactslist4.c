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

/*
	data[0].first_name_posn =  0;

	data[0].last_name_posn =  0;

	data[0].company_name_posn =  0;

	data[0].email_posn =  0;
	* 
	* */

   contact *remain = malloc(sizeof(contact) *1);
   
    char anwser[100];
    
    long nextArray[100];
    
    int alertDiff ;

	char Fname[100];

	char Lname[100];

	char phone[100];

	char comp[100];

	char Email[100];

	char String[100];

	char ret[100];
	
	char userEdit[10];
	
	char userInput[20];
	
	int count = 0;

int LnameExi;
	
	contact *newArray = malloc(sizeof(contact) *1);

  
    long Phone = 0;
   
    long phoneRet = 0;

    int k;

    int flag;
   
    char phoneU[100];
    
     int diff= 0;
   
	int not ;

	data-> next = 0;
/*
    long var2 = 0;
  
  
    fseek(inFile, 0, SEEK_END);

    calculates total bytes of file from end
    var2 = ftell(inFile);

   posArray[x].next=var2;
   
   */
    
    int o;
    int x;
    
    char ReceiveUserInput[20];
   
    /*itanalizes each element in char array to null term so doesnt hold any garbage values */
    for(o = 0; o < 100; o++){
	
        Fname[o]= '\0';
		
		Lname[o] = '\0';
		
		comp[o] = '\0';
		
		Email[o] ='\0';
		
		String[o] ='\0';
	
	
	}

x = 0;


//find struct co
		/******************* prints everything and stores the strings and structs from file into array of structs  **************************/
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
		       	
		printf("next beginig is %ld", curr);
			
			
			x++;
			
		}
		
		/*
		//intalizes struct to each number 
		for(int x = 0 ; x< 3; x++)
		{
			
			arrayString[x].order = (x+1);
			
			//printf("%d", arrayString[x].order);
	
			
		}
		
		*/
		
		
		/****************intalizes everything up there ***************/
		
		

	/**************** edit and display (count starts)***************/
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


	
	char Firstname[100];
	char Lastname[100];
	char Compname[100];
	char Emailstring[100];
	
	if(userInput[0] == '1')
	{
		
		//add stuff
		printf("Display?: d ");
		
		
		
		fgets(userEdit, 20, stdin);
		
		if(userEdit[0] == 'd')
		
		{
		
		
		//find struct co
		fseek(inFile, 0, SEEK_END);
     
        
        //calculates total bytes from end of file 
        long endFile = ftell(inFile);
  
 
        fseek(inFile, 0, SEEK_SET);
    
   
        //bytes from begining of file 
        long curr = ftell(inFile);
    
  
		
		while( curr < endFile){

            fread (newArray, sizeof( contact), 1, inFile ); 
            
            //store nexts in array
            
            nextArray[count] = newArray->next;
            
            //printf("count round %d", count);
 
            
            
            /***************** if found contact prints all information *******************/
            if(newArray->phone_number == posArray[0].phone_number)
	        {
   
				printf("found number");
				//seeks to first name position 
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
		
			  // flag
			   not = 0;
			
			
			
			
			printf("Edit: e or Delete: d? or return r ?\n:");
		
			fgets(userEdit, 20, stdin);
		
			if(userEdit[0] == 'e')
			{

					
					
					
					
					
					 long var2 = 0;
  
  
					fseek(inFile, 0, SEEK_END);

					/*calculates total bytes of file from end*/
					var2 = ftell(inFile);

					newArray->next=var2;
			 
		  
			  /****************** reads in information again they selected -> DIDNT INCREMENT COUNT YET! ******************/
		
		      fseek(inFile, 0/*nextArray[count]*/, SEEK_SET);
		       
              fread (newArray, sizeof( contact), 1, inFile ); 
              
                diff =  newArray->next - newArray->email_posn;
			   
              
              

				//seeks to first name position 
                fseek(inFile,  newArray->first_name_posn, SEEK_SET);
   	
			    fgets(Firstname, 100, inFile);
		
			    if(newArray->first_name_posn == 0)
			    {
			       Firstname[0]='\0';
			    }
		
		    
                printf("First Name: %s\n", Firstname);
		
		 
		 
                fseek(inFile, newArray->last_name_posn, SEEK_SET);
		
                fgets(Lastname, 100, inFile);
        	
                if(newArray->last_name_posn == 0)
		        {
			        Lastname[0]='\0';
		        }
  
                printf("Last Name: %s\n",Lastname);
 
   
   
		       fseek(inFile, newArray->company_name_posn, SEEK_SET);
		
			   fgets(Compname, 100, inFile);
			
			   if(newArray->company_name_posn == 0)
			   {
				  Compname[0]='\0';
			   }
			
			
		       printf("Company Name: %s\n", Compname );
		
	
		       printf("Phone Number(enter only numbers): %lu\n", newArray->phone_number);
 
     
		       fseek(inFile, newArray->email_posn, SEEK_SET);
     
			   fgets(Emailstring, 100, inFile);
  
			   printf("Email: %s\n", Emailstring );
		
       
       
       printf("%ld\n%ld\n%ld\n%ld\n%ld\n", newArray->first_name_posn, newArray->last_name_posn, newArray->company_name_posn, newArray->email_posn, newArray->next);
 
       
       
       
       
       
       
       
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

        newArray->phone_number = Phone;

		
		
		fseek(inFile, 0/*nextArray[count-1]*/, SEEK_SET);
		
		//newArray is not a s
		
		//writes the struct to file
        fwrite(newArray, sizeof(contact), 1, inFile);
        
          

		
		
		
		/********* reads in string and erases string and writes new string back to file*************/
            
				printf("Email:");

		       
		        fseek(inFile, 0/*nextArray[count-1]*/, SEEK_SET);
		       
				fread (newArray, sizeof( contact), 1, inFile ); 
		       
		       
		       fseek(inFile, newArray->email_posn, SEEK_SET);
     
			   fgets(String, 100, inFile);
  
			   String[0] = '\0';
			   
		fgets(String, 100, stdin);

        if(String[strlen(String)-1] == '\n')
        {

            String[strlen(String)-1] = '\0';

        }

       //error trap
        while(String[0] == '\0' ){

            printf("Sorry, please enter in an email:");

            fgets(String, 100, stdin);

            if(String[strlen(String)-1] == '\n')
            {

                String[strlen(String)-1] = '\0';

            }


        }
				//delete after 
				//fseek(inFile, nextArray[count-1], SEEK_SET);
		       
              //fread (newArray, sizeof( contact), 1, inFile );

		//user enters in something for company name
        if(Compname[0]!= '\0')
        {
            
            printf("inside first if");
            
            //company name posn plus length of company name stored in email posn
           newArray-> email_posn  = newArray->company_name_posn + (strlen(Compname) +1 );
        }

        //user enters in something for last name and nothing for company name
        else if(Compname[0]== '\0' && Lastname[0] != '\0' )
        {
            printf("inside if"); 
            //last name posn plus length of last name stored in email posn
			newArray-> email_posn  = newArray->last_name_posn + (strlen(Lastname) +1 );

        }

 
        newArray-> next = newArray-> email_posn  + (strlen(String) +1 );
   
		printf("%ld\n%ld\n%ld\n%ld\n%ld\n", newArray->first_name_posn, newArray->last_name_posn, newArray->company_name_posn, newArray->email_posn, newArray->next);
 
			   
			 
			   if((strlen(String) +1) < diff)
			   {
					alertDiff = 0;
					
					printf("in small num less ten enteed before");
					
					diff = diff - (strlen(String) +1);
			   
			   
				}
				
				else if(diff < (strlen(String) +1))
				{
					
					printf("in big num more ten enteed before");
					
					diff = (strlen(String) +1) - diff;
			   
					
				}
				
			printf("diff is %d\n", diff);
			  
			  
			   fseek(inFile, newArray->email_posn, SEEK_SET);
			  
			   fwrite(String, sizeof(char), (strlen(String) +1), inFile);
			

       
       
       
      
		
		fseek(inFile, 0/*nextArray[count-1]*/, SEEK_SET);
		
		//newArray is not a s
		
		//writes the struct to file
        fwrite(newArray, sizeof(contact), 1, inFile);
        
          
          
         
        
        
	 	break;
  
	
		}
		
        
			   
	}
 
	
        
	

	
        else
	    {
		
		
	        fseek(inFile, newArray->next, SEEK_SET);
		
		    curr = newArray->next;
		    
		    //counter for next value at 1
		    count++;
		
		    not = 1;
		
	    }
	
if(not!=1)
{
	
	
	break;
	
	
}
	
	
	
	
	 }// while
    
}// edit if

} // display if
     
     
      printf("COUNT %d", count);
      
       fseek(inFile, 0/*nextArray[count-1]*/, SEEK_SET);
     
       fread (newArray, sizeof( contact), 1, inFile ); 
         
        
        
         printf("new pos after %ld\n%ld\n%ld\n%ld\n%ld\n", newArray->first_name_posn, newArray->last_name_posn, newArray->company_name_posn, newArray->email_posn, newArray->next);
 
         printf(" after phone num %ld\n", newArray->phone_number);
         
         
		fseek(inFile, newArray->email_posn, SEEK_SET );
        
       fgets(String, 100, inFile);
        
       printf("after email is %s \n", String);
     
     
		   
     
     
     
     
     
     
     if(not != 1)
     {
		 
		 printf("exited");
		 
		/************read in the structs after the edited struct *********/
		
		   
		   fseek(inFile, 0, SEEK_END);
            
		   //calculates total bytes from end of file 
           long endFile = ftell(inFile);
           
            
		   fseek(inFile, nextArray[count], SEEK_SET);
		   
		   long currAfter = nextArray[count];
		   
		   printf("CURRAFTER before loop %ld", currAfter);
		   x = 0;
		   
		   
		   printf("count is %d\n", (count ));
		   
		   while(currAfter < endFile)
		   {
			  remain = realloc(remain, sizeof(contact) * (x +1));
			  
			   
			  fread (remain, sizeof( contact), 1, inFile ); 
			  
			  long temp1 = remain->next;
				
			  printf("Struct Pos, \n%ld\n%ld\n%ld\n%ld\n%ld\n", remain->first_name_posn, remain->last_name_posn, remain->company_name_posn, remain->email_posn, remain->next  );
			
			
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
			  

			if(alertDiff !=0)
			{
	
			 printf("WERE ADDING ONE");
			 
			 remain-> first_name_posn  = remain->  first_name_posn + diff ;

			 remain->   last_name_posn = remain->   last_name_posn + diff ;

			 remain->  company_name_posn = remain->  company_name_posn + diff ;

			 remain->  email_posn = remain->  email_posn + diff;

			 remain->  next  = remain->  next + diff;
				
			 }
			 
			 else
			 {
				 remain-> first_name_posn  = remain->  first_name_posn - diff ;

				remain->   last_name_posn = remain->   last_name_posn - diff ;

				remain->  company_name_posn = remain->  company_name_posn - diff ;

				remain->  email_posn = remain->  email_posn - diff;

				remain->  next  = remain->  next - diff;
				
				 
				 
				 
				 
			 }
			 
			  fseek(inFile, nextArray[count], SEEK_SET);
			 
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
				fseek(inFile, temp1, SEEK_SET);
				
				currAfter = temp1;
		  
			 printf("\ncurrAfter is%ld", currAfter);
			 
			
			x++;
		  
		  
		  
		   }
		   
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
	 }
	 
		    fseek(inFile,  nextArray[count], SEEK_SET);
			 
			 fread (remain, sizeof( contact), 1, inFile ); 
            
            printf("BEFORE LOOP STARTS, \n%ld\n%ld\n%ld\n%ld\n%ld\n", remain->first_name_posn, remain->last_name_posn, remain->company_name_posn, remain->email_posn, remain->next  );
			

     
     printf("STARTS LOOP");
     
     fseek(inFile, 0, SEEK_END);
     
        
       // calculates total bytes from end of file 
       endFile = ftell(inFile);
  
 
        fseek(inFile, 0, SEEK_SET);
    
   
       // bytes from begining of file 
         curr = ftell(inFile);
    
  

		while( curr < endFile){

            fread (remain, sizeof( contact), 1, inFile ); 
            
            printf("AFTER, \n%ld\n%ld\n%ld\n%ld\n%ld\n", remain->first_name_posn, remain->last_name_posn, remain->company_name_posn, remain->email_posn, remain->next  );
			
			  fseek(inFile, remain->next, SEEK_SET);
		
		    curr = remain->next;
		
 
 
 }
     
     
     /*
     
     printf("\n");
		
	//READ FILE AGAING
	
		  fseek(inFile, 0, SEEK_END);
     
        
       // calculates total bytes from end of file 
       long endFile = ftell(inFile);
  
 
        fseek(inFile, 0, SEEK_SET);
    
   
       // bytes from begining of file 
        long curr = ftell(inFile);
    
  

		while( curr < endFile){

            fread (newArray, sizeof( contact), 1, inFile ); 
 
            
    
				//seeks to first name position 
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
		
			  // flag
			   not = 0;
			
			   
    
        
	
	
	
        
		
	        fseek(inFile, newArray->next, SEEK_SET);
		
		    curr = newArray->next;
		
		    not = 1;
		
	    
	


    }
			
	
     
     
 
     */
     
     
     
 
	


/*
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
     
        
        //calculates total bytes from end of file 
         endFile = ftell(inFile);
  
 
        fseek(inFile, 0, SEEK_SET);
    
   
        //bytes from begining of file 
         curr = ftell(inFile);
    
  
		if(newArray->phone_number == phoneRet )
	       {
			
			
			printf("inside loop");
			
			while( curr < endFile){

            fread (newArray, sizeof( contact), 1, inFile ); 
 
            if(newArray->phone_number == phoneRet )
	        {
    
				//seeks to first name position 
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
		
			   //flag
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

}
}while(!((strcmp(ret, "No")) == 0));

*/



fclose(inFile);

return 0;


}

