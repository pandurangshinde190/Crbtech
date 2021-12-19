#include<stdio.h>
int main(void)
{
    int no;
    int i;
    int sum;

    printf("\nEnter the value of No  :");
    scanf("%d",&no);

    /*
    for(i =1; i<=no; ++i)
    {
         if(no%i ==0)
        {
           printf("\n%d",i);
        }
    }
    */

   /*
   for(i =1; i<no; ++i)
    {
         if(no%i ==0)
        {
           printf("\n%d",i);
        }
    }
    */


   sum =0;

   /*
    for(i =1; i<no; ++i)
    {
         if(no%i ==0)
        {
           sum =sum + i;

        }
    }
    */
    
     for(i =1; i<=no/2; ++i)
    {
         if(no%i ==0)
        {
           sum +=i;

        }
    }
    if(sum == no)
    {
        printf("\nNumber is perfect");
    }
    else
    {
        printf("\nNumber is not perfect");
    }
}