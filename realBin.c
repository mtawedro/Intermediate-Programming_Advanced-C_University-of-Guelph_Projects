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


//This function opens the file required and if file coud not be opened then user is prompt to enter file input again and returns a file pointer


/*

FILE *OpenFile(char File[])

{




    // File pointer




    FILE *inFile = NULL;




    // Open file




    inFile = fopen(File, "ab+");







    // Error Trap, if file could not be found or user enters in wrong file name




    while(inFile == NULL) {




        printf("Could not open file myfile.txt. Please enter in another file\n");







        fgets(File, 200, stdin);




        //gets rid of hard return

   if(File[strlen(File)-1] == '\n')




        {







             File[strlen(File)-1] = '\0';




        }







        inFile = fopen(File, "ab+");




    }













    return inFile;













}




FILE *OpenNewFile(char File[])

{




    // File pointer




    FILE *inFile = NULL;




    // Open file




    inFile = fopen(File, "wb+");







    // Error Trap, if file could not be found or user enters in wrong file name




    while(inFile == NULL) {




        printf("Could not open file myfile.txt. Please enter in another file\n");







        fgets(File, 200, stdin);




        //gets rid of hard return

   if(File[strlen(File)-1] == '\n')




        {







             File[strlen(File)-1] = '\0';




        }







        inFile = fopen(File, "wb+");




    }













    return inFile;







}



*/

