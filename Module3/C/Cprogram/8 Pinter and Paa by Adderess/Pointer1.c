#include<stdio.h>
int main(void)
{
	int a = 10;
	int* ptr;  //"prt" is a pointer "to int"  (* is just a symbol over here)
	           //ptr is capable of holding address of any variable whoes data type int

	ptr = &a;  //Fine Now ptr is holding the base addresss of 'a'

	printf("\nValue of a is : %d",a);

	*ptr = 20; // a is getting modified
				//because *ptr is same as a. a is same as *ptr.
				//Now * will act as the operator

	printf("\nValue of a is : %d",a);

	return 0;
}