#include<stdio.h>
int main(void)
{
    int no;
    int i;

    printf("\nEnter the value for no : ");
    scanf("%d",&no);

    /*
    for(i =2; i <=no; ++i)
    {
        if(no%i == 0)
        {
            printf(" \nNumber is not prime ");
        }
        else
        {
            printf("\nNumber is prime");
        }
    }
    */

// This code will display apropriate message on the console if the number is not prime

    /*
    for(i =2; i < no; ++i)
    {
        if(no%i == 0)
        {
            printf(" \nNumber is not prime ");
            break;
        }
    }
    */
   /*

//    no =7
   for(i =2; i < no; ++i)
    {
        if(no%i == 0)
        {
            printf(" \nNumber is not prime ");
            break;
        }
    }
    if(i == no)
    {
        printf("\nYes!!! The number is prome");
    }
*/

   
    /*
    for(i =2; i <=no/2; ++i)
    {
        if(no%i == 0)
        {
            printf(" \nNumber is not prime ");
            break;
        }
    }
    if(i == (no/2)+1)
    {
        printf("\nYes!!! The number is prome");
    }

*/

     if(no > 1)
    {
            for(i =2; i <=no/2; ++i)
            {
                if(no%i == 0)
                {
                    printf(" \nNumber is not prime ");
                    break;
                }
            }
            if(i == (no/2)+1)
            {
                printf("\nYes!!! The number is prome");
            }
    }
    else
    {
         printf(" \nNumber is not prime ");

    }



    
    return 0;
}