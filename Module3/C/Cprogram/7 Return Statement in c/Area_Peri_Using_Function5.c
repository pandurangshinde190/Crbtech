#include<stdio.h>

float calculateAreaAndPerimeter(int);

int main(void)
{
	int redius;
	float result;
	printf("\nEnter the value of radius :");
	scanf("%d", &redius);

	result = calculateAreaAndPerimeter(redius);

	printf("\nValue of Result %f",result);

	return 0;
}

float calculateAreaAndPerimeter(int r)
{
	float a;
	float p;

	a = 3.14f * r * r;
	p = 2 * 3.14f * r;

	//display the value of "area"  i.e. "a"  and "perimeter"  i.e "p"
	//back in main

	//return a; //Here just the value of 'a' will be returned and we tend to have a warning
	//return p; //Unreachable code

	/*
	return a, p;   //Even this is not going to work
	*/             //Comma is acting as the operator as such value of the expression
				   //is equal to value of 'p' which is returned
}

