#include<stdio.h>
int main(void)
{
    int no,temp;
    int rem;
    int sum;

    printf("\nEnter the No :");
    scanf("%d",&no);

    /*
    temp =no;
    sum = 0;
    while(no!=0)
    {
        rem = no % 10;
        sum = sum + rem;
        no = no /10;
    }
    */

   /*
    temp =no;
    sum = 0;
    while(no)
    {
        rem = no % 10;
        sum = sum + (no%10);
        no /=10;
    }
    */

    temp =no;
    sum = 0;
    while(no)
    {
        rem = no % 10;
        sum +=(no%10);
        no /=10;
    }
    // printf("Value of no is :%d",no);
    printf("\nThe sum of digits of the entered numberr %d is : %d ",temp,sum);
    return 0;
}