#include<stdio.h>
int main(void)
{
    int i,j;
    int a =10,b= 20, c =30;
   
   //int  k=55; This statement will be excuted for 10 times.
   //Further ahead it's purely an ex. of "variable defination"
   //So, actually during each iteration a frsh-new-copy of 'k' will be created
   //everytime.
   /*
    for(i = 1; i <= 10; ++i)
    {
        int k =55;
        printf("\n%d",k);
        // printf("\n%d",i);
    }
   */
//    printf("\n\nAccesing i outside of the block. Value i is %d",i);
   //printf("\n\nAccesing k outside of the block. Value k is %d",k);
    //CTE :- Undefined identifier 'k'
    //'k' is alive only within the block in which it is defined


  /* 
   i=1;
   while (i <= 10)
   {
       int l =99;
        
         printf("\n%d",l);
         ++i;
   }

   */

//    printf("\n%d",l);


   /* 
    i=1;
    do
    {
        int a =99;
        printf("\n%d    %d",i,  a);
        ++i;
    } while (i<=10);
    // printf("\nOut of the do-while. Value of a is : %d",a);
   */

  /*
    if(a == 10)
    {
        int m =98;
        printf("\nValue of m is : %d",m);
    }
        printf("\nValue of m is : %d",m);
    */

/*
   if(a != 10)
   {

   }
   else
   {
       int y =77;
       printf("\nVAlue of y in else block is %d",y);
   }
    //    printf("\nVAlue of y in else block is %d",y);
*/

    /*
    //This is just a arbitary block of code
    {
        int h = 50;
        printf("%d",h);
    }
        printf("%d",h);

    */
   /*
   if(a==10)
   {
        printf("\nLove You");
        printf("\nLove You");
        break;
        printf("\nLove You");
        printf("\nLove You");
   }
   */
  
/*    
if(a!=10)
{
   
}
else
{
   break;
   printf("\nHate You");
   printf("\nHate You");
   printf("\nHate You");
   printf("\nHate You");
}
*/

/*
    for(i =1; i <= 10; i++)
    {
        if(i ==5)
        {
            break;
        }
        printf("\n%d",i);  //1 2 3 4 
    }
*/    
    return 0;
}