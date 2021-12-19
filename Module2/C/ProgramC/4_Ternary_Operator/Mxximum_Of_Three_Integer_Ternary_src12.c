#include<stdio.h>
int main(void)
{
    int a, b,c;
    int Max;

    printf("\nEnter Three Integer : ");
    scanf("%d%d%d",&a, &b, &c);

    //Can you hold/catch the max value considering all threee integers
    //Assumption is - both values are un-equal

    // ..................................................

    //  Max = (a>b)  ? ((a>c)?(a):(c)) : ((b>c)?(b):(c));

     printf("\nMaximum value is : %d  ",(a>b)  ? ((a>c)?(a):(c)) : ((b>c)?(b):(c)));

 
    

    return 0;
}