#include<stdio.h>

void display(void); //Function Declaration
				   // "display"  is a function which requires no any argument and 
				 //which returns nothing

//display();
int main(void)
{
	printf("\n\nSTART");
		
	//Call the function display
	display();    //You are calling/using the function "display"
	              //The control will enter into the body of the function "display"
				 //It will execute it and then

	printf("\n\nSTOP");
	return 0;
}

void display(void)  //Function Defination. It will contain the actual
{
	printf("\n\nHello, World!!!!");
}