#include<stdio.h>

//void display(int brr[], int size);
void display(int *brr, int size);

int main(void)
{
	int arr[5] = { 10, 20, 30, 40, 50 };
	int i;

	printf("\nAddress of first array element is : %u", &arr[0]);

	printf("\nValue of arr is : %u",arr);

	printf("\nIn mainSize of the array array is : %d bytes",sizeof(arr));

	display(arr,5);


	printf("\nDisplay the array Below \n\n");

	for (i = 0; i < 5; ++i)
	{
		printf("%d  ", arr[i]);
	}
	return 0;
}

void display(int *brr, int size)
//void display(int brr[], int size)
{
	printf("\nIn mainSize of the array array is : %d bytes", sizeof(*brr));

	brr[3] = 77;

}