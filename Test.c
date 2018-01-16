#include <stdio.h>

#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <strings.h>

#include <float.h>

#include <ctype.h>

#include <math.h>


	void Menu( )
	{
	
	printf("Menu:\n+: Move down one name\n");
	
	printf("-: Move up one name\n");
	
	printf("Number: Select this contact and display its full information\n");
	
	printf("A: Add a new contact\n");
	
	printf("X: Exit the program\n");
	
	
   }




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
        
        char name[100];


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
	FILE* inFile = OpenReadFile(argv[1]);
    
	contact *posArray = malloc(sizeof(contact) *1);
	
	contact *unorder = malloc(sizeof(contact) *1);
	
	contact *deleteArray = malloc(sizeof(contact) *1);

	contact_s *stringLastComp = malloc(sizeof(contact_s) *1);
	
	contact_s *arrayString = malloc(sizeof(contact_s) *1);
	
	contact *new = malloc(sizeof(contact) *1);
	
	contact *remain = malloc(sizeof(contact) *1);
	
	contact *beforeRemain = malloc(sizeof(contact) *1);
	
	contact *data = malloc(sizeof(contact) *1);
	
	int d = 0;
	
	 
    char anwser[100];
    
    long nextArray[100];
    
    int m;
    
    int alertDiff ;
    
    int counterbeg = 0;
    
    char Fname[100];

	char Lname[100];

	//char phone[100];

	char comp[100];

	char Email[100];
	
	int var7;

int y;
   
int stop = 0;
	char String[100];
	
	int userInput = 0;
	
	char user[20];
	
	int a = 0;
	
	int p = 0;
	
	int o ;
	
	char temp [100] ;
    
    char nametemp [100];
    
    char lasttemp [100];
    
    char emailtemp [100];
    
    contact tempcon[1];
    
    int var8;
    
    char userDis[20];
    
    int alpha ;
    
    
    int r = 0;
    
    int k;
    
    //k=0;
    
    int i = 0;
    
    int holdLastIndex = 0;
    
    int end;
    
    int b = 5;
    
    
	char Firstname[100];
	char Lastname[100];
	char Compname[100];
	char Emailstring[100];
	
	int exitflag;
	
	int holdx=0;
	
	int at = 0;
	
	char userEdit[10];
	
	int q;
	int count = 0;

int LnameExi;

	char phone[100];
    long Phone = 0;
   
    long phoneRet = 0;

    //int k;

    int flag;
   
    char phoneU[100];
    
     int diff= 0;
     
     int delCounter = 0;
   
	int not ;

	data-> next = 0;
	
	long flagEdit;
	
	long var3= 0;
	
	long seek = 0;
	
	int f =0;
	
	contact *newArray = malloc(sizeof(contact) *1);
	
	int e;
	


/*
    long var2 = 0;
  
  
    fseek(inFile, 0, SEEK_END);

    calculates total bytes of file from end
    var2 = ftell(inFile);

   posArray[x].next=var2;
   
   */
  
int x = 0;

int onlycon;

