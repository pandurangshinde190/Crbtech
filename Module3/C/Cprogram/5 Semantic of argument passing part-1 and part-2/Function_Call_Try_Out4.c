#include<stdio.h>

void foo(int var);

int main(void)
{
	int a = 10, b = 20, c = 30, d = 1, e = 0;


	foo(printf("Pandurang")); //O/P :- Pandurang 
							  //Value of var is :- 9

	return 0;
}

void foo(int var)
{
	printf("\nValue of Var is  : %d", var);
}
