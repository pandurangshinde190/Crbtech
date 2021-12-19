#include<stdio.h>
int main(void)
{
    int a =10, b =20, c = 10, d= 20;
    int x, y, z;
    int result;

    // x=a;

    // y = x = a; //Multiple assignment
    // printf("\nValue of X is %d and y is %d",x,y);

    // z =y = x =a;
    // printf("\nValue of X is %d and y is %d and Z is %d",x,y,z);

    result = (a == b);
    printf("\nValue of result is %d",result);

    return 0;
}