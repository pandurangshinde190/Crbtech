#include<stdio.h>
int main(void)
{
    int i;
    
   /* 
    for(i =1; i <= 10;++i)
    {
        printf("\n%d",i);
    }
   */ 

   /*
    i=1;
   for(++i; i <= 10;i=1)
    {
        printf("\n%d",i);
    }
    */
    //2
    //1

    /*
    i=1;
    for(++i; i = 1;i <= 10)
    {
        printf("\n%d",i);
    }
    */
    //1
    //1
    //........infinite



     /*
    for(i <= 10; i = 1;++i)
    {
        printf("\n%d",i);
    }
    
    */
    //1
    //1
    //1
    //.................Infinite

     i=1;
      for(i <= 10; ++i;i = 1)
    {
        printf("\n%d",i);
    }

     //22
     //2
    //2
    //........infinity

    return 0;
}