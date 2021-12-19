#include<stdio.h>

void foo(int var1, int var2);

int main(void)
{
	int a = 10, b = 20, c = 30, d = 1, e = 0;


	/*
	(a=5), (b=50,), (a+b+c)   -----> Value of the expression is 85

	(c>d) ? (c) : (d)   ----> Value of this expression is 30
	*/

	foo( ((a = 5), (b = 50 ), (a + b + c)), ((c > d) ? (c) : (d)) );

	return 0;
}

void foo(int var1, int var2)
{
	printf("\n\n%d",var1);
	printf("\n\n%d",var2);
}