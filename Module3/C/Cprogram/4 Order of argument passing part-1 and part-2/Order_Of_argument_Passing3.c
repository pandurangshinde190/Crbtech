#include<stdio.h>

void foo(int ,int );

int main(void)
{
	int a;

	foo(scanf("%d", &a), printf("Enter an integer : "));
	// foo(printf("Pandurang Shinde"), printf("Enter an integer : "));

    printf("\n\nValue of a is : %d",a);

	return 0;
}
void foo(int x, int y)
{
	//I want to di nothing
    printf("\nAddress of y is %u",&y);
	printf("\nAddress of x is %u", &x);


    // printf("\n\nValue of x is : %d",x);
	// printf("\n\nValue of y is : %d", y);
}
