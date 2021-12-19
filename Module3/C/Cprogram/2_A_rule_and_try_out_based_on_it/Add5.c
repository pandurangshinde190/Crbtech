#include<stdio.h>

void add(int x, int y);
//void add(int , int );   //--->>name are optional
int main(void)
{
	int a, b;


	printf("\nEnter two integer value :");
	scanf("%d%d", &a, &b);

	add(a,b);   //First Call


	add(a,b);   //Second Call


	add(a,b);   //Third time

	return 0;
}



void add(int x, int y)  //collected value
{
	     
	int sum;   

	sum = x +  y;   

	printf("\nAddition of %d and %d is %d",x, y,sum);


}
