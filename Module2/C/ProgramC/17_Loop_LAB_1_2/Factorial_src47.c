#include<stdio.h>
int main(void)
{
    int no;
    int i;
    int fact;

    printf("\nEnter the no:");
    scanf("%d",&no);

    /*
    fact=1;
    for(i =1; i<=no; ++i)
    {
        // The give you values of i as :- 1, 2, 3, .......(n-1), n
        //fact = fact *i;
        fact *=i;
    }
    printf("Factorial of %d is %d",no,fact);
    */

   /*
   fact=1;
    for(i =no; i>=1; --i)       
     fact *=i;

     printf("Factorial of %d is %d",no,fact);
    */

    /*
    fact=1;
    for(i =no; i>=1; fact *=i--);

    printf("Factorial of %d is %d",no,fact);
     */


   /* 
    for(i =1; fact=1, i<=no; ++i)
    {
        fact *=i;
    }     
    */

   /*
    i=1;
    fact =1;
    while(i<=no)
    {
        fact*=i;
        ++i;
    }
    */  

   /*
    i=1;
    fact =1;
    while(i<=no)
        fact*=i++;
    */    
   
    printf("Factorial of %d is %d",no,fact);
    return 0;
}