#include<stdio.h>

void foo(int ,int );

int main(void)
{
	int a = 10 , b = 20;

	foo(a, b);
	return 0;
}

void foo(int x, int y)
{
	//Let's try to display the address of y and x

	printf("\nAddress of y is %u",&y);
	printf("\nAddress of x is %u", &x);

}
