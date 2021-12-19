#include<stdio.h>

typedef int INTEGER;

int main(void)
{
	INTEGER a = 10;
	int b = 20;
	INTEGER c = 30;

	int d = a + b + c;

	printf("\n%d", a);
	printf("\n%d", b);
	printf("\n%d", c);
	printf("\n%d", d);
	
	return 0;
}
