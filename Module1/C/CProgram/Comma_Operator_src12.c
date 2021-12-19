#include<stdio.h>
int main(void)
{
    int a = 10, b = 20, c = 30, d = 40;
    int result;

    // result = ( (a=5) , (b=a+a), (c=a+b), (a+b+c+d) );

    result = ( (a&&b > c+10), (!b), (c=a||b), (c=a>b + b==c), (d=a+b+c+16-7), (9) );

    printf("\nThe value of result is: %d",result);

    return 0;
}
//side effects mean as an example :- In execution of expression -2
//value of a would be considered as 5 and not as 10
//a ---> 5
//b ---> 10
//c ---> 15
//d ---> 40

// result ---->70