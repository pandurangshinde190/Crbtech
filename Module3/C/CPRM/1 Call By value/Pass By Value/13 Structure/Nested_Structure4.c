#include<stdio.h>

struct Date
{
	int day;
	int month;
	int year;
};

typedef struct Date Date;

struct Employee
{
	int id;
	float sal;
	char name[50];
	Date jdt;
};

typedef struct Employee Emp;

int main(void)
{
	Emp e1 = {2121,1000,"yash", 05, 07, 1998};

	printf("\nId is : %d",e1.id);
	printf("\nSalary is : %f",e1.sal);
	printf("\nname is : %s", e1.name);
	printf("\nJoining Date is : %d - %d - %d", e1.jdt.day,e1.jdt.month,e1.jdt.year);

	//Accepting and Displaying
	printf("\n\n*********************Accepting Deatils For********************\n");

	printf("\nEnter the id : ");
	scanf("%d",&e1.id);

	printf("\nEnter the Salary : ");
	scanf("%d",&e1.sal);

	printf("\nEnter the Name : ");
	scanf("%d",e1.name);

	printf("\nEnter the Date : ");
	scanf("%d%d%d", &e1.jdt.day, &e1.jdt.month, &e1.jdt.year);

	printf("\n\n*********************Dispay Deatils For********************\n");

	printf("\nId is : %d", e1.id);
	printf("\nSalary is : %f",e1.sal);
	printf("\nname is : %d", e1.name);
	printf("\nDate is : %d \\ %d \\ %d", e1.jdt.day, e1.jdt.month, e1.jdt.year);

	return 0;
}