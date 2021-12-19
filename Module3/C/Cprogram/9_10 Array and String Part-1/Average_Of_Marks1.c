#include<stdio.h>

int main(void)
{
	int m1, m2, m3, m4, m5;
	int total;
	float average;

	printf("\nEnter the marks obtained in 5 subjects :" );
	scanf("%d%d%d%d%d",&m1, &m2, &m3, &m4, &m5);

	total = m1 + m2 + m3 + m4 + m5;

	average = (float)total / 5;

	printf("The average of marks is %f", average);
	return 0;
}