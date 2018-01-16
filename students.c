/*********************************************
 * Program: enterStudents.c
 * Name: Martina Tawedrous
 * Date: Feb 14 2017
 * Student Num: 0977473
 * Email: mtawedro@mail.uoguelph.ca
 * ******************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {
 
    char FirstName [100] = {' '};
    char LastName [100] = {' '};
    char ID [700] = {' '};
    char Email [100] = {' '};
    int add = 0;
    int i = 0;
    int j = 0;
    int x = 0;
    char temp [100] = {' '};
    char nametemp [100] = {' '};
    char lasttemp [100] = {' '};
    char emailtemp [100] = {' '};
    int holdValue;
  
     struct student {
        
     int      recordCount;
     char    *firstName;
     char    *lastName;
     char    *id;
     char    *email;
     
     };
 
    struct student *studentInfo;

    studentInfo=  malloc(sizeof(struct student) * 1);

    studentInfo ->  recordCount = 0;

    printf("First Name:\n");
    
    fgets(FirstName, 100, stdin);
    
    if(FirstName[strlen(FirstName)-1] == '\n')
    {
        FirstName[strlen( FirstName)-1] = '\0';
    }
 
    studentInfo[x]. firstName = malloc(sizeof(char) * (strlen(FirstName) +1));
    strncpy((studentInfo[x].firstName), FirstName, (strlen(FirstName) +1));

    x =1;

    while((studentInfo[x-1]. firstName[0]) !=  '.')
    {
 
     printf("Last Name:\n");
     
     fgets(LastName, 100, stdin);
     
     if(LastName[strlen(LastName)-1] == '\n')
     {
        LastName[strlen( LastName)-1] = '\0';
     }
 
     studentInfo[x-1]. lastName = malloc(sizeof(char) * (strlen(LastName) +1));
     strncpy((studentInfo[x-1].lastName), LastName, (strlen(LastName) +1));

     printf("ID#:\n");
     
     fgets(ID, 100, stdin);
 
     if(ID[strlen(ID)-1] == '\n')
     {
        ID[strlen( ID)-1] = '\0';
     }
    
    
    
       for( i = 0 ; i<9; i++)
       {
        
			holdValue= isdigit(ID[i]);
  
			if(holdValue == 0)
            {
				
            holdValue = 0;
            break;
            
            }
 
       }    


      
      
      
      while(holdValue == 0)
      {
        
        printf("Incorrect, please enter in a 9 digit student number with no letters!!:\n");
        fgets(ID, 100, stdin);
        
        if(ID[strlen(ID)-1] == '\n')
		{
        ID[strlen( ID)-1] = '\0';
		}
       
       while(strlen(ID) !=9)

        {     

            printf("Incorrect, please enter in a 9 digit student number:\n");

            fgets(ID, 100, stdin);
            
            if(ID[strlen(ID)-1] == '\n')
		    {
            ID[strlen( ID)-1] = '\0';
		    }
       
            
        
        
        }               
             
            if(strlen(ID) == 9)
             {
             for( i = 0 ; i<9; i++)
             {
				
        
				holdValue= isdigit(ID[i]);
  
				if(holdValue == 0)
                {
              
                   holdValue = 0;
                   break;
  
        
				}
 
				
 
 
           }
				
      }
  
  
  
  
  
  }
      
      
      
      
       if(strlen(ID) !=9 && holdValue != 0)

        {     

            holdValue = 0;
            
            while(holdValue == 0)
            {
            
              printf("Incorrect, please enter in a 9 digit student number:\n");
			  fgets(ID, 100, stdin);
			  
			  if(ID[strlen(ID)-1] == '\n')
			  {
				ID[strlen( ID)-1] = '\0';
				
			  }
       
       
			  while(strlen(ID) !=9)

			  {     

					printf("Incorrect, please enter in a 9 digit student number:\n");

					fgets(ID, 100, stdin);
					if(ID[strlen(ID)-1] == '\n')
					{
						ID[strlen( ID)-1] = '\0';
					}
       
            
			  }               
                
              if(strlen(ID) == 9)
              {
                
                for( i = 0 ; i<9; i++)
                {
             
					holdValue= isdigit(ID[i]);
  
					if(holdValue == 0)
					{
              
                  
                     holdValue = 0;
                     break;
  
        
					}
 
					
					
				
               }

					
					
					
					
           
            }
       
        } 
        
	} 
     
     
     
    studentInfo[x-1]. id = malloc(sizeof(char) * (strlen(ID) +1));
    strncpy((studentInfo[x-1].id), ID, (strlen(ID) +1));
 
    printf("Email#:\n");
    
    fgets(Email, 100, stdin);
    
    if(Email[strlen(Email)-1] == '\n')
    {
            ID[strlen( Email)-1] = '\0';
    }
 
 
 
    studentInfo[x-1]. email = malloc(sizeof(char) * (strlen(Email) +1));
    strncpy((studentInfo[x-1].email), Email, (strlen(Email) +1));
 
    studentInfo[x-1] . recordCount =  studentInfo[x-1]. recordCount +1;

    x++;
 
    studentInfo= realloc(studentInfo, sizeof(struct student) * (add = add+2) );
 
    printf("First Name:\n");
    
    fgets(FirstName, 100, stdin);
    
    if(FirstName[strlen(FirstName)-1] == '\n')
    {
        FirstName[strlen( FirstName)-1] = '\0';
    }
 
    studentInfo[x-1]. firstName = malloc(sizeof(char) * (strlen(FirstName) +1));
    strncpy((studentInfo[x-1].firstName), FirstName, (strlen(FirstName) +1));

}
 

  
  
  for (i = 0; i < (x-1) ; i++) {
      
      for ( j = 0; j < (x-1)  - 1; j++) {
         
         if (strcmp(studentInfo[j]. id, studentInfo[j + 1]. id) > 0) {
            
                strcpy(temp, studentInfo[j]. id);
                strcpy(studentInfo[j]. id, studentInfo[j+ 1]. id);
                strcpy(studentInfo[j + 1]. id, temp);
         
             
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


 
    for (i = 0; i < (x-1) ; i++){
        printf("%s,", studentInfo[i]. id);
        printf("%s,", studentInfo[i]. firstName);
        printf("%s,", studentInfo[i]. lastName);
        printf("%s", studentInfo[i]. email);
     
 }
 
 /*

    for ( i=0; i<add; i++ ) {    
	      
	      free (studentInfo[i].id ); 
	      free (studentInfo[i].firstName ); 
	      free (studentInfo[i].lastName ); 
	      free (studentInfo[i].email );           
    } 
	      
	
    free ( studentInfo );
	*/

 return 0;


}
