#include<stdio.h>
int main(void)
{
    int year;

    printf("Enter the Leap Year : ");
    scanf("%d",&year);

    /*
    if(((year%4==0) && (year%100!=0)) || (year%400==0))
    {
        printf("\nIt's Leap Year");
    }
    else
    {
        printf("\nIt's Not a Leap Year");
    }
    */

   // Check whether a year is a leap year or not and display a relevant msg
   //Just with the help of a single statement

    // (((year%4==0) && (year%100!=0)) || (year%400==0)) ? (printf("It's Leap Year")) : (printf("It's Not a leap year"));


     if(((year%4==0) && (year%100!=0)))
    {
        printf("\nIt's Leap Year");
    }
    else
    {
        if((year%400==0))
        {
            printf("\nIt's Leap Year");
        }
        else
        {
            printf("\nIt's Not a Leap Year");
        }
    }
    return 0;
}