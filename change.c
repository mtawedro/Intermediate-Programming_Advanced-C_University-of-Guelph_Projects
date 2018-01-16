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

        
        long first_name_posn;

        long last_name_posn;

        long company_name_posn;

        long email_posn;

        long  next;

    };
    
    typedef struct contact contact;

int main(void)

{




contact posArray[2];

int diff;

posArray[0]. first_name_posn = 24;

posArray[0].  last_name_posn = 32;

posArray[0]. company_name_posn= 36;

posArray[0]. email_posn=41;

posArray[0]. next= 49;



posArray[1]. first_name_posn = 69;

posArray[1].  last_name_posn = 76;

posArray[1]. company_name_posn= 82;

posArray[1]. email_posn=91;

posArray[1]. next= 98;


//greater then or less then ?
diff= 4; 


	
posArray[1]. first_name_posn  = posArray[1]. first_name_posn + diff ;

posArray[1].  last_name_posn = posArray[1].  last_name_posn + diff ;

posArray[1]. company_name_posn = posArray[1]. company_name_posn + diff ;

posArray[1]. email_posn = posArray[1]. email_posn + diff;

posArray[1]. next  = posArray[1]. next + diff;
	
	
	printf("%ld\n%ld\n%ld\n%ld\n%ld\n", posArray[1]. first_name_posn,  posArray[1].  last_name_posn , posArray[1]. company_name_posn, posArray[1]. email_posn, posArray[1]. next);







return 0 ;
}
