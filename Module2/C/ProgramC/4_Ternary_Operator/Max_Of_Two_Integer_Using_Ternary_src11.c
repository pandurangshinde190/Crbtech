#include<stdio.h>
int main(void)
{
    int a, b;
    int Max;
    printf("\nEnter First Integer : ");
    scanf("%d",&a);
    printf("\nEnter Second Integer : ");
    scanf("%d",&b);

    //Can you hold/catch the max value considering both the integers
    //Assumption is - both values are un-equal

    // ..................................................

    // Max = (a>b)  ? (a) : (b);

    printf("The Maximum Value is  : %d",(a>b)  ? (a) : (b));
    

    return 0;
}