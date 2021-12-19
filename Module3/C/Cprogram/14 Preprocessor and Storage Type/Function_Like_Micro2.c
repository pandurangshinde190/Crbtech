#include<stdio.h>
/*
int Square(int x);
int main(void)
{
	int no = 5;
	int result;

	result = Square(no);

	printf("\nResult is : %d",result);

	return 0;
}
int Square(int no)
{
	int result;
	result = no * no;
	return result;
}

//Consider such a function "Square" is called for say -1 Lakh no. of time.

*/



#define SQUARE(X) (X)*(X)

int main(void)
{
	int no = 6;
	int result;

	result = SQUARE(no);

	//result = (no) * (no);
	//result = (5) * (5);

	printf("\nResult is : %d", result);

	return 0;
}
int Square(int no)
{
	int result;
	result = no * no;
	return result;
}