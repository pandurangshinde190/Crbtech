#include<stdio.h>
int main(void)
{
    int no,temp;
    int sum,rem;

    printf("\nEnter the no:");
    scanf("%d",&no);

    temp =no;
    sum =0;
    while (no!=0)
    {
        rem = no%10;
        sum = sum +(rem*rem*rem);
        no /= 10;
    }
    
    if(temp == sum)
    {
        printf("\nYes!!! The sum of cube of individual digits is equal to the number");
    }
    else
    {
        printf("\nNo!!! The sum of cube of individual digits is not equal to the number");
    }

    return 0;
}