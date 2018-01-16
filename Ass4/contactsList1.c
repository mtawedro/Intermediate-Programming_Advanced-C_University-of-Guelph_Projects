#include <stdio.h>

#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <strings.h>

#include <float.h>

#include <ctype.h>

#include <math.h>

//new

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

/*
This function opens the file required and if file coud not be opened then user is prompt to enter file input again and returns a file pointer
FILE *OpenFile(char File[])
{

    File pointer
    FILE *inFile = NULL;

    Open file
    inFile = fopen(File, "ab+");


    Error Trap, if file could not be found or user enters in wrong file name
    while(inFile == NULL) {

        printf("Could not open file myfile.txt. Please enter in another file\n");


        fgets(File, 200, stdin);

        gets rid of hard return
		if(File[strlen(File)-1] == '\n')
        {


             File[strlen(File)-1] = '\0';

        }


        inFile = fopen(File, "ab+");

    }  




    return inFile;  

}


	*/
	
	



int main(void/*int argc, char*argv[]*/) 
{
	

	
	/*Calls file pointer to open file*/
	//FILE* inFile = OpenReadFile(argv[1]);
   
	contact *posArray = malloc(sizeof(contact) *1);
	
	contact *unorder = malloc(sizeof(contact) *1);
	
	contact *deleteArray = malloc(sizeof(contact) *1);

	contact_s *stringLastComp = malloc(sizeof(contact_s) *1);
	
	contact_s *arrayString = malloc(sizeof(contact_s) *1);
	
	
	contact *remain = malloc(sizeof(contact) *1);
	
	contact *beforeRemain = malloc(sizeof(contact) *1);
	
	contact *data = malloc(sizeof(contact) *1);
	
	int emailflag;
	
	//int inHere=1;
	
	
	int d = 0;
	
	 
    char anwser[100];
    
   
    int m;
    
    int flagDont;
    
    char Fname[100];

	char Lname[100];

	char comp[100];

	char Email[100];
	
	char File[100];
	
	
int y;
   
int stop = 0;
	char String[100];
	
	
	
	
	char user[20];
	
	int a = 0;
	
	int p = 0;
	
	int o ;
	
	char temp [100] ;
    
    char nametemp [100];
    
    
    
    contact tempcon[1];
    
   
   

    
    int k;
    
    
   
     
    
    
    int b = 5;
    
    
	
	int holdx=0;
	
	
	char userEdit[10];
	
	int q;
	int count = 0;

	char phone[100];
    long Phone = 0;
   
    
    

    int flag;
   
   
    
     
     int delCounter = 0;
   
	int not ;

	data-> next = 0;
	
	
	
	int f =0;
	
	contact *newArray = malloc(sizeof(contact) *1);
	
	


  
int x = 0;



	 
	 
	  /*File pointer*/
    FILE *inFile = NULL;

    /*Open file*/
    inFile = fopen("myContactsList.db", "ab+");


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

  /*File pointer*/
    //FILE *inFile = NULL;

    /*Open file*/
    inFile = fopen("myContactsList.db", "rb+");


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

	

	for(int o = 0; o<100;o++)
	{

		
		stringLastComp->last_name[o] = '\0';

		stringLastComp-> company_name[o] = '\0';

        
     }
       
		
		
		
		
		
		
		fseek(inFile, 0, SEEK_END);
     
        
        
        long endFile = ftell(inFile);
        
        if(endFile == 0)
        {
			
						 printf("\nNumber of Contacts = %d\n", x);
						
		 	
		
			
			
			
		}
		
			
			
			
			
	else if(endFile!=0)
	{



		fseek(inFile, 0, SEEK_END);
     
        
        
         endFile = ftell(inFile);
        
		/******************* prints everything and stores the strings and structs from file into array of structs  **************************/
		
		
		
		
		fseek(inFile, 0, SEEK_END);
     
        
        
         endFile = ftell(inFile);
        
        	
 
        fseek(inFile, 0, SEEK_SET);
    
   
       
       long curr = ftell(inFile);
    
  
		
		while( curr < endFile)
		{
				
				posArray = realloc(posArray, sizeof(contact) * (x +1));
				
				stringLastComp= realloc(stringLastComp, sizeof(contact_s) * (x +1));
				
				
				
				
				
				fread (&posArray[x], sizeof( contact), 1, inFile ); 
				
   	       
				
				fseek(inFile, posArray[x].last_name_posn, SEEK_SET);
		
				fgets(String, 100, inFile);
			
				if(posArray[x].last_name_posn == 0)
				{
					String[0]='\0';
				}
				
				strncpy(stringLastComp[x].last_name, String, strlen(String)+1);
		
				
				
				
				fseek(inFile, posArray[x].company_name_posn, SEEK_SET);
		
				fgets(String, 100, inFile);
			
				if(posArray[x].company_name_posn == 0)
				{
					String[0]='\0';
				}
			
			
				strncpy(stringLastComp[x].company_name, String, strlen(String)+1);
		
				
		      
				fseek(inFile, posArray[x].next, SEEK_SET);
		
			    curr = posArray[x].next;
		       	
			 
			
			x++;
			
		}
	
		
		
		
		
		
		fseek(inFile, 0, SEEK_END);
     
        
        
        endFile = ftell(inFile);
  
 
        fseek(inFile, 0, SEEK_SET);
    
   
        
        curr = ftell(inFile);
    
  
		
		while( curr < endFile)
		{
				
				unorder = realloc(unorder, sizeof(contact) * (d +1));
				
				fread(&unorder[d],sizeof( contact), 1, inFile ); 
				
				
				fseek(inFile, unorder[d].next, SEEK_SET);
		
			    curr = unorder[d].next;
		       	
			 
			
				d++;
		
		
		}
		
		
		
		
		
		fseek(inFile, 0, SEEK_END);
     
        
        
         endFile = ftell(inFile);
  
 
        fseek(inFile, 0, SEEK_SET);
    
   
        
        curr = ftell(inFile);
    
		
		
		while( curr < endFile){
				
				
				
				arrayString = realloc(arrayString, sizeof(contact_s) * (f +1));
			
				
				fread (data, sizeof( contact), 1, inFile ); 
				
				
                fseek(inFile, data->first_name_posn, SEEK_SET);
   	
			    fgets(String, 100, inFile);
		
			    if(data->first_name_posn == 0)
			    {
			       String[0]='\0';
			    }
			    
			   
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
		
		      
		      
			 //  strncpy(arrayString[f].email, data->newString, strlen(data->newString)+1);
			
			  
			  
			  fseek(inFile, data->next, SEEK_SET);
		
			   curr = data->next;
		       	
		
		
			
			
			f++;
			
		}
		
		
	
	
	
	
	
	
		
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
		
		 
		 
		
		
		
		 p=0;
		 
		
		 for(m = 0 ; m < x; m++)
		{
			
			
			
			stringLastComp[m].order = (p+1);
				p++;
			
   	       
			
		}
		
		  
		 
		 
		 
		  printf("\nFull Contacts List\n\n");
		 
		 
		 
		for(m = 0 ; m < x; m++)
		{
			
			
			if(posArray[m].first_name_posn == 0 && posArray[m].last_name_posn == 0 && posArray[m].company_name_posn == 0
			&& posArray[m].email_posn ==0 )
			{
			
					
					//printf("in f");
					holdx= --x;
					
					//Menu ();
		 
		 
		 
				
			
			}
		
			else if(posArray[m].first_name_posn != 0 && posArray[m].last_name_posn != 0 && posArray[m].company_name_posn != 0
			&& posArray[m].email_posn !=0)
			{
				//printf("in else");
				 holdx= x;
				
				
					//Menu ();
		 
		 
		 
				
				
				
				
				
			}
	
	
	}
		
		 printf("\nNumber of Contacts = %d\n", holdx);
		 	
		 x = d;
		 
		 //printf("X AFTER INTALIZED IS %d", x);
			
		
		if(x <= 5)
		{
			
			for(int u = 0 ; u < 5; u++)
			{
				
				
				 
		  
				
			if(strlen(stringLastComp[u].company_name) == 0)
				{
				
					
					for(int i = 'A'; i <= 'Z';i++)
					{
					
						if(i ==  stringLastComp[u].last_name[0])
						{
							if(stringLastComp[u-1].last_name[0] != i)
							{
							
								printf("\n%c\n",i);
							
								break;
							
							}
							
					    
					    }
				  
				  
				   }
					
				   
				
					printf("\n%d. %s\n", (u+1), stringLastComp[u].last_name /*, stringLastComp[k].company_name */);
				
				
				
				}
				
				else if(strlen(stringLastComp[u].last_name) == 0)
				{
					
					for(int i = 'A'; i <= 'Z';i++)
					{
					
						if(stringLastComp[u-1].company_name[0] != i)
							{
							
								printf("\n%c\n",i);
							
								break;
							
							}
				  
				  
				   }
					
					
				
					printf("\n%d. %s\n", (u+1), stringLastComp[u].company_name /*, stringLastComp[k].company_name */);
					
				}	
			else
				{
					
					for(int i = 'A'; i <= 'Z';i++)
					{
					
						if(i ==  stringLastComp[u].last_name[0])
						{
							if(stringLastComp[u-1].last_name[0] != i)
							{
							
								printf("\n%c\n",i);
							
								break;
							
							}
							
					    }
				  
				  
				   }
					
					
					
					
					printf("\n%d. %s\n", (u+1), stringLastComp[u].last_name /*, stringLastComp[k].company_name */);
				}
			
				
				
			}
		
			
			
			
		}
		
		
		
		
	else if(x > 5)
	{
		
		for(int u = 0 ; u < 5; u++)
		{
			
			
			if(strlen(stringLastComp[u].company_name) == 0)
				{
				
					
					for(int i = 'A'; i <= 'Z';i++)
					{
					
						if(i ==  stringLastComp[u].last_name[0])
						{
							if(stringLastComp[u-1].last_name[0] != i)
							{
							
								printf("\n%c\n",i);
							
								break;
							
							}
							
					    
					    }
				  
				  
				   }
					
				   
				
					printf("\n%d. %s\n", (u+1), stringLastComp[u].last_name /*, stringLastComp[k].company_name */);
				
				
				
				}
				
				else if(strlen(stringLastComp[u].last_name) == 0)
				{
					
					for(int i = 'A'; i <= 'Z';i++)
					{
					
						if(stringLastComp[u-1].company_name[0] != i)
							{
							
								printf("\n%c\n",i);
							
								break;
							
							}
				  
				  
				   }
					
					
				
					printf("\n%d. %s\n", (u+1), stringLastComp[u].company_name /*, stringLastComp[k].company_name */);
					
				}	
			else
				{
					
					for(int i = 'A'; i <= 'Z';i++)
					{
					
						if(i ==  stringLastComp[u].last_name[0])
						{
							if(stringLastComp[u-1].last_name[0] != i)
							{
							
								printf("\n%c\n",i);
							
								break;
							
							}
							
					    }
				  
				  
				   }
					
					
					
					
					printf("\n%d. %s\n", (u+1), stringLastComp[u].last_name /*, stringLastComp[k].company_name */);
				}
			
				
				
			
			
			
			
			
   	       
			
		}
		
		 
		 
		 
	}
		
	
	
	
	
	
	
	
	
	
	
		
		
		/****************intalizes everything up there ***************/
		
		

	/**************** edit and display (count starts)***************/
	
	
	
	
	printf("Action: ");
	
	
	
	
	
	
	
	fgets(user, 20, stdin);
	
	if(user[strlen(user)-1] == '\n')
   {

         user[strlen(user)-1] = '\0';

   }
   
   
           
	
    
    
    
    
    
    
while(user[0] != 'X')
	
{
	
	
	if(isalnum(user[0]) == 0)
	{
	
			
	
if(user[0] == '+')
	{
		
		
		
			 if( b < 5 )
			{
				
				b++;
				
				a++;
				
				
				for(int u = a; u <=b; u++)
				{
			if(strlen(stringLastComp[u].company_name) == 0)
				{
				
					
					for(int i = 'A'; i <= 'Z';i++)
					{
					
						if(i ==  stringLastComp[u].last_name[0])
						{
							if(stringLastComp[u-1].last_name[0] != i)
							{
							
								printf("\n%c\n",i);
							
								break;
							
							}
							
					    
					    }
				  
				  
				   }
					
				   
				
					printf("\n%d. %s\n", (u+1), stringLastComp[u].last_name /*, stringLastComp[k].company_name */);
				
				
				
				}
				
				else if(strlen(stringLastComp[u].last_name) == 0)
				{
					
					for(int i = 'A'; i <= 'Z';i++)
					{
					
						if(stringLastComp[u-1].company_name[0] != i)
							{
							
								printf("\n%c\n",i);
							
								break;
							
							}
				  
				  
				   }
					
					
				
					printf("\n%d. %s\n", (u+1), stringLastComp[u].company_name /*, stringLastComp[k].company_name */);
					
				}	
			else
				{
					
					for(int i = 'A'; i <= 'Z';i++)
					{
					
						if(i ==  stringLastComp[u].last_name[0])
						{
							if(stringLastComp[u-1].last_name[0] != i)
							{
							
								printf("\n%c\n",i);
							
								break;
							
							}
							
					    }
				  
				  
				   }
					
					
					
					
					printf("\n%d. %s\n", (u+1), stringLastComp[u].last_name /*, stringLastComp[k].company_name */);
				}
			
				
				
				
				
				}
			
				
				
				
			}
			
			
		
		
		
		
		
		
		
		
		
			
			
			 if(a==0 && b <5 )
			{
				
				b++;
				
				a++;
				
				
				
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
			
			
			
				
			
			
					a++;
				
				
				
				b++;
				
				
				
				
				for(int u = a; u <b; u++)
				{
				if(strlen(stringLastComp[u].company_name) == 0)
				{
				
					
					for(int i = 'A'; i <= 'Z';i++)
					{
					
						if(i ==  stringLastComp[u].last_name[0])
						{
							if(stringLastComp[u-1].last_name[0] != i)
							{
							
								printf("\n%c\n",i);
							
								break;
							
							}
							
					    
					    }
				  
				  
				   }
					
				   
				
					printf("\n%d. %s\n", (u+1), stringLastComp[u].last_name /*, stringLastComp[k].company_name */);
				
				
				
				}
				
				else if(strlen(stringLastComp[u].last_name) == 0)
				{
					
					for(int i = 'A'; i <= 'Z';i++)
					{
					
						if(stringLastComp[u-1].company_name[0] != i)
							{
							
								printf("\n%c\n",i);
							
								break;
							
							}
				  
				  
				   }
					
					
				
					printf("\n%d. %s\n", (u+1), stringLastComp[u].company_name /*, stringLastComp[k].company_name */);
					
				}	
			else
				{
					
					for(int i = 'A'; i <= 'Z';i++)
					{
					
						if(i ==  stringLastComp[u].last_name[0])
						{
							if(stringLastComp[u-1].last_name[0] != i)
							{
							
								printf("\n%c\n",i);
							
								break;
							
							}
							
					    }
				  
				  
				   }
					
					
					
					
					printf("\n%d. %s\n", (u+1), stringLastComp[u].last_name /*, stringLastComp[k].company_name */);
				}
			
				
				
				}
				
			}
			
			
			
			
			
			
			else if( b >= 5 && a>=0)
			{
				
				
				
				
				
				
				a++;
			
				b++;
				
				
				
				
				for(int u = a; u <b; u++)
				{
				if(strlen(stringLastComp[u].company_name) == 0)
				{
				
					
					for(int i = 'A'; i <= 'Z';i++)
					{
					
						if(i ==  stringLastComp[u].last_name[0])
						{
							if(stringLastComp[u-1].last_name[0] != i)
							{
							
								printf("\n%c\n",i);
							
								break;
							
							}
							
					    
					    }
				  
				  
				   }
					
				   
				
					printf("\n%d. %s\n", (u+1), stringLastComp[u].last_name /*, stringLastComp[k].company_name */);
				
				
				
				}
				
				else if(strlen(stringLastComp[u].last_name) == 0)
				{
					
					for(int i = 'A'; i <= 'Z';i++)
					{
					
						if(stringLastComp[u-1].company_name[0] != i)
							{
							
								printf("\n%c\n",i);
							
								break;
							
							}
				  
				  
				   }
					
					
				
					printf("\n%d. %s\n", (u+1), stringLastComp[u].company_name /*, stringLastComp[k].company_name */);
					
				}	
			else
				{
					
					for(int i = 'A'; i <= 'Z';i++)
					{
					
						if(i ==  stringLastComp[u].last_name[0])
						{
							if(stringLastComp[u-1].last_name[0] != i)
							{
							
								printf("\n%c\n",i);
							
								break;
							
							}
							
					    }
				  
				  
				   }
					
					
					
					
					printf("\n%d. %s\n", (u+1), stringLastComp[u].last_name /*, stringLastComp[k].company_name */);
				}
			
				
				
				}
				
				
				
			}
			
		
	
		
		printf("*************\n");
	
		
	}
	
	
	//if(end ==1)
	//{
		//printf
		
	//}
	
	
	
	//printf("b after exited is %d", b);
	
	//printf("a after exited is %d", a);

	
	if(user[0] == '-')
	{
		
		if (stop!=1)
		{
			if(a ==0 )
			{
			
				//printf("STOP DOESNT");
				//a=1
				//a--;
				b--;
			
			}
		
			
			
		}
		
		if(a >0 && b>=5 )
		{
			flagDont =0;
			a--;
			b--;
			
		}
		
		
		
		if(a >0 && flagDont!=0)
		{
			//printf("STOP DOESNT2");
			a--;
			
		}
		
		stop=1;
		
		//else 
		//{
			//printf("STOP DOESNT3");
			//a = 0;
		//}
		
		
		if(flagDont != 0)
		{
			b --;
		
		}
		
		//printf("b in loop %d", b);
	
		//printf("a in loop %d", a);
	
		
		while(b < 0)
		{
			
			b =0;
			
		}
		
		
		for(int u = a; u< b; u++)
		{
			if(strlen(stringLastComp[u].company_name) == 0)
				{
				
					
					for(int i = 'A'; i <= 'Z';i++)
					{
					
						if(i ==  stringLastComp[u].last_name[0])
						{
							if(stringLastComp[u-1].last_name[0] != i)
							{
							
								printf("\n%c\n",i);
							
								break;
							
							}
							
					    
					    }
				  
				  
				   }
					
				   
				
					printf("\n%d. %s\n", (u+1), stringLastComp[u].last_name /*, stringLastComp[k].company_name */);
				
				
				
				}
				
				else if(strlen(stringLastComp[u].last_name) == 0)
				{
					
					for(int i = 'A'; i <= 'Z';i++)
					{
					
						if(stringLastComp[u-1].company_name[0] != i)
							{
							
								printf("\n%c\n",i);
							
								break;
							
							}
				  
				  
				   }
					
					
				
					printf("\n%d. %s\n", (u+1), stringLastComp[u].company_name /*, stringLastComp[k].company_name */);
					
				}	
			else
				{
					
					for(int i = 'A'; i <= 'Z';i++)
					{
					
						if(i ==  stringLastComp[u].last_name[0])
						{
							if(stringLastComp[u-1].last_name[0] != i)
							{
							
								printf("\n%c\n",i);
							
								break;
							
							}
							
					    }
				  
				  
				   }
					
					
					
					
					printf("\n%d. %s\n", (u+1), stringLastComp[u].last_name /*, stringLastComp[k].company_name */);
				}
			
				
				
		}
		
					
		printf("*************\n");
	
	
	
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
						
						
						
						
						
					//	exitflag == 1;
						
						break;
			
				
			}	
			
				//	if(exitflag==1)
				//	{
						
					//	break;
						
					//}
		
		
		
		}
					
					
					
					
				
					
					//printf("K IS %d\n", k);
					
					//printf("k + 1  is %d \n", (k+1));
					
				
					printf("Edit: E\nDelete: D\nReturn: R\n");
					//printf("Action: ");
		
					fgets(userEdit, 20, stdin);
		
					if(userEdit[0] == 'E')
					{//EDIT IF
							
							//printf("INSIDE EDIT IF");
						
						
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
								
								//nextArray[count] = newArray->next;
								
            
								//store nexts in array
            
					
								//printf("phone tehy entered %d\n", posArray[(stringLastComp[k].order -1)].phone_number);
								//printf("newarray phoen number %ld\n", newArray->phone_number );
								
								if(posArray[k].phone_number == newArray->phone_number)
								{
						
									
									
								//	printf("COUNT IS %ld", count); 
								//	printf(" STRUCT READ IN %ld\n%ld\n%ld\n%ld\n%ld\n", newArray->first_name_posn, newArray->last_name_posn, newArray->company_name_posn, newArray->email_posn, newArray->next);
 	
										
										
									//printf("%ld NEXT BEFORE \n",nextArray[count]);
									
									//printf("IN IFFF");
								//	flagEdit = 1;
					 
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
									
									
									int counter = 0;
		   
		   
									//printf("count is %d\n", (count ));
		   
									while(counter < x)
									{
											remain = realloc(remain, sizeof(contact) * (counter +1));
											
											//beforeRemain = realloc(beforeRemain, sizeof(contact) * (counter +1));
			  
			  
			   
											fread (&remain[counter], sizeof( contact), 1, inFile ); 
											
										
			 
			
											counter++;
		  
		  
		  
									}
									
									counter=0;
									
									while(counter < x)
									{
											
											beforeRemain = realloc(beforeRemain, sizeof(contact) * (counter +1));
			  
			  
			   
											fread (&beforeRemain[counter], sizeof( contact), 1, inFile ); 
											
											
			 
			
											counter++;
		  
		  
		  
									}
									
									
									
									
									
									
									
									
									
									
									
											for(m = 0; m < x; m++)
											{
		
		
							
							
												for(q = 0 ; q<x; q++)
												{
							
													//printf("in loop\n");
							
													if(posArray[k].phone_number == beforeRemain[q].phone_number)
		
													{
			
						
														break;
						
						
						
						
													}
						
												}
						
						
						
											}
       
			
								
		
       
       
									/************ starts editing ****************/
       
       
									printf("Phone Number(enter only numbers):");

									fgets(phone,100, stdin);

									if(phone[strlen(phone)-1] == '\n')
									{

										phone[strlen(phone)-1] = '\0';

									}


        
									for(int g =0; g<strlen(phone) + 1; g++) 
									{
      
										if(isalpha(phone[g])!= 0 || phone[0] == '\0' || (strlen(phone)!=7 && strlen(phone)!=10))
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
                
											if(isalpha(phone[g])!= 0 || phone[0] == '\0' || (strlen(phone)!=7 && strlen(phone)!=10))
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

		for(int i = 0; i < strlen(Email)+1;i++)
		{
			 
			 if(Email[i] == '@' ){

				emailflag=1;
				
				break;
}

        }
			
			
			
		while(emailflag!=1)
		{
			
			printf("Sorry, please enter in an email:");

            fgets(Email, 100, stdin);

            if(Email[strlen(Email)-1] == '\n')
            {

                Email[strlen(Email)-1] = '\0';

            }
			
		for(int i = 0; i < strlen(Email)+1;i++)
		{
			 
			 if(Email[i] == '@'){

				emailflag=1;
				
				break;
}

        }
			
		
		
		
		
		
		
		
		
		
		}


							
/*

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
        
        
        
        
        //strncpy(remain[q].newString, String, strlen(String) + 1);
        * 
        * */
        
        remain[q].phone_number = Phone;

   
		//printf("remaine[q] is %s", remain[q].newString);
		 
		
		
		
		printf("Save: S\nReturn: R\nDelete: D\n");
		
		fgets(userEdit, 20, stdin);
		
		if(userEdit[strlen(userEdit)-1] == '\n')
            {

                userEdit[strlen(userEdit)-1] = '\0';

            }
		
		
		
					if(userEdit[0] == 'S')
					{
						
						//fclose(inFile);
							
						//inFile= fopen("myList.db", "wb+");
						
						//fclose(inFile);
						
							
						
						
						for(int z = 0; z < x ; z++)
						{
							
							//fclose(inFile);
							
							//inFile = fopen("myList.db", "wb+");
							

							
							
							//writes the struct to file
						//	fwrite(&remain[z], sizeof(contact), 1, inFile);
						}
			
					
					}
					
				
					 //remain[q].phone_number = Phone;
					 
					
						

					
					
					else if(userEdit[0] == 'D')
					{
						
						//printf("delete!");
						
						
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
							
								//printf("in loop\n");
							
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
						
						//deleteArray[q].newString[0] = '\0';
						
						
						
						
						
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
							
			//printf("DELETED ARRAY, \n%ld\n%ld\n%ld\n%ld\n%ld\n", newArray->first_name_posn, newArray->last_name_posn, 
			//newArray->company_name_posn, newArray->email_posn, newArray->next  );
			
							
							
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
		    
								//printf("Curr is %ld\n", curr);
		
								not = 1;
		
		
		
		
		
					}
		
	
		if(not!=1)
		{
	
	
			break;
	
	
		}

	
}//WHILE LOOP SEARCHING THROUGN 
	
	
	
	
	
}//BIG IF EDIT 


					else if( userEdit[0] == 'D')
					{
						
						
						
						//printf("delete!");
						
						
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
							
								//printf("in loop\n");
							
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
						
					//	deleteArray[q].newString[0] = '\0';
						
						
						
						
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
							
			//printf("DELETED ARRAY, \n%ld\n%ld\n%ld\n%ld\n%ld\n", newArray->first_name_posn, newArray->last_name_posn, 
			//newArray->company_name_posn, newArray->email_posn, newArray->next  );
			
							
							
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
			
			
			/*File pointer*/
		FILE *inFile = NULL;

		/*Open file*/
		inFile = fopen("myContactsList.db", "ab+");


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

			
			
			
			
			
			
			if(user[0] == 'A')
			{

			//fclose(inFile);
			
			//inFile = fopen("myContactsList.db", "ab+");
			
    	
			//printf("Next is : %ld\n", data->next);
			
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
                data->last_name_posn = sizeof(contact) + data->next;
      
                data->first_name_posn =  0;

            }



            else if(Fname[0] != '\0')
            {

                //struct size plus the next value is stored in first name position
                data->first_name_posn = sizeof(contact) + data->next;

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
                
               // LnameExi = 1;
                
                //user enters in nothing for first name
                if(Fname[0]== '\0')
                {

                    //struct size plus next is stored in company name posn
                    data->company_name_posn = sizeof(contact) + data->next;
                
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
              data->last_name_posn =   sizeof(contact) + data->next;
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
				 
				 
				 printf("Sorry Please enter in a company name");
				 
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
       
			 data->company_name_posn = sizeof(contact) + data->next;
       
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
      
           if(isalpha(phone[k])!= 0 || phone[0] == '\0' || (strlen(phone)!=7 && strlen(phone)!=10) )
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
                
                if(isalpha(phone[k])!= 0 || phone[0] == '\0' || (strlen(phone)!=7 && strlen(phone)!=10) )
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

		for(int i = 0; i < strlen(Email)+1;i++)
		{
			 
			 if(Email[i] == '@' ){

				emailflag=1;
				
				break;
}

        }
			
			
			
		while(emailflag!=1)
		{
			
			printf("Sorry, please enter in an email:");

            fgets(Email, 100, stdin);

            if(Email[strlen(Email)-1] == '\n')
            {

                Email[strlen(Email)-1] = '\0';

            }
			
		for(int i = 0; i < strlen(Email)+1;i++)
		{
			 
			 if(Email[i] == '@'){

				emailflag=1;
				
				break;
}

        }
			
		
		
		
		
		
		
		
		
		
		}

		
		
		
		
		//strncpy(data->newString, Email, strlen(Email) +1 );
		
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
   
		//printf("%ld\n%ld\n%ld\n%ld\n%ld\n", data->first_name_posn, data->last_name_posn, data->company_name_posn, data->email_posn, data->next);
 
 
        //}

		printf("Save: S\n");
		
		printf("Return: R\n");
		
		//printf("Action: ");
	
		fgets(anwser, 100, stdin);
		
		
		//writes info to end of file (later sort it alpha order) 
		if(anwser[0] == 'S')
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
    
   		
			//	printf("%s\n", Fname);
		
		
		
		
		}
	
	//not nessaray but safe!
		else if(anwser[0] == 'R')
		{
		
		
				//data[0].first_name_posn =  0;

			//	data[0].last_name_posn =  0;

			//	data[0].company_name_posn =  0;

			//	data[0].email_posn =  0;
		
		
		
				for(o = 0; o < 100; o++)
				{
		
				Fname[o]= '\0';
		
				Lname[o] = '\0';
		
				comp[o] = '\0';
		
				Email[o] ='\0';
				
			   }
		
		
	
	
		}
		
	
	
	fclose(inFile);
	
	}
	
	

		/*Open file*/
		inFile = fopen("myContactsList.db", "rb+");


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

	
	}//END OF ADD FUNCTION

			
			
	
	
	
	
	
	
	
	
	
	
	printf("\n(If you want to see your updated changes (Add and Delete), please exit the program and run again)\n\n");
	printf("**************\n");
	
	/************************************************************/
	
	
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
	
	//counterbeg = 0;
	
	m = 0;
	





}//BIG WHILE LOOP


}//end of big big else


fclose(inFile);


return 0;

}
