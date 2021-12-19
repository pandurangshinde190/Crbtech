#include<stdio.h>
int main(void)
{
    int a, b, c;
    // int Max;
    printf("Enter the Three Integer :");
    scanf("%d%d%d",&a, &b, &c);

    //Assume :- a, b, and c all three are un-equal (i.e No two quantities are equal)

    if(a>b && a>c)
    {
        printf("\n a is gretest");
    }

    if(b>a && b>c)
    {
        printf("\n b is gretest");
    }

    if(c>a && c>b)
    {
        printf("\n c is gretest");
    }


    return 0;
}