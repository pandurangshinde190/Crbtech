#include<stdio.h>
int main(void)
{
    int a, b, c;
    // int Max;
    printf("Enter the Three Integer :");
    scanf("%d%d%d",&a, &b, &c);

    //Assume :- All 3 (a, b and c)

   
    if(a > b)
    {
        //a is greter than b. Just compare a and c
        if(a > c)
        {
            printf("\na is gretest");
        }
        else
        {
            printf("\nc is gretest");
        }
    }
    else
    {
        //b is greter than a . Just compare b and c
        if(b > c)
        {
            printf("\nb is gretest");
        }
        else
        {
            printf("\nc is gretest");
        }
    }

    return 0;
}