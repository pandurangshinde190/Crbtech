#include<stdio.h>
int main(void)
{
    int a, b;

    printf("Enter the value for a :");
    scanf("%d", &a);
    printf("Enter the value for b :");
    scanf("%d",&b);

    if(a > b)
    {
        printf("\na is greter than b");
    }
    else
    {
        //a is not greter than b
        //a could be smaller than b OR both a and bcould be equal
        //Inside this else can I oncce again use the decision making statement ? YES!!!

        if(b >a)
        {
            printf("\nb is greter than a");
        }
        else
        {
            printf("\na and b both are equal");
        }
    }
    return 0;
}