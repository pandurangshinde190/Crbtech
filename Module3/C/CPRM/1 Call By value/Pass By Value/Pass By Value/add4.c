#include<stdio.h>

/*
case - 4
--------

Accepting of two integers ---> Do it in "main"
Performing the addition ----> Do it in a U.D.F "add"
Displaying of the sum  -----> Should be done back in main  (?)
*/

/*
int add(int, int);

int main(void)
{
	int a, b;
	int total;

	printf("\nEnter two integers : ");
	scanf("%d%d", &a, &b);


	//2.	//add(a, b);  //You are free to ignore the value returned
					//It's not mandatory to catch it always....

		//1.   //	total = add(a,b);  //We do reqire to pass values of 'a' and 'b' along with the control
				//	printf("\nAddition of %d and %d is %d", a,b,total);

	printf("\nAddition of %d and %d is %d", a, b, add(a, b));
	return 0;
}

int add(int x, int y)
{
	int sum;

	sum = x + y;

	//printf("\nAddition of %d and %d is %d", x, y, sum);

	return sum;
}

*/