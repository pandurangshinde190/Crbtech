#include<stdio.h>

void provideWithMeRowCount(void);
void provideMeWithColCount(int );
void displayReactangle(int, int);


int main(void)
{

	provideWithMeRowCount();
	
	/*
	
	int i, j;
	//Logic of Displaying of reactangle

	for (i = 1; i <= row; ++i)
	{
	for (j = 1; j <=col ; ++j)
	{
		printf("*");
	}
	printf("\n");
	}

	*/
	return 0;
}


void provideWithMeRowCount(void)
{
	int row;

	printf("\nEnter the row count :");
	scanf("%d", &row);

	provideMeWithColCount(row);
}

void provideMeWithColCount(int row)
{
	int col;

	printf("\nEnter the col count : ");
	scanf("%d",&col);

	displayReactangle(row, col);


}

void displayReactangle(int row, int col)
{
	int i;
	int j;

	for (i = 1; i <= row; ++i)
	{
		for (j = 1; j <= col; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
}





/*
************
************
************
************

*/