int begg;
//find struct co
		/******************* prints everything and stores the strings and structs from file into array of structs  **************************/
		
		
		
		
		fseek(inFile, 0, SEEK_END);
     
        
        //calculates total bytes from end of file 
        long endFile = ftell(inFile);
        
        	printf("ENDFILE IS: %ld ", endFile);
	
  
 
        fseek(inFile, 0, SEEK_SET);
    
   
        //bytes from begining of file 
       long curr = ftell(inFile);
    
  
		
		while( curr < endFile)
		{
				
				posArray = realloc(posArray, sizeof(contact) * (x +1));
				
				stringLastComp= realloc(stringLastComp, sizeof(contact_s) * (x +1));
				
				//unorder = realloc(unorder, sizeof(contact) * (x +1));
				
				
				
				
				fread (&posArray[x], sizeof( contact), 1, inFile ); 
				//fread(&unorder[x],sizeof( contact), 1, inFile ); 
				
				//printf("Struct Pos, %ld\n%ld\n%ld\n%ld\n%ld\n", posArray[x].first_name_posn, posArray[x].last_name_posn, posArray[x].company_name_posn, posArray[x].email_posn, posArray[x].next );
				
   	       
				
				fseek(inFile, posArray[x].last_name_posn, SEEK_SET);
		
				fgets(String, 100, inFile);
			
				if(posArray[x].last_name_posn == 0)
				{
					String[0]='\0';
				}
				
				strncpy(stringLastComp[x].last_name, String, strlen(String)+1);
		
				
				//printf("String last name is %s\n", stringLastComp[x].last_name);
				
				
				fseek(inFile, posArray[x].company_name_posn, SEEK_SET);
		
				fgets(String, 100, inFile);
			
				if(posArray[x].company_name_posn == 0)
				{
					String[0]='\0';
				}
			
			
				strncpy(stringLastComp[x].company_name, String, strlen(String)+1);
		
				//printf("String comp name is %s\n", stringLastComp[x].company_name);
				
		      
				fseek(inFile, posArray[x].next, SEEK_SET);
		
			    curr = posArray[x].next;
		       	
			  // printf("next is %ld\n", curr);
			
			
			x++;
			
		}
	
		
		
		
		
		
		fseek(inFile, 0, SEEK_END);
     
        
        //calculates total bytes from end of file 
        endFile = ftell(inFile);
  
 
        fseek(inFile, 0, SEEK_SET);
    
   
        //bytes from begining of file 
        curr = ftell(inFile);
    
  
		
		while( curr < endFile)
		{
				
				unorder = realloc(unorder, sizeof(contact) * (d +1));
				
				fread(&unorder[d],sizeof( contact), 1, inFile ); 
				
				
				fseek(inFile, unorder[d].next, SEEK_SET);
		
			    curr = unorder[d].next;
		       	
			  // printf("next is %ld\n", curr);
			
			
				d++;
		
		
		}
		
		
		
		
		
		fseek(inFile, 0, SEEK_END);
     
        
        //calculates total bytes from end of file 
         endFile = ftell(inFile);
  
 
        fseek(inFile, 0, SEEK_SET);
    
   
        //bytes from begining of file 
        curr = ftell(inFile);
    
		
		
		while( curr < endFile){
				
				//posArray = realloc(posArray, sizeof(contact) * (x +1));
				
				arrayString = realloc(arrayString, sizeof(contact_s) * (x +1));
				
				
				
				
				
				fread (data, sizeof( contact), 1, inFile ); 
				
				printf("Struct Pos, %ld\n%ld\n%ld\n%ld\n%ld\n", data->first_name_posn, data->last_name_posn, data->company_name_posn, data->email_posn, data->next  );
           
				//seeks to first name position //
                fseek(inFile, data->first_name_posn, SEEK_SET);
   	
			    fgets(String, 100, inFile);
		
			    if(data->first_name_posn == 0)
			    {
			       String[0]='\0';
			    }
			    
			    printf("%d. %s\n", (f+1), String);
		
		        strncpy(arrayString[f].first_name, String, strlen(String)+1);	
		        
		         
                fseek(inFile,data->last_name_posn, SEEK_SET);
		
                fgets(String, 100, inFile);
        	
                if(data->last_name_posn == 0)
		        {
			        String[0]='\0';
		        }
  
               strncpy(arrayString[f].last_name, String, strlen(String)+1);
   
   
		       
		       fseek(inFile, data->company_name_posn, SEEK_SET);
		
			   fgets(String, 100, inFile);
			
			   if(data->company_name_posn == 0)
			   {
				  String[0]='\0';
			   }
			
			
		       strncpy(arrayString[f].company_name, String, strlen(String)+1);
		
		      
		       fseek(inFile, data->email_posn, SEEK_SET);
     
			   fgets(String, 100, inFile);
  
			  // printf("Email: %s\n", String );
			   
			   strncpy(arrayString[f].email, String, strlen(String)+1);
			
			   printf("Struct Strings, %s\n%s\n%s\n%s\n", arrayString[f].first_name, arrayString[f].last_name, 
			   arrayString[f].company_name, arrayString[f].email);
	
			  
			  fseek(inFile, data->next, SEEK_SET);
		
			   curr = data->next;
		       	
		printf("next beginig is %ld", curr);
		
		
			
			
			f++;
			
		}
		
		
	
	
	
		for(int j = 0; j< x ; j++)
		{
			
			if((posArray[j].company_name_posn == 0) || (posArray[j].company_name_posn != 0 && posArray[j].last_name_posn != 0))
			{
			
	
				alpha = 1;
			
	
	
			}	

			else if(posArray[0].last_name_posn == 0)
			{
		
				alpha = 0;
			
		
  
			}
			
			
			
			
			
		}
		
		
		
	if(alpha == 1)
	{
		
		for (int i = 0; i < (x-1) ; i++) 
			{
      
				for ( int j = 0; j < (x-1)  ; j++) 
				{
         
					if (strcmp(stringLastComp[j].last_name, stringLastComp[j + 1].last_name) > 0) 
					{
            
						strcpy(temp, stringLastComp[j]. last_name);
						strcpy(stringLastComp[j].last_name, stringLastComp[j + 1]. last_name);
						strcpy(stringLastComp[j + 1]. last_name, temp);
         
             
						strcpy(nametemp, stringLastComp[j]. company_name);
						strcpy(stringLastComp[j]. company_name, stringLastComp[j+ 1]. company_name);
						strcpy(stringLastComp[j + 1]. company_name, nametemp);
            
            
						tempcon[0] = posArray[j];
						posArray[j] = posArray[ j+ 1];
						posArray[j + 1]= tempcon[0];       
					
             
				}
			}
		}
			
	}	
		
		
	else if(alpha == 0)
	{
		
		for (int i = 0; i < (x-1) ; i++) 
		{
      
			for ( int j = 0; j < (x-1)  ; j++) 
			{
         
				if (strcmp(stringLastComp[j].company_name, stringLastComp[j + 1].company_name) > 0) 
				{
            
					strcpy(temp, stringLastComp[j]. company_name);
					strcpy(stringLastComp[j].company_name, stringLastComp[j+ 1]. company_name);
					strcpy(stringLastComp[j + 1]. company_name, temp);
         
             
					strcpy(nametemp, stringLastComp[j]. last_name);
					strcpy(stringLastComp[j]. last_name, stringLastComp[j+ 1]. last_name);
					strcpy(stringLastComp[j + 1]. last_name, nametemp);
            
            
					tempcon[0] = posArray[j];
					posArray[j] = posArray[ j+ 1];
					posArray[j + 1]= tempcon[0];       
					
             
			}
		 }
	  }
  
  }
		
		
		 
		 
		 p=0;
		 
		 for(m = 0 ; m < x; m++)
		{
			
			
			
			stringLastComp[m].order = (p+1);
				p++;
			/*
			if(unorder[m].first_name_posn == 0 && unorder[m].last_name_posn == 0 && unorder[m].company_name_posn == 0
			&& unorder[m].email_posn ==0 )
			{
				
			
				printf("nothing!");
				printf("m is %d\n", m);
				
				stringLastComp[m].order = 0;
			}
			
			else
			{
			
			
				stringLastComp[m].order = (p+1);
				p++;
				
			}
		   
		   */
		  
   	       
			
		}
		
		  
		 //for(m = 0 ; m < x; m++)
		//{
			
			
			
			//stringLastComp[m].order = (p+1);
			//	p++;
			/*
			if(unorder[m].first_name_posn == 0 && unorder[m].last_name_posn == 0 && unorder[m].company_name_posn == 0
			&& unorder[m].email_posn ==0 )
			{
				
			
				printf("nothing!");
				printf("m is %d\n", m);
				
				stringLastComp[m].order = 0;
			}
			
			else
			{
			
			
				stringLastComp[m].order = (p+1);
				p++;
				
			}
		   
		   */
		  
   	       
			
		//}
		 
		 
		 
		 
		 
		  printf("\nFull Contacts List\n\n");
		 
		 
		 
		for(m = 0 ; m < x; m++)
		{
			
			
			if(posArray[m].first_name_posn == 0 && posArray[m].last_name_posn == 0 && posArray[m].company_name_posn == 0
			&& posArray[m].email_posn ==0 )
			{
			
					printf ("in loop");
					holdx= x-1;
					
			
			}
		
			else
			{
				holdx= x;
				
				
			}
	
	
	}
		
		 
		 
		 
		 
		 printf("\nNumber of Contacts = %d\n", holdx);
		 
			
		
		if(x <= 5)
		{
			//make 
			for(m = 0 ; m < x; m++)
			{
				
				
				 
		   //printf("contacat Strings, order: %d\n%s\n%s\n", stringLastComp[m].order, 
		  // stringLastComp[m].last_name, stringLastComp[m].company_name);
				
			//	if(strlen(stringLastComp[m].company_name) == 0)
				//{
				
					//printf("company is 0");
					printf("\n%d. %s\n", stringLastComp[m].order, stringLastComp[m].last_name /*, stringLastComp[k].company_name */);
				//}
				
				//else if(strlen(stringLastComp[m].last_name) == 0)
				//{
					//printf("lastname is 0");
				//	printf("\n%d. %s\n", stringLastComp[m].order, stringLastComp[m].company_name /*, stringLastComp[k].company_name */);
					
				//}
				
				//else if(strlen(stringLastComp[m].company_name) != 0 && strlen(stringLastComp[m].last_name) != 0)
				//{
					
					//printf("both");
					//printf("\n%d. %s\n", stringLastComp[m].order, stringLastComp[m].last_name /*, stringLastComp[k].company_name */);
			//	}
				
				
			}
		
			
			
			
		}
		
		
		
		
	else if(x > 5)
	{
		//intalizes struct to each number 
		for(m = 0 ; m < 5; m++)
		{
			
			
			
			 printf("\n%d. %s\n", stringLastComp[m].order, stringLastComp[m].last_name );
			
			
			
			
			//if(posArray[m].first_name_posn == 0 && posArray[m].last_name_posn == 0 && posArray[m].company_name_posn == 0
			//&& posArray[m].email_posn ==0 )
			//{
			
					
					
			
			//}
			
			//else
			//{
			
			
			//	printf("\n%d. %s\n", stringLastComp[m].order, stringLastComp[m].last_name , stringLastComp[k].company_name );
				
				
			//}
		    
		    
		   	
		   
		    
		    //printf("contacat Pos, %ld\n%ld\n%ld\n%ld\n%ld\n", posArray[k].first_name_posn, posArray[k].last_name_posn, posArray[k].company_name_posn, posArray[k].email_posn, posArray[k].next );
				
   	       
			
		}
		
		 
		 
		 
	}
		
	
	
	
	
	
	
	
	
	
	for(int p = 0; p < x; p++)
	{
		printf(" New: %d\n",stringLastComp[p].order );
		
	
	}
		
		
		/****************intalizes everything up there ***************/
		
		

	/**************** edit and display (count starts)***************/
	Menu ();
	
	//char test[2] ="1";
	
	
	
	
	//if(testnum == 1)
	//{
		
	//	printf("EQUAL");
		
	//}
	
	printf("Action: ");
	
	
	//scanf("%d", &user);
		//getchar();
	
	
	
	
	fgets(user, 20, stdin);
	
	if(user[strlen(user)-1] == '\n')
   {

         user[strlen(user)-1] = '\0';

   }
   
   
           
	
    
    
    
    
    
    
