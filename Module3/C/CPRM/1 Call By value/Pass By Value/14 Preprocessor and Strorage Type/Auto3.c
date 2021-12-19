#include<stdio.h>
/*
void foo();

int main(void)
{
	int a;

	foo();

	return 0;
}

void foo()
{
	//
}
*/

/*
//register
int main(void)
{
	register int i;
	
	for (i = 1; i <= 100; ++i)
	{
		printf("\n%d",i);
	}
	return 0;
}
*/

/*
//Static

void foo(void);

int main(void)
{
	foo();

	foo();

	foo();

	return 0;
}

void foo(void)
{
	static int i = 10;
	printf("\n%d",i);
	++i;
}
*/