int main(void) {

long var = 0;

contact data[1];

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


char ret[100];

unsigned long retPhone =0;

char String[100] = {' '};

contact newArray[1];

int i = 0;

int w = 0;

int totalNum = 0;

int location = 0;

int locationName = 0;

int locationLname = 0;

int locationcompName = 0;

int locationemailName = 0;

//data[0]. next = 0;

contact structu[1];

   long Phone = 0;

   int k;

   int flag;

//FILE* inFile = OpenFile(argv[1]);

//write in array .

//if(feof(inFile))

//{


//calls OpenFile function to acess and open file

//FILE* inFile = OpenFile(argv[1]);




//fseek(inFile, 0, SEEK_END);




//fread(&structu[0], sizeof(contact),1, inFile);




//data[0].next = structu[0].next;




//printf("next is %ld:", data[0].next );




//}




//writes new file

//else

//{



 //calls OpenFile function to acess and open file

 //FILE* inFile = OpenNewFile(argv[1]);




 data[0]. next = 0;



 //printf("second if next is %ld:", data[0].next );



//}


do

{

 printf("NET: %ld\n", data[0].next );
 printf("Do you wish to enter a new contact (Yes or No)?:");

 fgets(anwser, 100, stdin);

 if(anwser[strlen(anwser)-1] == '\n')
     {

         anwser[strlen(anwser)-1] = '\0';

     }

 /*
    while((anwser[0]!= 'N' && anwser[1]!= 'o' && anwser[2]!= '\0') ||
       (anwser[0]!= 'Y' && anwser[1]!= 'e' && anwser[2]!= 'p' && anwser[3]!= '\0' ) )
 {
     printf("Sorry, Please enter in either (Yes or No):\n");

     fgets(anwser, 100, stdin);

     if(anwser[strlen(anwser)-1] == '\n')
     {

         anwser[strlen(anwser)-1] = '\0';

     }



 }

*/

//change to yes
 if((strcmp(anwser, "Yes")) == 0)

 {

  printf("First Name:\n");

  fgets(Fname, 100, stdin);

 if(Fname[strlen(Fname)-1] == '\n')
{

          Fname[strlen(Fname)-1] = '\0';

     }

     if(Fname[0] == '\0' )
     {

        //printf("inide if for blabk name");
         data[0].last_name_posn = 48 + data[0].next;
       // printf(" tored i %ld \n ",  data[0].last_name_posn);

         data[0].first_name_posn =  0;

     }



     else if(Fname[0] != '\0')
     {
         //printf("FName i not 0");

         data[0].first_name_posn = 48 + data[0].next;

     }
    //var  = sizeof(contact);

   //printf("size of struct is %ld \n",var);

 // else
 // {
       // data[0].first_name_posn = 48 + data[0].next;

 // }

 // printf("first name pos is %ld \n",data[0].first_name_posn);

 // fwrite(Fname, sizeof(Fname), 1, inFile);

  printf("Last Name:\n");

  fgets(Lname, 100, stdin);

  if(Lname[strlen(Lname)-1] == '\n')

       {

       Lname[strlen(Lname)-1] = '\0';


        }

        if(Lname[0] == '\0')
        {
           if(Fname[0]== '\0')
           {

               data[0].company_name_posn = 48 + data[0].next;
                data[0].last_name_posn =  0;

                //printf("inide if %ld \n ", data[0].company_name_posn );

           }

           else
           {

               data[0].company_name_posn =data[0].first_name_posn + (strlen(Fname) +1 );
                data[0].last_name_posn =  0;

           }




        }


        else if(Lname[0] != '\0' && Fname[0] == '\0' )
        {

            data[0].last_name_posn =   48 + data[0].next;
        }


        else if(Lname[0] != '\0' && Fname[0] != '\0' )
        {

           // printf("Lname i not 0");
            data[0].last_name_posn =   data[0].first_name_posn + (strlen(Fname) +1 );
        }



  // fwrite(Lname, sizeof(Lname),1, inFile);

 printf("Company Name:\n");

    fgets(comp, 100, stdin);

   if(comp[strlen(comp)-1] == '\n')

   {

       comp[strlen(comp)-1] = '\0';


  }

  if(comp[0] == '\0')
  {

     if(Lname[0] == '\0' )
     {

         data[0].email_posn = data[0].first_name_posn + (strlen(Fname) + 1);
        data[0].company_name_posn = 0;

     }

    else if(Fname[0] == '\0' )
    {

        data[0].email_posn = data[0].last_name_posn + (strlen(Lname) + 1);
        data[0].company_name_posn = 0;


    }

    else if(Fname[0] == '\0' && Lname[0] == '\0' )
    {

        data[0].email_posn = 48 + data[0].next;
        data[0].company_name_posn = 0;


    }

    else
    {

        data[0].email_posn = data[0].last_name_posn + (strlen(Lname) + 1);
        data[0].company_name_posn = 0;

    }



  }



  else if(comp[0] != '\0' && Lname[0] == '\0' && Fname[0] != '\0' )
  {

       // printf("replace comp");
      data[0].company_name_posn = data[0].first_name_posn + (strlen(Fname) + 1);

  }

    else if(comp[0] != '\0' && Lname[0] != '\0' )
  {
     //printf("comp i not 0");

      data[0].company_name_posn = data[0].last_name_posn + (strlen(Lname) + 1);

  }



    printf("Phone Number(enter only numbers):\n");

    fgets(phone,100, stdin);

    if(phone[strlen(phone)-1] == '\n')
     {

         phone[strlen(phone)-1] = '\0';

     }


    for(k =0; k<strlen(phone) + 1; k++)
    {
      if(isalpha(phone[k])!= 0 || phone[0] == '\0')
      {

          flag = 1;
          break;

      }


     }

     while(flag == 1 )
     {


         printf("Enter Phone number (only Numbers):\n ");

          fgets(phone,100, stdin);


          if(phone[strlen(phone)-1] == '\n')
          {

            phone[strlen(phone)-1] = '\0';

          }

             for(k =0; k<strlen(phone) + 1; k++)
            {
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

 // printf("Phone num: %ld \n ", Phone);
  //scanf("%lu", &phone );

  //getchar();

  data[0].phone_number = Phone;


//else
//{
 //data[0].company_name_posn =   data[0]. last_name_posn + (strlen(Lname) +1 );
//}

 printf("Email:\n");

    fgets(Email, 100, stdin);


    if(Email[strlen(Email)-1] == '\n')
    {

          Email[strlen(Email)-1] = '\0';


    }

    //error trap
    while(Email[0] == '\0' )
    {

        printf("Sorry, Please enter in an Email:\n ");

        fgets(Email, 100, stdin);


        if(Email[strlen(Email)-1] == '\n')
        {

          Email[strlen(Email)-1] = '\0';


        }


    }



if(comp[0]!= '\0')
{
    data[0]. email_posn  = data[0].company_name_posn + (strlen(comp) +1 );
}

else if(comp[0]== '\0' && Lname[0] != '\0' )
{
    data[0]. email_posn  = data[0].last_name_posn + (strlen(Lname) +1 );

}

else if(comp[0] == '\0' && Lname[0] == '\0' && Fname[0] == '\0' )
{
    data[0].email_posn = 48 + data[0].next;


}





   data[0]. next = data[0]. email_posn  + (strlen(Email) +1 );


    //fwrite(&data[0], sizeof(data), 1, inFile);

   // fwrite(Fname, sizeof(Fname), 1, inFile);

   // fwrite(Lname, sizeof(Lname),1, inFile);

   // fwrite(comp, sizeof(comp),1, inFile);

   // fwrite(Email, sizeof(Email),1, inFile);


 printf("%ld\n,%ld\n,%ld\n,%ld\n,%ld\n:", data[0].first_name_posn, data[0]. last_name_posn , data[0].company_name_posn, data[0]. email_posn ,  data[0].next );


//
 }


}while(!((strcmp(anwser, "No")) == 0));


/*

do







{




 printf("Do you wish to retreive a contact (y or n)? ");




 fgets(ret, 100, stdin);




 if(ret[0] == 'y')







 {







  printf("Phone Num:\n");




  scanf("%lu", &retPhone);



  //fgets(retPhone, 100, stdin);




  fseek(inFile,  0 , SEEK_SET);







  while(!feof(inFile)(fread (&newArray[0], sizeof(contact), 1, inFile ))!= 0) // put fread in here

  {




printf("In whule oop" );

  //dont forget to malloc all the strings, will kinda change thi process, refer to notes.




   fread (&newArray[0], sizeof(contact), 1, inFile );



 if(newArray[0].phone_number == retPhone )

 {



      fseek(inFile,  newArray[0].first_name_posn, SEEK_SET);



   fread (&String, sizeof(String), 1, inFile );



    printf("First Name: %s\n", String );





   fseek(inFile, newArray[0].last_name_posn, SEEK_SET);



   fread (&String, sizeof(String), 1, inFile );



    printf("Last Name: %s\n", String );







   fseek(inFile, newArray[0].company_name_posn, SEEK_SET);

   fread (&String, sizeof(String), 1, inFile );



    printf("Company  Name: %s\n", String );





    printf("Phone Number: %lu\n", newArray[0].phone_number);





     fseek(inFile, newArray[0].email_posn, SEEK_SET);



     fread (&String, sizeof(String), 1, inFile );



    printf("Email: %s\n", String );



 break;





 }







else

{



 printf("Contact cannot be found");

 break;







}





   fseek(inFile,  newArray[0]. next, SEEK_SET);




  }










}







}while(ret[0] != 'n');







fclose(inFile);



*/
return 0 ;




}

