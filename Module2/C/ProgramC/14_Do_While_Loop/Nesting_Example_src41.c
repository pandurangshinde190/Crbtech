#include<stdio.h>
int main(void)
{
    int i,j;


    /*
    for(i=1; i<=3; ++i)
    {
        printf("\n%d",i);

        for(j=1; j<=3; ++j)
        {
            printf("\nLove You");
        }
    }
    
    */
   /*
   for(i=1; i<=3; ++i)
    {
        printf("\n%d",i);

        for(j=1; j<=3; ++j)
        {
            printf("\nLove You");
        }
        printf("\n%d",i);
    }
   */

     for(i=1; i<=3; ++i)
    {
        for(j=1; j<=3; ++j)
        {
            printf("\n%d  %d",i ,j);
        }
        printf("\n%d",j);
    }
/*
    for(i=1; i<=3; ++i)
    {
        for(j=1; j<=3; ++j)
        {
            printf("\n%d  %d",i ,j);
        }
        printf("\n%d",j);
    }
*/    
    return 0;
}