while(user[0] != 'X')//runs whole program x is bettwen lowest and highest 
	
{
	//call function to recalucate and put eveything in alpha order again after update;
	
	//}
	
	
	if(isalnum(user[0]) == 0)
	{
	
			
	
if(user[0] == '+')
	{
		printf("b is %d\n", b);
		
		printf("a is %d\n", a);

			//if(b >= x )
			//{
				
					//printf(" b should stop\n");
					//b = x-1;

				//	a--;
			
			
		//	}
				
		
			
			
			 if(a==0 && b <5 )
			{
				
				b++;
				a++;
				
				printf("inside if!!!!!!");
				for(int u = a; u <=b; u++)
				{
				if(strlen(stringLastComp[u].company_name) == 0)
				{
				
					printf("\n%d. %s\n", stringLastComp[u].order, stringLastComp[u].last_name /*, stringLastComp[k].company_name */);
				}
				
				else if(strlen(stringLastComp[u].last_name) == 0)
				{
					printf("\n%d. %s\n", stringLastComp[u].order, stringLastComp[u].company_name /*, stringLastComp[k].company_name */);
					
				}
				
				else
				{
					
					printf("\n%d. %s\n", stringLastComp[u].order, stringLastComp[u].last_name /*, stringLastComp[k].company_name */);
				}
			
				
				
				
				}
			
				
				
				
			}
			
			
			
			else if(stop!=1)
			{
			
			
			
				printf("stop");
				
				//if(b <=x)
				//{
					a++;
				//}
				
				
				b++;
				
				onlycon=0;
				
				//while(b> x)
				//{
			
				//	b = x;
			
					//a= 0;
			
			
				//}
				
				
				
				for(int u = a; u <b; u++)
				{
				if(strlen(stringLastComp[u].company_name) == 0)
				{
				
					printf("\n%d. %s\n", stringLastComp[u].order, stringLastComp[u].last_name /*, stringLastComp[k].company_name */);
				}
				
				else if(strlen(stringLastComp[u].last_name) == 0)
				{
					printf("\n%d. %s\n", stringLastComp[u].order, stringLastComp[u].company_name /*, stringLastComp[k].company_name */);
					
				}
			
			else
				{
					
					printf("\n%d. %s\n", stringLastComp[u].order, stringLastComp[u].last_name /*, stringLastComp[k].company_name */);
				}
				}
				
			}
			
			
			
			
			
			
			else if( b>=5 )
			{
				
				
				
				printf("graeter ten 5 if");
				
				
				
				a++;
			
				b++;
				
				
				
				
				for(int u = a; u <=b; u++)
				{
				if(strlen(stringLastComp[u].company_name) == 0)
				{
				
					printf("\n%d. %s\n", stringLastComp[u].order, stringLastComp[u].last_name /*, stringLastComp[k].company_name */);
				}
				
				else if(strlen(stringLastComp[u].last_name) == 0)
				{
					printf("\n%d. %s\n", stringLastComp[u].order, stringLastComp[u].company_name /*, stringLastComp[k].company_name */);
					
				}
			
				else
				{
					
					printf("\n%d. %s\n", stringLastComp[u].order, stringLastComp[u].last_name /*, stringLastComp[k].company_name */);
				}
				
				}
				
				
				
			}
			
		
			/*
			begg=1;
			
			if(a==0 && b <4 && stop == 1)
			{
				
				
				printf("IM HERE1");
				printf("a cant move!!!!!!!!!11");
				a=0;
				b++;
			}
			
			else if((b==4 && a==0) || begg == 1)
			{
				
				printf("IM HERE2");
				printf("in stipid if");
				b++;
				a++;
			}
			
			else if(b>=5)
			{
				
				printf("IM HERE3");
				printf("THE ELSE");
				b++;
				a++;
				
			}
			
			//if(b<=5)
			//{
				
				//b++;
			//}
			
			//else
			//{
				
				//b=0;
			//}
			
			
			//a++;
		
		
			//a++;
			
		if(a==0 && b <5)
		{
			
			printf("inside if!!!!!!");
			for(int u = a; u <b; u++)
			{
			printf("\n%s\n", stringLastComp[u].last_name);
			
			
			}
			
			
			
		}
		
		else
		{
		
		printf("other if");
		
		for(int u = a; u <= b; u++)
		{
			printf("\n%s\n", stringLastComp[u].last_name);
			
			
		}
		
	}
		
		
		
		*/
		
		
		
	}
	
	
	//if(end ==1)
	//{
		//printf
		
	//}
	
	
	
	printf("b after exited is %d", b);
	
	printf("a after exited is %d", a);

	
	if(user[0] == '-')
	{
		
		if (stop!=1)
		{
			if(a ==0 )
			{
			
				printf("STOP DOESNT");
				//a=1
				//a--;
				b--;
			
			}
		
			
			
		}
		
		if(a >0 && b>5 )
		{
			printf("STOP DOESNT2");
			a--;
			b--;
			
		}
		
		
		
		if(a >0 )
		{
			printf("STOP DOESNT2");
			a--;
			
		}
		
		stop=1;
		
		//else 
		//{
			//printf("STOP DOESNT3");
			//a = 0;
		//}
		
		
		b --;
		
		printf("b in loop %d", b);
	
		printf("a in loop %d", a);
	
		
		while(b < 0)
		{
			
			b =0;
			
		}
		
		
		for(int u = a; u<= b; u++)
		{
			if(strlen(stringLastComp[u].company_name) == 0)
				{
				
					printf("\n%d. %s\n", stringLastComp[u].order, stringLastComp[u].last_name /*, stringLastComp[k].company_name */);
				}
				
				else if(strlen(stringLastComp[u].last_name) == 0)
				{
					printf("\n%d. %s\n", stringLastComp[u].order, stringLastComp[u].company_name /*, stringLastComp[k].company_name */);
					
				}	
			else
				{
					
					printf("\n%d. %s\n", stringLastComp[u].order, stringLastComp[u].last_name /*, stringLastComp[k].company_name */);
				}
			
		 }
		

		
	 }
	
	
	
	
	//}
	
	
	
	}//END OF PLUS OR MINUS IF
	
	
	
	
	
	else if(isalpha(user[0]) == 0)
	{
				
		long usernum = atol(user);
				
				
	
	
	
	for(k = 0; k < x; k++)
	{
		
		
		//printf("K IS IN LOOP %d", k);
		
		
		//printf("IN LOOP userInput %d order is %d\n",user, stringLastComp[k].order);
		
		
		if(usernum == stringLastComp[k].order)
		
		{//START OF SMALL IF
			
						printf("Contact Information - Display\n\n");
						printf("Contact #%d\n",stringLastComp[k].order);
						
						fseek(inFile, posArray[k].first_name_posn, SEEK_SET);
			
						fgets(String, 100, inFile);
			
						if(posArray[k].first_name_posn == 0)
						{
							String[0]='\0';
						}
			
						printf("First Name: %s\n", String);
			
			
						fseek(inFile, posArray[k].last_name_posn, SEEK_SET);
			
						fgets(String, 100, inFile);
			
						if(posArray[k].last_name_posn == 0)
						{
							String[0]='\0';
						}
			
						printf("Last Name: %s\n", String);
			
			
						fseek(inFile, posArray[k].company_name_posn, SEEK_SET);
			
						fgets(String, 100, inFile);
			
						if(posArray[k].company_name_posn == 0)
						{
							String[0]='\0';
						}
			
						printf("Company Name: %s\n", String);
			
			
						printf("Phone Number: %lu\n", posArray[k].phone_number);
			
						fseek(inFile, posArray[k].email_posn, SEEK_SET);
			
						fgets(String, 100, inFile);
			
						if(posArray[k].email_posn == 0)
						{
							String[0]='\0';
						}
			
						printf("Email: %s\n", String);
						
						
						exitflag == 1;
						
						break;
			
				
			}	
			
					if(exitflag==1)
					{
						
						break;
						
					}
		
		
		
		}
					
					
					
					
				
					
					printf("K IS %d\n", k);
					
					printf("k + 1  is %d \n", (k+1));
					
				
					printf("Edit: e or Delete: d? or return r ?\n:");
		
					fgets(userEdit, 20, stdin);
		
					if(userEdit[0] == 'e')
					{//EDIT IF
							
							printf("INSIDE EDIT IF");
						
						
						//find struct co
						fseek(inFile, 0, SEEK_END);
     
        
						//calculates total bytes from end of file 
						endFile = ftell(inFile);
  
 
						fseek(inFile, 0, SEEK_SET);
    
   
						//bytes from begining of file 
						 curr = ftell(inFile);
    
  
						while( curr < endFile)
						{
								
								fread (newArray, sizeof( contact), 1, inFile ); 
								
								nextArray[count] = newArray->next;
								
            
								//store nexts in array
            
					
								//printf("phone tehy entered %d\n", posArray[(stringLastComp[k].order -1)].phone_number);
								//printf("newarray phoen number %ld\n", newArray->phone_number );
								
								if(posArray[k].phone_number == newArray->phone_number)
								{
						
									
									
								//	printf("COUNT IS %ld", count); 
								//	printf(" STRUCT READ IN %ld\n%ld\n%ld\n%ld\n%ld\n", newArray->first_name_posn, newArray->last_name_posn, newArray->company_name_posn, newArray->email_posn, newArray->next);
 	
										
										
									printf("%ld NEXT BEFORE \n",nextArray[count]);
									
									//printf("IN IFFF");
									flagEdit = 1;
					 
									//printf("exited");
		 
									/************read in the structs after the edited struct *********/
			 
		  
									/****************** reads in information again they selected -> DIDNT INCREMENT COUNT YET! ******************/
									/*
									if(count == 0)
									{
										seek = 0;
					  
					
									}
				
									else
									{
											var3= count-1;
					
											seek = nextArray[var3];
					
					
									}
				
				
				
									var3= count-1;
									*/
									
									printf("Contact #%d\n",stringLastComp[k].order);
						
									
									printf("Contact Information - Display\n\n");
									printf("Contact #%d\n",stringLastComp[k].order);
						
									fseek(inFile, posArray[k].first_name_posn, SEEK_SET);
			
									fgets(String, 100, inFile);
			
									if(posArray[k].first_name_posn == 0)
									{
										String[0]='\0';
									}
			
									printf("First Name: %s\n", String);
			
			
									fseek(inFile, posArray[k].last_name_posn, SEEK_SET);
			
									fgets(String, 100, inFile);
			
									if(posArray[k].last_name_posn == 0)
									{
										String[0]='\0';
									}
			
									printf("Last Name: %s\n", String);
			
			
									fseek(inFile, posArray[k].company_name_posn, SEEK_SET);
			
									fgets(String, 100, inFile);
			
									if(posArray[k].company_name_posn == 0)
									{
										String[0]='\0';
									}
			
									printf("Company Name: %s\n", String);
			
								
									
									diff =  posArray[k].next - posArray[k].email_posn;
			   
							
									
									
									
									
									
									
									
									fseek(inFile, 0, SEEK_END);
            
									//calculates total bytes from end of file 
									endFile = ftell(inFile);
           
            
									fseek(inFile, 0, SEEK_SET);
		   
									curr = ftell(inFile);
		   
									//printf("CURRAFTER before loop %ld", currAfter);
									int counter = 0;
		   
		   
									//printf("count is %d\n", (count ));
		   
									while(curr < endFile)
									{
											remain = realloc(remain, sizeof(contact) * (counter +1));
											
											//beforeRemain = realloc(beforeRemain, sizeof(contact) * (counter +1));
			  
			  
			   
											fread (&remain[counter], sizeof( contact), 1, inFile ); 
											
											//fread (&beforeRemain[counter], sizeof( contact), 1, inFile ); 
											
			  
				
											printf("Struct Pos1, \n%ld\n%ld\n%ld\n%ld\n%ld\n", remain[counter].first_name_posn, remain[counter].last_name_posn, remain[counter].company_name_posn, remain[counter].email_posn, remain[counter].next  );
			
											
											//printf("Struct Pos2, \n%ld\n%ld\n%ld\n%ld\n%ld\n", beforeRemain[counter].first_name_posn, beforeRemain[counter].last_name_posn, beforeRemain[counter].company_name_posn, beforeRemain[counter].email_posn, beforeRemain[counter].next  );
			
											//before it goes to next positions 
											fseek(inFile, remain[counter].next, SEEK_SET);
				
											curr = remain[counter].next;
		  
											// printf("\ncurrAfter is%ld", currAfter);
			 
			
											counter++;
		  
		  
		  
									}
       
									
									fseek(inFile, 0, SEEK_END);
            
									//calculates total bytes from end of file 
									endFile = ftell(inFile);
           
            
									fseek(inFile, 0, SEEK_SET);
		   
									 curr = ftell(inFile);
		   
									//printf("CURRAFTER before loop %ld", currAfter);
									 counter = 0;
		   
		   
									//printf("count is %d\n", (count ));
		   
									while(curr < endFile)
									{
											
											beforeRemain = realloc(beforeRemain, sizeof(contact) * (counter +1));
			  
			  
			   
											fread (&beforeRemain[counter], sizeof( contact), 1, inFile ); 
											
			  
				
											
											printf("Struct Pos2, \n%ld\n%ld\n%ld\n%ld\n%ld\n", beforeRemain[counter].first_name_posn, beforeRemain[counter].last_name_posn, beforeRemain[counter].company_name_posn, beforeRemain[counter].email_posn, beforeRemain[counter].next  );
			
											//before it goes to next positions 
											fseek(inFile,beforeRemain[counter].next, SEEK_SET);
				
											curr = beforeRemain[counter].next;
		  
											// printf("\ncurrAfter is%ld", currAfter);
			 
			
											counter++;
		  
		  
		  
									}
       
       
       
											for(m = 0; m < x; m++)
											{
		
		
							
							
												for(q = 0 ; q<x; q++)
												{
							
													printf("in loop\n");
							
													if(posArray[k].phone_number == beforeRemain[q].phone_number)
		
													{
			
						
														break;
						
						
						
						
													}
						
												}
						
						
						
											}
       
       printf("Q %d\n", q);
       
       
									/************ starts editing ****************/
       
       
									printf("Phone Number(enter only numbers):");

									fgets(phone,100, stdin);

									if(phone[strlen(phone)-1] == '\n')
									{

										phone[strlen(phone)-1] = '\0';

									}


        
									for(int g =0; g<strlen(phone) + 1; g++) 
									{
      
										if(isalpha(phone[g])!= 0 || phone[0] == '\0')
										{

											flag = 1;
               
											break;

										}


									}

									while(flag == 1 ) 
									{

										printf("Phone Number(enter only numbers):");

										fgets(phone,100, stdin);


										if(phone[strlen(phone)-1] == '\n')
										{

											phone[strlen(phone)-1] = '\0';

										}

										for(int g =0; g<strlen(phone) + 1; g++)
										{
                
											if(isalpha(phone[g])!= 0 || phone[0] == '\0')
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

									remain[q].phone_number = Phone;

		
            
									printf("Email:");

		       
									//fseek(inFile, nextArray[count], SEEK_SET);
		       
									//fread (newArray, sizeof( contact), 1, inFile ); 
		       
		       
									//fseek(inFile, newArray->email_posn, SEEK_SET);
     
									//fgets(String, 100, inFile);
  
									//String[0] = '\0';
			   
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
				

		//user enters in something for company name
        if(Compname[0]!= '\0')
        {
            
            printf("inside first if");
            
            //company name posn plus length of company name stored in email posn
           remain[q]. email_posn  = remain[q].company_name_posn + (strlen(Compname) +1 );
        }

        //user enters in something for last name and nothing for company name
        else if(Compname[0]== '\0' && Lastname[0] != '\0' )
        {
            printf("inside if"); 
            //last name posn plus length of last name stored in email posn
			remain[q].email_posn  = remain[q].last_name_posn + (strlen(Lastname) +1 );

        }

  
        remain[q]. next = remain[q].email_posn  + (strlen(String) +1 );
   
		printf("confirm new pos %ld\n%ld\n%ld\n%ld\n%ld\n", remain[q].first_name_posn, remain[q].last_name_posn, remain[q].company_name_posn, remain[q].email_posn, remain[q].next);
 
			   
			 
			   if((strlen(String) +1) < diff)
			   {
					alertDiff = 0;
					
					printf("in small num less ten enteed before");
					
					diff = diff - (strlen(String) +1);
			   
			   
				}
				
				else if(diff < (strlen(String) +1))
				{
					
					alertDiff = 1;
					
					printf("in big num more ten enteed before");
					
					diff = (strlen(String) +1) - diff;
			   
					
				}
				
				
				else if(diff == (strlen(String) +1 ))
				{
					
					alertDiff = 1;
					diff = 0; 
					
				}
				
				printf("diff is %d\n", diff);
			  
			  
			    
			    
			    //printf(" REMAIN AT ONE %ld\n%ld\n%ld\n%ld\n%ld\n", remain[1].first_name_posn, remain[1].last_name_posn, 
			    //remain[1].company_name_posn, remain[1].email_posn, remain[1].next);
			  
			     
			   
			   
			   
			   if(q != (x-1))
			    {
					 var7 = q + 1;
					 
				printf("var7%d\n", var7);
  
			     
			     for(int e = var7; e < x; e++ )
				{
		   
		   
		   
		   
					if(alertDiff != 0)
					{
	
						printf("WERE ADDING ONE");
			 
						if( remain[e].first_name_posn !=0)
						{
							remain[e].first_name_posn  = remain[e].first_name_posn + diff ;
						}

						if(remain[e].last_name_posn !=0)
						{
							remain[e].last_name_posn = remain[e].last_name_posn + diff ;
						}

					
						if(remain[e].company_name_posn !=0)
						{
							remain[e].company_name_posn = remain[e].company_name_posn + diff ;
						}

						if(remain[e].email_posn !=0)
						{
							remain[e].email_posn = remain[e].email_posn + diff;
						}

						remain[e].next  = remain[e].next + diff;
				
					
		printf("Stored in Remain!  , \n%ld\n%ld\n%ld\n%ld\n%ld\n", remain[e].first_name_posn, remain[e].last_name_posn, remain[e].company_name_posn, remain[e].email_posn, remain[e].next  );
			
					
					
					
					}
			 
					else if(alertDiff == 0)
					{
						
						printf("WERE MINUS ONE");
						
						
						if( remain[e].first_name_posn !=0)
						{
							remain[e].first_name_posn  = remain[e].first_name_posn - diff ;
						}

						if(remain[e].last_name_posn !=0)
						{
							remain[e].last_name_posn = remain[e].last_name_posn - diff ;
						}

					
						if(remain[e].company_name_posn !=0)
						{
							remain[e].company_name_posn = remain[e].company_name_posn - diff ;
						}

						if(remain[e].email_posn !=0)
						{
							remain[e].email_posn = remain[e].email_posn - diff;
						}

						remain[e].next  = remain[e].next - diff;
				 
					}
			 
		   
			}
		   
		   
		   
	   }
	   
					
					fclose(inFile);
					
					inFile = fopen("myList.db", "wb+");
					
					fclose(inFile);
					
					inFile = fopen("myList.db", "ab+");
					
				
					//fseek(inFile, 40, SEEK_SET);
					
					//printf("fseek is %ld\n", nextArray[count]);
       
			   
					//find struct co
					//	fseek(inFile, 0, SEEK_END);
     
        
						//calculates total bytes from end of file 
					//	endFile = ftell(inFile);
  
 
					//	fseek(inFile,0, SEEK_SET);
						
				
					//bytes from begining of file 
						// curr = ftell(inFile);
						
						y = 0;
						
						printf("%d", var7);
  
						while( y < x)
						{
			  
						//printf("FSEEK IS %ld\n", nextArray[count]);
       
							
						printf("WRITING ARRAY");
						
						fwrite(&remain[y], sizeof(contact), 1, inFile);
						
						printf("WRITING REMAIN NEW INDEXES, \n%ld\n%ld\n%ld\n%ld\n%ld\n", new[y].first_name_posn, new[y].last_name_posn, new[y].company_name_posn, new[y].email_posn, new[y].next  );
			
						
						
						
						
					
					
						
						/*
						//fseek(inFile, remain[y].first_name_posn, SEEK_SET);
   	
						
						if(strlen(arrayString[count].first_name) !=0)
						{
	       
					
						//printf("old first name %s\n", arrayString[at].first_name);
					
					
						//FILE* inFile = OpenFile(argv[1]);
					
						fwrite(arrayString[count].first_name, sizeof(char),(strlen(arrayString[count].first_name) +1), inFile);

		
						}
    
	          
               
                
						//fseek(inFile, remain[y].last_name_posn, SEEK_SET);
	     	
						if(strlen(arrayString[count].last_name) != 0)
						{
			       
			       
						//printf("old last name %s\n", arrayString[at].last_name);
			       
						fwrite(arrayString[count].last_name, sizeof(char),(strlen(arrayString[count].last_name) +1), inFile);

		
						}
  
              
         
						//fseek(inFile, remain[y].company_name_posn, SEEK_SET);

						if(strlen(arrayString[count].company_name) != 0)
						{
				  
							//printf("old company %s\n", arrayString[at].company_name);
			       
							fwrite(arrayString[count].company_name, sizeof(char),(strlen(arrayString[count].company_name) +1), inFile);

						}
			
				
				
				
						if(flagEdit == 1 && y == q)//add iff condition if the one edited it usually first struct
						{      
							printf("updated email %s\n", String);
						
							//fseek(inFile, remain[y].email_posn, SEEK_SET);
							
							if(strlen(String) != 0)
							{
			   
							
								fwrite(String, sizeof(char), (strlen(String) +1), inFile);
			   
							}
							
						}
			   
						else
						{
				   
							//printf("old email %s\n", arrayString[at].email);
					
							//fseek(inFile, remain[y].email_posn, SEEK_SET);
				   
							if(strlen(arrayString[count].email) != 0)
							{
				  
								fwrite(arrayString[count].email, sizeof(char),(strlen(arrayString[count].email) +1), inFile);
							}
				   
				   
						}
		
						
						
						//fseek(inFile, beforeRemain[y].next, SEEK_SET);
			
						//printf("remain next is is %ld\n",  beforeRemain[y].next);
						
						//curr  =  beforeRemain[y].next;
						
						y++;
				
				//seeks to first name position //
                
						}
			
	 					*/	
			
			
			y++;
			}
			/*************************erarse after**************************/
			
			//calculates total bytes from end of file 
						//endFile = ftell(inFile);
  
 
						//fseek(inFile,0, SEEK_SET);
						
				
						//bytes from begining of file 
						 //curr = ftell(inFile);
						
						 counter = 0;
										
									
									while(counter < 2)
									{
											
											new = realloc(new, sizeof(contact) * (counter +1));
			  
			  
			   
											fread (&new[counter], sizeof( contact), 1, inFile ); 
											
			  
				
											
											printf("Struct Pos AFTER , \n%ld\n%ld\n%ld\n%ld\n%ld\n", new[counter].first_name_posn, new[counter].last_name_posn, new[counter].company_name_posn, new[counter].email_posn, new[counter].next  );
			
											//before it goes to next positions 
											//fseek(inFile,beforeRemain[counter].next, SEEK_SET);
				
											//curr = beforeRemain[counter].next;
		  
											// printf("\ncurrAfter is%ld", currAfter);
			 
			
											counter++;
		  
		  
		  
									}

						
						
			
			
			
			
			
			break;
						
						
		}// END OF IF THEY FIND IT 
	
	
	
						else
						{
		
								//printf("going to next position");
	        
								fseek(inFile, newArray->next, SEEK_SET);
		
								curr = newArray->next;
		    
								//counter for next value at 1
		   
								count++;
		    
								//at++;
								
								//i++;
		    
								printf("Curr is %ld\n", curr);
		
								not = 1;
		
		
		
		
		
					}
		
	
		if(not!=1)
		{
	
	
			break;
	
	
		}

	
}//WHILE LOOP SEARCHING THROUGN 
	
	
	
	
	
}//BIG IF EDIT 


					else if( userEdit[0] == 'd')
					{
						
						
						
						printf("delete!");
						
						
						//find struct co
						fseek(inFile, 0, SEEK_END);
     
        
						//calculates total bytes from end of file 
						endFile = ftell(inFile);
  
 
						fseek(inFile, 0, SEEK_SET);
    
   
						//bytes from begining of file 
						 curr = ftell(inFile);
    
  
						
									while(curr < endFile)
									{
											
											deleteArray = realloc(deleteArray, sizeof(contact) * (delCounter +1));
			  
			  
			   
											fread (&deleteArray[delCounter], sizeof( contact), 1, inFile ); 
											
			  		
											//printf("Struct Pos2, \n%ld\n%ld\n%ld\n%ld\n%ld\n", beforeRemain[counter].first_name_posn, beforeRemain[counter].last_name_posn, beforeRemain[counter].company_name_posn, beforeRemain[counter].email_posn, beforeRemain[counter].next  );
			
											//before it goes to next positions 
											fseek(inFile,deleteArray[delCounter].next, SEEK_SET);
				
											curr = deleteArray[delCounter].next;
		  
											// printf("\ncurrAfter is%ld", currAfter);
			 
			
											delCounter++;
		  
		  
		  
									}
       
						
						
						
						
						
						
						
						
						for(m = 0; m < x; m++)
						{
		
		
							
							
							for(q = 0 ; q<x; q++)
							{
							
								printf("in loop\n");
							
								if(posArray[k].phone_number == deleteArray[q].phone_number)
		
								{
			
						
									break;
						
						
						
						
								}
						
							}
						
						
						
						}
						
						
						
						
						
						deleteArray[q].first_name_posn = 0;
						
						deleteArray[q].last_name_posn = 0;
						
						deleteArray[q].company_name_posn = 0;
						
						deleteArray[q].email_posn = 0;
						
						deleteArray[q].phone_number = 0;
						
						
						//arrayString[q].company_name[0] = NULL;
											
						//arrayString[q].last_name[0] = NULL;
						
						
						//arrayString[q].first_name[0] = '\0';
											
						//arrayString[q].last_name[0] = '\0';
						
					//	arrayString[q].company_name[0] = '\0';
						
					//	arrayString[q].email[0] = '\0';
						
						
						
						
						
					
						fseek(inFile, 0, SEEK_END);
     
        
						//calculates total bytes from end of file 
						endFile = ftell(inFile);
  
 
						fseek(inFile,0, SEEK_SET);
						 
   
						//bytes from begining of file 
						 curr = ftell(inFile);
						
						y = 0;
  
						while( curr < endFile)
						{
			  
							
							fwrite(&deleteArray[y], sizeof(contact), 1, inFile);
							
							
							fseek(inFile, deleteArray[y].first_name_posn, SEEK_SET);
   	
						
						if(strlen(arrayString[y].first_name) !=0)
						{
	       
					
							if(y==q)
							{
								
								arrayString[y].first_name[0]='\0';
								
								fwrite(arrayString[y].first_name, sizeof(char),(strlen(arrayString[y].first_name) +1), inFile);
					
							}
					
							else
							{
								
								
								if(strlen(arrayString[y].first_name)!=0)
								{
									fwrite(arrayString[y].first_name, sizeof(char),(strlen(arrayString[y].first_name) +1), inFile);
								}
							}
				
						
						}
    
	          
               
                
						fseek(inFile, deleteArray[y].last_name_posn, SEEK_SET);
	     	
						if(strlen(arrayString[y].last_name) != 0)
						{
			       
			       
							if(y==q)
							{
								
								arrayString[y].last_name[0]='\0';
								
								fwrite(arrayString[y].last_name, sizeof(char),(strlen(arrayString[y].last_name) +1), inFile);
					
							}
					
							else
							{
								if(strlen(arrayString[y].last_name)!=0)
								{
									fwrite(arrayString[y].last_name, sizeof(char),(strlen(arrayString[y].last_name) +1), inFile);
								}
							}
						
						
						
						}
  
              
         
						fseek(inFile, deleteArray[y].company_name_posn, SEEK_SET);

						if(strlen(arrayString[y].company_name) != 0)
						{
				  
							if(y==q)
							{
								
								arrayString[y].company_name[0]='\0';
								
								fwrite(arrayString[y].company_name, sizeof(char),(strlen(arrayString[y].company_name) +1), inFile);
					
							}
					
							else
							{
								if(strlen(arrayString[y].company_name)!=0)
								{
									fwrite(arrayString[y].company_name, sizeof(char),(strlen(arrayString[y].company_name) +1), inFile);
								}
							}
						}
			
				
							
							
						if(strlen(arrayString[y].email) != 0)
						{
				  
							if(y==q)
							{
								
								arrayString[y].email[0]='\0';
								
								fwrite(arrayString[y].email, sizeof(char),(strlen(arrayString[y].email) +1), inFile);
					
							}
					
							else
							{
								if(strlen(arrayString[y].email)!=0)
								{
									fwrite(arrayString[y].email, sizeof(char),(strlen(arrayString[y].email) +1), inFile);
								}
							}
						}
			
				   
				  		
							fseek(inFile, deleteArray[y].next, SEEK_SET);
							
							curr = deleteArray[y].next;
		  
							
							y++;
							
							
					
					
						}
						
						
						
						
						
						
						
						fseek(inFile, 0, SEEK_END);
     
        
						//calculates total bytes from end of file 
						endFile = ftell(inFile);
  
 
						fseek(inFile,0, SEEK_SET);
						 
   
						//bytes from begining of file 
						 curr = ftell(inFile);
						
						//y = 0;
  
						while( curr < endFile)
						{
			  
							
							fread(newArray, sizeof(contact), 1, inFile);
							
			printf("DELETED ARRAY, \n%ld\n%ld\n%ld\n%ld\n%ld\n", newArray->first_name_posn, newArray->last_name_posn, 
			newArray->company_name_posn, newArray->email_posn, newArray->next  );
			
							
							
							fseek(inFile, newArray->next, SEEK_SET);
							
							curr = newArray->next;
		  
							
							//y++;
							
							
					
					
						}
						
						
						
						
						
						
						//call function thatlists them again but from they delelte it 
						
						//arrayString
					/*	
                    printf("Struct Pos After, \n%ld\n%ld\n%ld\n%ld\n%ld\n", deleteArray[q].first_name_posn, 
                  deleteArray[q].last_name_posn, deleteArray[q].company_name_posn, 
                  deleteArray[q].email_posn, 
                    deleteArray[q].next  );
			
						*/		
						
							
						}
	
}//END OF NUMBER: IF


		else if(isalpha(user[0]) != 0)
		{
			
			fclose(inFile);
			
			inFile = fopen("myList.db", "ab+");
					

			do
			{
			
			printf("Next is : %ld\n", data->next);
			
			printf("First Name:");

			fgets(Fname, 100, stdin);

            if(Fname[strlen(Fname)-1] == '\n')
			{

			    Fname[strlen(Fname)-1] = '\0';

            }

     
            //user enters in nothing for first name
            if(Fname[0] == '\0' )
		    {
				//struct size plus next is stored in last name position
                data->last_name_posn = 24 + data->next;
      
                data->first_name_posn =  0;

            }



            else if(Fname[0] != '\0')
            {

                //struct size plus the next value is stored in first name position
                data->first_name_posn = 24 + data->next;

            }
    

            printf("Last Name:");

            fgets(Lname, 100, stdin);

            if(Lname[strlen(Lname)-1] == '\n')
            {

               Lname[strlen(Lname)-1] = '\0';

            }

        
           // user enters in nothing for last name
            if(Lname[0] == '\0')
            {
                
                LnameExi = 1;
                
                //user enters in nothing for first name
                if(Fname[0]== '\0')
                {

                    //struct size plus next is stored in company name posn
                    data->company_name_posn = 24 + data->next;
                
                    data->last_name_posn =  0;

                }

		   
                else if(Fname[0]!='\0')
                {
					//first name of plus length of first name is stored in company name posn
                    data->company_name_posn =data->first_name_posn + (strlen(Fname) +1 );
                
                    data->last_name_posn =  0;

                }




          }


        //  user enters in nothing for first name and something for last name
          else if(Lname[0] != '\0' && Fname[0] == '\0' )
          {

              //struct size plus next is stored in last name posn
              data->last_name_posn =   24 + data->next;
          }


          //user enters in something for first name and something for last name 
          else if(Lname[0] != '\0' && Fname[0] != '\0' )
          {

              //first name posn plus length of first name is stored in last name posn
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
       
       
          
		   
       
          //user enters in nothing for company name and something for last anme
          if(comp[0] == '\0' && Lname[0]!= '\0')
          {

			 //user enters in nothing for first name
              if(Fname[0] == '\0' )
              {

                  //last name posn plus length of last name is stored in email posn
                  data->email_posn = data->last_name_posn + (strlen(Lname) + 1);
               
                  data->company_name_posn = 0;

              }

		    
		  }
	
	
		//user enters in something for company and something for first name and nothing for last name
        else if(comp[0] != '\0' && Lname[0] == '\0' && Fname[0] != '\0' )
        {

            //first name posn plus length of first name is stored in company posn
            data->company_name_posn = data->first_name_posn + (strlen(Fname) + 1);

        }

       
       else if(comp[0] != '\0' && Lname[0]=='\0' && Fname[0] == '\0')
       {
       
			 data->company_name_posn = 24 + data->next;
       
	   }
       
        //user enters in something for company name and something for last name
        else if(comp[0] != '\0' && Lname[0] != '\0' )
        {

           //last name posn plus length of last name is stored in company name posn
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

       //error trap
        while(Email[0] == '\0' ){

            printf("Sorry, please enter in an email:");

            fgets(Email, 100, stdin);

            if(Email[strlen(Email)-1] == '\n')
            {

                Email[strlen(Email)-1] = '\0';

            }


        }


		//user enters in something for company name
        if(comp[0]!= '\0')
        {
            
            //company name posn plus length of company name stored in email posn
            data-> email_posn  = data->company_name_posn + (strlen(comp) +1 );
        }

        //user enters in something for last name and nothing for company name
        else if(comp[0]== '\0' && Lname[0] != '\0' )
        {
            //last name posn plus length of last name stored in email posn
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
			
				//writes the struct to file
				fwrite(data, sizeof(contact), 1, inFile);
    
				//if user entered in something (wont write null term if user entered in nothing)
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
		
		
		
				for(o = 0; o < 100; o++)
				{
		
				Fname[o]= '\0';
		
				Lname[o] = '\0';
		
				comp[o] = '\0';
		
				Email[o] ='\0';
				
			   }
		
		
	
	
		}
		
		
		
		
		
		
	
		
	

    } while(anwser[0]!= 's'); //change to cap a after



	
	
	
	
	}//END OF ADD FUNCTION

			
			
			
			
			
			
			fclose(inFile);
			
			inFile = fopen("myList.db", "rb+");
					

	



	
	/*
	printf("Action:");
	
	scanf("%d", &user);
	getchar();
	* 
	* */
	
		/*Open file*/
		
	//fclose(inFile);
			
	
	//FILE* inFile = OpenReadFile(argv[1]);
	
	
	
	
	
	printf("Action: ");
	
	fgets(user, 20, stdin);
	
	if(user[strlen(user)-1] == '\n')
    {

         user[strlen(user)-1] = '\0';

    }
	
	

	curr = 0;
	
	count = 0;
	
	//counter = 0;
	
	delCounter = 0;
	
	//currAfter = 0;
	
	counterbeg = 0;
	
	m = 0;
	





}//BIG WHILE LOOP


fclose(inFile);


return 0;

}

