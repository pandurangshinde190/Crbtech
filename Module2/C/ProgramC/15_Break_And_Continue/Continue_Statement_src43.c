#include<stdio.h>
int main(void)
{
    int i,j;    //Define i

    /*
    for(i =1; i <= 10; ++i)
    {
        printf("\n\nONE");
        continue;   //Go for the next iteration
        printf("\nTWO");   //forget about this code to written below continue
                            //Unreachable code
    }
    */

   //No any Output
   //But the loop will complete the 10 iterations
   /*
   for(i =1; i <= 10; ++i)
    {
        continue;   
        printf("\n\nONE");
        printf("\nTWO");                
    }
    */
   /*

   for(i =1; i <= 10; ++i)
    {
        continue;   
        printf("\n\nONE");
        printf("\nTWO");                
    }
    printf("\n%d",i);   //11
    */

   /*
   for(i =1; i <= 10; ++i)
    {
       if(i == 5)   
            continue;
                
      printf("\n%d",i);   
    }
    */

   /*
    for(i =1; i<=2; ++i)
    {
        for(j =1; j<=2; ++j)
        {
            if(i == j)
            {
                continue;
            }
            printf("\n%d  %d",i,j);
        }
    }
    */
    //1 2
    //2 1


    for(i =1; i<=2; ++i)
    {
        for(j =1; j<=2; ++j)
        {
            if(i != j)
            {
                continue;
            }
            printf("\n%d  %d",i,j);
        }
    }

    //1 1
   //2 2
    

    return 0;
}