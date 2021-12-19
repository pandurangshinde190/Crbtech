#include<stdio.h>

int checkLeapYear(int year);

int main(void)
{
    int year;

    printf("\nEnter the year : ");
    scanf("%d",&year);

    //I won't to check the Year is a Leap Year or not
    // But, this I wanna do using a function

    // if(checkLeapYear(year))
    if(((year%4==0)&&(year%100!=0)) ||(year%400==0))
    {
        printf("\nYear is a Leap Year ");
    }
    else
    {
        printf("\nYear is not a Leap Year");
    }
    return 0;
}

int checkLeapYear(int year)
{
//    return ((year%4==0)&&(year%100!=0)) ||(year%400==0);
   return ((year%4==0)&&(year%100!=0)) ||(year%400==0);
}