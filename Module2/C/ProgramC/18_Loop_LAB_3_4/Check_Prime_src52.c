#include<stdio.h>
int main(void)
{
    int no;
    int i;
    int j;
    int cntr;

    cntr =0; // --> It will represent the total no. of prime numbers found
    j =2;
    while( cntr <=25)//until 2th prome number is found
    {
        no =j;
         //This code will simply display value of "no" in case it is prime number 
        if(no > 1)
        {
                for(i =2; i <=no/2; ++i)
                {
                    if(no%i == 0)
                    {
                        break;
                    }
                }
                if(i == (no/2)+1)
                {
                    printf("\n\n%d",no);
                    cntr++;
                }
        }
            ++j;
        }   
    return 0;
}