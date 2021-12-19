#include<stdio.h>
int main(void)
{
    int a,b;
    int sum;

    // Accepting
    printf("\nEnter the integer values : ");
    scanf("%d%d",&a, &b);

    // Core Procees i.e performing the addition
    sum = a + b;

    printf("\nAddition of %d and %d is %d",a, b, sum);
    return 0;
}