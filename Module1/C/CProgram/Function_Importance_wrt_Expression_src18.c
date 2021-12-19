#include<stdio.h>
void add(int x, int y);  //function declaration
int main(void)
{
    int a=10, b=20;

    // add(a,b); //Function call

    add( (a>b)?(a):(b), !(5==printf("Hello")));
    return 0;
}

void add(int x, int y) //function defination
{
    int sum;
    sum = x + y;
    printf("Result is %d",sum);
}