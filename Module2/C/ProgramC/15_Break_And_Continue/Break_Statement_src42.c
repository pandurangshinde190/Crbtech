#include<stdio.h>
int main(void)
{
    int i,j;
    /*
    for(i = 1; i <=10; ++i)
    {
        printf("\n\nONE");
        printf("\n\nTWO");
        printf("\n\nTHREE");
        break;
    }
    */

   /*
    for(i = 1; i <=10; ++i)
    {
        printf("\n\nONE");
        printf("\n\nTWO");
        break;
        printf("\n\nTHREE");   //Why have u written this?
                               // This is "Unreachable code"      
    }
    */

    /*
     for(i = 1; i <=10; ++i)
    {
        break;
        printf("\n\nONE");
        printf("\n\nTWO");
        printf("\n\nTHREE");
       
    }
    printf("\n%d",i);
    */

   /*
     for(i = 1; i <=10; ++i)
    {
        printf("\n%d",i);  //1 2 3 4 5

       if(i==5) //5
       {
           break;
       }
    }
    */

   /*
   for(i = 1; i <=10; ++i)
    {
       if(i==5) //5
       {
           break;
       }
       printf("\n%d",i);  //1 2 3 4 5
    }
    printf("\n%d",i);
    */

   /*
    for(i=1; i <=2; ++i)
    {
        for(j=1; j <=2; ++j)
        {
            if(i == j)
            {
                break;
            }

            printf("\n\n%d %d",i,j);   //2 1 
        }
    }
    */
   /*
    for(i=1; i <=2; ++i)
        {
            for(j=1; j <=2; ++j)
            {
                if(i != j)
                {
                    break;
                }
                printf("\n\n%d %d",i,j);   

            }
        }
    
    //1 1
    */

    /*
        for(i=1; i <=2; ++i)
        {
            for(j=1; j <=2; ++j)
            {
                printf("\n\n%d %d",i,j);   
                if(i != j)
                {
                    break;
                }

            }
        }
    
    //1 1
    //1 2
    //2 1
    */

   /*
   for(i=1; i <=2; ++i)
    {
        for(j=1; j <=2; ++j)
        {
            printf("\n\n%d %d",i,j);   
            if(i == j)
            {
                break;
            }

        }
    }
    */
    //1 1
    //2 1
    //2 2

   


    return 0;
}