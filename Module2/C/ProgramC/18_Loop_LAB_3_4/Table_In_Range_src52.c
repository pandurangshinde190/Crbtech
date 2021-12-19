#include<stdio.h>
int main(void)
{
    int i,j;
    int prod;
    int no;

    // printf("\nEnter the value for no :");
    // scanf("%d",&no);

    for(j=2; j<=7; ++j)
    {
        // This loop will give me value for j in range : 2,3,4,.......,6,7

        // Can I now calculate the table of received 'j' ?

        no =j;
         for(i =1; i <= 10; ++i)
        {
            prod =no *i;
            printf("%d  ",prod);
        }
        printf("\n\n");
    }

   
    return 0;
}