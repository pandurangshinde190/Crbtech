#include<stdio.h>

void add(void)  //Function Defination
{
	int a, b;      //a, b and sum are local variables. Theay are local to the function add
	int sum;

	//Accepting
	printf("\nEnter two integer value :");
	scanf("%d%d", &a, &b);

	//Adding
	sum = a + b;

	//Displaying
	printf("\nAddition of %d and %d is %d", a, b, sum);
	
}