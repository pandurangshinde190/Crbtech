#include<stdio.h>

void foo(int var);

int main(void)
{
	int a = 10, b = 20, c = 30, d = 1, e = 0;

	printf("\n\nValue of before function call is  %d",a); //10

	 foo(a =50);  //one- single-argument-I-wish-to-pass (required An expression)

	printf("\n\nValue of After function call is  %d", a);  //50

	return 0;
}

void foo(int var)
{
	//I Just want the function to be blank
}

