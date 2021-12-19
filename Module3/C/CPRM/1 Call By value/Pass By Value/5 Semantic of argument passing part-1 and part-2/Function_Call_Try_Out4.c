#include<stdio.h>

void foo(int var1, int var2);

int main(void)
{
	int a = 10, b = 20, c = 30, d = 1, e = 0;

	//printf("\n\nValue of before function call is  %d",a); //10

	//1.  foo(a =50);  //one- single-argument-I-wish-to-pass (required An expression)

	//2. foo(a > b);

	//3. foo(printf("Pandurang")); //O/P :- Pandurang 
							  //Value of var is :- 9



	foo(a = 99, a = 54);

	//Note :- The argument will be passed from RHS to LHS
	//i.e the expression will be executed and value of that expression will be passed
	

	//printf("\n\nValue of After function call is  %d", a);  //50

	return 0;
}

void foo(int var1, int var2)
{
	//I Just want the function to be blank

	//printf("\nValue of Var is  : %d", var);

	//printf("\n\n%d",var1);  //99
	//printf("\n\n%d",var2);  //99
}