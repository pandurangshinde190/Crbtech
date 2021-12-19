#include<stdio.h>
int main(void)
{
    int i;
    /*
    i=1;
    while(i <=10)
    {
        printf("\n%d",i);

        ++i;
    }
    printf("\n\n%d",i);
    */

   /*
    i=printf("Pandurang") -printf("Aru");
    while(scanf("%d",&i))
    {
        printf("\n%d",i);

        //so called increment/decrement (expression) is missing 
        
    }
    printf("\n\nOut Of the loop",i);
    */

    /*
    while(printf("Enter an integer\n\n") + scanf("%d",&i))
    {
        printf("\n%d",i);

        // break;
        
    }
    printf("\n\nOut Of the loop",i);

    */
   /*
   i=1;
   do
   {
       printf("\n\n%d",i);
       ++i;
   }while(i <= 5);

   */
 /*
     i=1;
   do
   {
       printf("\n\n%d",i);
       ++i;
   }while(i <= printf("Yes"));

   */

   i=1;
   do
   {
       printf("\n\n%d",i);
       ++i;
   }while(0);     //This is also valid
                  //Bcz 0 (integer zero) is also valid expression


                  
    return 0;
}