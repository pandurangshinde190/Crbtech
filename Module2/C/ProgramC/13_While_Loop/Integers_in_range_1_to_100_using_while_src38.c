#include<stdio.h>
int main(void)
{
    int i;
    int result;
    /*
    i=1;
    while (i <= 100)
    {
        printf("\n%d",i);
        ++i;    

    }
    */
   /*
   i=1;
    while (i <= 100)
        printf("\n%d",i);
        ++i;    
    */

   /*
    printf("\nBefore While"); //Before While
    i=1;
    while (i <= 100)     //----->This is going to be always TRUE
    {
               
    }
    printf("\nAfter While"); //----->Unreachable Code because "while" will never terminated
     
    */
   /*
   printf("\nBefore While"); 
    i=1;
    while (i <= 100)     
    {
               break; //The execution of the loop is terminated
                      //The control is sent out of the loop to execute rest of the statement
    }
    printf("\nAfter While"); //After While
    */

/*
   i=1;
    while (i <= 100)
    {
        printf("\n%d",i++);

    }
*/

/*
 i=1;
    while (result = (i <= 100))     
    {
              printf("\n\n\n\n\nValue of result is  %d", result);
              break;
    }
 */
/*
while(1)
{
    printf("\n\nLove You");
}
*/
/*
while(-1)
{
    printf("\n\nHate You");
    break;    
}
*/
/*
while (0)
{
    printf("\nHate You");
}
*/

/*
result =1;
printf("\n%d",result);//1
while (result = 0)
{
    printf("\nHate You");
}
printf("\n%d",result);//0
*/

    return 0;
}