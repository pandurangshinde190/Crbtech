#include<stdio.h>
int main(void)
{
    int a, b, c;
    // int Max;
    printf("Enter the Three Integer :");
    scanf("%d%d%d",&a, &b, &c);

    //Assume :- All 3 (a, b and c)

    // Max= (a>b)? ((a > c) ? (a) : (c)):((b > c) ? (b) : (c)); 

    // printf("\nGretest Value is : %d",(a>b)? ((a > c) ? (a) : (c)):((b > c) ? (b) : (c)));    

        (a>b)? ((a > c) ? (printf("\na is greterst")) : (printf("\nc is gretest"))):((b > c) ? (printf("\nb is gretest")) : (printf("\nc is greterst"))); 

    return 0;
}