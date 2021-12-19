#include<stdio.h>
/*
struct Employee
{
	int id;
	float sal;
	char name[50];
};

typedef struct Employee Emp;
*/
/*
"struct Employee" is the name of the newly created user defined data type.
If required you can think of creating a new data type with a shorter name equivalent
to "struct Employee" using  "typedef"
As of now zero bytes i.e. no memory is allocated. memory is allocated for a variavle 
when it is created out of the data type
*/
/*
int main(void)
{
	Emp e1 = { 2121, 10000, "Yash"};								//"e1" is a variable of type "struct Employee" / "Emp"
																	//Now for the variable "e1" 58 bytes of  memory will be allocated.
	Emp e2;

	printf("\n\nDisplay the deatials of e1 : \n\n : ");
*/
	/*
	printf("\nId is : %d", id);
	printf("\nSalary is : %f", sal);
	printf("\nName is : %s", name);
	*/
/*
	printf("\nId is : %d",e1.id);
	printf("\nSalary is : %f",e1.sal);
	printf("\nName is : %s",e1.name);
	
	//Accepting and Displaying
	printf("\n\n*********************Accepting Deatils For e********************\n");

	printf("\nEnter the Id : ");
	scanf("%d",&e2.id);

	printf("\nEnter the Salary : ");
	scanf("%f", &e2.sal);

	printf("\nEnter the Name : ");
	//scanf("%s", e2.name);  //&e2.name is wrong
	fgetc(e2.name);

	printf("\n\n********************Displaying Deatail of e2*********************\n");

	printf("\nId is : %d", e2.id);
	printf("\nSalary is : %f", e2.sal);
	printf("\nName is : %s", e2.name);


	return 0;
}
*/