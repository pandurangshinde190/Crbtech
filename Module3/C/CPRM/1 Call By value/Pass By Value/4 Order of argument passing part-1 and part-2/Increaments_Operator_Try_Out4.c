#include<stdio.h>
int main(void)
{
	
	int i=5;
	int Result;

	Result = ++i * ++i;

	printf("\nValue of Result is %d",Result);

	
	/*
	int i = 1;

	printf("%d  %d  %d  %d", i++, ++i, ++i, i++);
	*/
	return 0;
}