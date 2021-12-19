#include<stdio.h>
int main(void)
{
    int terms;
    int a,b,c;
    int i;

    printf("\nEnter the total number of terms you want for fibinacii series  :");
    scanf("%d",&terms);

    a = 0;
    b = 1;
    printf("\nThe fibonacii series is as below - \n\n");
    printf("%d   %d",a,b);

    //I'll  take a for loop
    //For every iteration of the for loop we will generate and print the next term

    for(i=1; i <= (terms-2) ; ++i )
    {
        c = a + b;
        printf("   %d", c);

        a = b;
        b = c; 
    }
    return 0;
}