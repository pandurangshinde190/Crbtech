#include<stdio.h>
int main(void)
{
	/*
	
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	//int arr[3][3] = { {1,2,3},{1,2,5}, {12,4,5} };

	int i,j;
	
	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 3; ++j)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	*/

	int arr[3][3];
	int i, j;
	printf("\n\nEnter the nine element over here : -");

	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 3; ++j)
		{
			scanf("%d", &arr[i][j]);
		}
		
	}

	printf("\n\nDisplay the 2-D Array : -\n\n");

	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 3; ++j)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");

	}
	return 0;
}