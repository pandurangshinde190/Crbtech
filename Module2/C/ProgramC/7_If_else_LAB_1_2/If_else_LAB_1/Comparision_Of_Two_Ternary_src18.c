#include<stdio.h>
int main(void)
{
    int a, b;
    // int Max;
    printf("Enter the value for a :");
    scanf("%d", &a);
    printf("Enter the value for b :");
    scanf("%d",&b);

    //Assumption :- a and b are not equal
    //Can u find the maximum value

    // Max=(a > b) ? (a) : (b);
    // printf("\nMaximum value is %d",Max);

    // printf("\nMaximum value is %d",(a > b) ? (a) : (b));


    //a could be greter than b
    //b coude be greter than a
    //a and b could be equal
    

    // (a > b) ? (printf("a is greter than b")) : (printf("b is greter than a OR both are equal"));

    (a > b) ? (printf("a is greter than b")) : ((b>a) ?(printf("b is greter than a")) :(printf("a and b both are equal")));

    

    //b is greter than a OR a and b both are going to equal

    return 0;
}