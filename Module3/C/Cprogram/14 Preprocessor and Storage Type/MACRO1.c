#include<stdio.h>
/*
int main(void)
{
	int radius=5;
	float pi = 3.14f;
	float area;

	area = pi * radius * radius;

	printf("\nArea of Circle is :%f ",area);  //This is a function call
	return 0;
}
*/

#define PI 3.14f

int main(void)
{
	int radius = 6;
	float area;

	area = PI * radius * radius;

	/*
		At the time of pre-processing PI will get substituted by 3.14f i.e.
		area = 3.14f * radius * radius;
	*/
	printf("\nArea of Circle is :%f ", area);  //This is a function call
	return 0;
}