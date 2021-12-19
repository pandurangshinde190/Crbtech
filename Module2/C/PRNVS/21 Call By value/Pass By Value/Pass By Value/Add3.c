#include<stdio.h>

//void add(int x, int y);
void add(int , int );
int main(void)
{
	int a, b;

	//Accepting
	printf("\nEnter two integer value :");
	scanf("%d%d", &a, &b);

	add(a,b);

	return 0;
}



void add(int x, int y)  //Function Defination    //Stand Here and observe on what is coming along with the control
{
	     
	int sum;   //It's a local variable belonging to the function "add"

	sum = x +  y;   //"x"  and "y"  both the variables are alive . But, they are not in scope.

	printf("\nAddition of %d and %d is %d",x, y,sum);


}
