#include<stdio.h>

void calculateAreaAndPerimeter(int r,float *ptr ,float *qtr );

int main(void)
{
	int redius;
	float area, perimeter;

	printf("\nEnter the value of redius : ");
	scanf("%d", &redius);

	calculateAreaAndPerimeter(redius, &area, &perimeter);

	printf("\n\nArea of Circle is : %f ", area);

	printf("\n\nArea of Perimeter is : %f ", perimeter);

	return 0;

}

void calculateAreaAndPerimeter(int r,float *ptr,float *qtr)
{
	//*ptr means "area"
	//*qtr means "perimeter"

	*ptr = 3.14f * r * r;

	*qtr = 2 * 3.14f * r;
}
