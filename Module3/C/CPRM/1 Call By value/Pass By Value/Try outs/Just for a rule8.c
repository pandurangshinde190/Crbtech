#include<stdio.h>

void foo(int);

int main(void)
{
    int a = 10;
    printf("\nIn foo. Value of a is : %d", a);

    foo(a);
    printf("\nIn foo. Value of a is : %d", a);

   printf("\nMy name is Pandurang Shinde");
    return 0;
}

void foo(int a)
{
    printf("\nIn foo. Value of a is : %d", a);
    a += 10;
    printf("\nIn foo. Value of a is : %d", a);
}