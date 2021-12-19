#include<stdio.h>

void foo(int );

int main(void)
{
	int a = 10, b = 20, c = 30;
	int Result;


	/*
	foo(? --> An expression is required. This expression is executed
		 and it's value is passed along with the control as an attachment );
	*/		

	/*
	foo(a + b);  //30
	*/

	/*
	printf("\n\n%d",c);  //30
	foo(c = a + a + a + a); //40
	printf("\n\n%d",c); //40
	*/

	/*
	foo(a + b);  //30

	foo(a == b); //0

	foo(a > b);  //0

	foo(a && b); //1

	foo(a != b); //1

	foo(a,b); // //CTE "Too many arguments"
	*/

	/*
	Result = (c = a + b, b = 55, a = 5);
	printf("\n\nValue of Result is : %d",Result);
	*/


	printf("\nValue of a is %d, value of b is %d and value of c is %d",a,b,c);
	foo((c=a+b, b=55,a=5)); 

	printf("\n\nValue of a is %d, value of b is %d and value of c is %d", a, b, c);
	

	return 0;
}
void foo(int var)
{
	printf("\nInside foo. Value of var is %d ",var);
}