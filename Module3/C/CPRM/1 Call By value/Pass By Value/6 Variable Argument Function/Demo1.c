#include<stdio.h>

extern void foo(void);

int main(void)
{
	foo();
	return 0;
}

void foo(void)
{
	printf("\nI am inside foo...........");
}