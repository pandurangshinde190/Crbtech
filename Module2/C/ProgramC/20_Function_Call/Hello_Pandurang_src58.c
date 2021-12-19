#include<stdio.h>

void display(void);

//display();    //Function call Never Define globally
int main(void)
{
    printf("\nONE");
	printf("\nTwo");
	printf("\nTHREE");
	printf("\nFOUR");
	printf("\nFIVE");

	// main();
	
	display();
	return 0;
}

void display(void)
{
	printf("\n\nMy Name is Pandurang Shinde");
}