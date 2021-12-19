#include<stdio.h>


void calculateAreaPerimeter(int);
void display(float , float);

int main(void)
{
	int radius;

	printf("\nEnter the value for radius  : ");
	scanf("%d",&radius);

	calculateAreaPerimeter(radius); 
	return 0;
}

void calculateAreaPerimeter(int r)  
{

	float area;
	float perimeter;

	area = 3.14f * r * r;
	perimeter = 2 * 3.14f * r;

	//Can we havve one more function which will do the job of displaying the 
	//value of area and perimeter

	display(area, perimeter);



}

void display(float a,float p)
{
	printf("\nArea of Circle is : %f sq. Units", a);
	printf("\nPerimeter of Circle is : %f ", p);
}

