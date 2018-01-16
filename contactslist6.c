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

	contact_s *stringLastComp = malloc(sizeof(contact_s) *1);

	contact *remain = malloc(sizeof(contact) *1);
   
int stop = 0;
	char String[100];
	
	int userInput = 0;
	
	char user [20];
	
	int a = 0;
	
	char temp [100] ;
    
    char nametemp [100];
    
    char lasttemp [100];
    
    char emailtemp [100];
    
    contact tempcon[1];
    
    char userDis[20];
    
    int alpha ;
    
    
    int r = 0;
    
    int k;
    
    k=0;
    
    int holdLastIndex = 0;
    
    int end;
    
    int b = 5;


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
  
 
        fseek(inFile, 0, SEEK_SET);
    
   
        //bytes from begining of file 
       long curr = ftell(inFile);
    
  
		
		while( curr < endFile)
		{
				
				posArray = realloc(posArray, sizeof(contact) * (x +1));
				
				stringLastComp= realloc(stringLastComp, sizeof(contact_s) * (x +1));
				
				
				
				
				
				fread (&posArray[x], sizeof( contact), 1, inFile ); 
				
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
	
	
		
		if((posArray[0].company_name_posn == 0) || (posArray[0].company_name_posn != 0 && posArray[0].last_name_posn != 0))
		{
			
	
			alpha = 1;
			
	
	
		}	

		else if(posArray[0].last_name_posn == 0)
		{
		
			alpha = 0;
			
		
  
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
		
		
		
		
		
		
		
		
			
		
		 
			
	int p=0;
		 
		 for(int m = 0 ; m < x; m++)
		{
			
			
			
			stringLastComp[m].order = (p+1);
				p++;
				
		}
		
		//intalizes struct to each number 
		for(int m = 0 ; m < 5; m++)
			{
				
				
				if(strlen(stringLastComp[m].company_name) == 0)
				{
				
					printf("company is 0");
					printf("\n%d. %s\n", stringLastComp[m].order, stringLastComp[m].last_name /*, stringLastComp[k].company_name */);
				}
				
				else if(strlen(stringLastComp[m].last_name) == 0)
				{
					printf("lastname is 0");
					printf("\n%d. %s\n", stringLastComp[m].order, stringLastComp[m].company_name /*, stringLastComp[k].company_name */);
					
				}
				
				else if(strlen(stringLastComp[m].company_name) != 0 && strlen(stringLastComp[m].last_name) != 0)
				{
					
					printf("both");
					printf("\n%d. %s\n", stringLastComp[m].order, stringLastComp[m].last_name /*, stringLastComp[k].company_name */);
				}
				
				
			}
		
		/****************intalizes everything up there ***************/
		
		

	/**************** edit and display (count starts)***************/
	Menu ();
	
	
	printf("Action: ");
	
	fgets(user, 20, stdin);
	
	if(user[strlen(user)-1] == '\n')
    {

         user[strlen(user)-1] = '\0';

    }
	
    
while(user[0] != 'X')//runs whole program
	
{
	
	
	
	
	//if(isalpha(user[0]) != 0)
	//{
		//printf("in f");
		//scanf("%d", &userInput);
		//getchar();
	
	//}
	
	/*
	for(int k = 0; k < x; k++)
	{
		
		printf("IN LOOP userInput %d order is %d\n",userInput, stringLastComp[k].order);
		
		
		if(userInput == stringLastComp[k].order)
		
		{//START OF SMALL IF
			

						fseek(inFile, posArray[(stringLastComp[k].order -1)].first_name_posn, SEEK_SET);
			
						fgets(String, 100, inFile);
			
						if(posArray[(stringLastComp[k].order -1)].first_name_posn == 0)
						{
							String[0]='\0';
						}
			
						printf("First Name: %s\n", String);
			
			
						fseek(inFile, posArray[(stringLastComp[k].order -1)].last_name_posn, SEEK_SET);
			
						fgets(String, 100, inFile);
			
						if(posArray[(stringLastComp[k].order -1)].last_name_posn == 0)
						{
							String[0]='\0';
						}
			
						printf("Last Name: %s\n", String);
			
			
						fseek(inFile, posArray[(stringLastComp[k].order -1)].company_name_posn, SEEK_SET);
			
						fgets(String, 100, inFile);
			
						if(posArray[(stringLastComp[k].order -1)].company_name_posn == 0)
						{
							String[0]='\0';
						}
			
						printf("Company Name: %s\n", String);
			
			
						printf("Phone Number(enter only numbers): %lu\n", posArray[(stringLastComp[k].order -1)].phone_number);
			
						fseek(inFile, posArray[(stringLastComp[k].order -1)].email_posn, SEEK_SET);
			
						fgets(String, 100, inFile);
			
						if(posArray[(stringLastComp[k].order -1)].email_posn == 0)
						{
							String[0]='\0';
						}
			
						printf("Email: %s\n", String);
			
			
					
		}//END OF SMALL IF 
	
	}
	
	*/
	
	
	printf("x is %d", x);
	
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
		
			 if( b < 5 )
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
			
			
			
			
			
			
			else if( b >= 5 )
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
	
	
	printf("Action: ");
	
	fgets(user, 20, stdin);
	
	if(user[strlen(user)-1] == '\n')
    {

         user[strlen(user)-1] = '\0';

    }
	
	
	
	}
	
	printf("done");



return 0 ;
}
	
