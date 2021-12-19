#include<stdio.h>

void foo(int);   //no need of variable name over here

int main(void)
{
    int a =10;
    
    foo(a);

    printf("\nCame back from the function\"*foo\". ");
    // printf("\nI am in foo.Value of x is = %d  and Value of y is =  %d",x,y);
    
    return 0;
}

void foo(int x)
{
    int y =20;

    printf("\nI am in foo.Value of x is = %d  and Value of y is =  %d",x,y);
    
   
    ++x;  //Just increament the value of 'x' and 'y' by 1
    ++y;
    // printf("\nI am in foo.Value of x is = %d  and Value of y is =  %d",x,y);
}