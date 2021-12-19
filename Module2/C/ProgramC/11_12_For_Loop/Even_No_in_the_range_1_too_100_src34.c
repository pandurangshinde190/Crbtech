#include<stdio.h>
//Display even no. on the range 1 to 100
int main(void)
{
    int i;
    /*
    for(i=1; i<=100;++i)
    {
        //I want to display the value of 'i' only if it is even
        if(i % 2 == 0)
        {
            printf("\n%d",i);
        }
    }
    */

   /*
    for(i=1; i<=100;++i)
    {
        //I want to display the value of 'i' only if it is even
        if(i % 2 != 0)
            printf("\n%d",i);
    }
    */

   //Q/A For this below for loop my question is - Can I skip the {}
   //Yes!! You can
   //"if"  itself is considered as a single statement
   /*
   for(i=1; i<=100;++i)
        if(i % 2 != 0)
            printf("\n%d",i);
    */


   //Even No. 1 to 100
   
   for(i=2; i<=100; i=i+2)   //i+=2
   {
       printf(" %d",i);
   }

   /*
    //Odd No. 1 to 100
   for(i=1; i<=100; i=i+2)   //i+=2
   {
       printf(" %d",i);
   }
   */
    
    return 0;
}