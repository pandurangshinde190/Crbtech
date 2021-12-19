#include<iostream>
using namespace std;

class cDate
{
private:

	int day;
	int month;
	int year;

	static int counter;

public:

	//no argument constructor / default constructor 
	cDate()
	{
		//cout << "\nI am inside the no-argument constructor ";
		day = 25;
		month = 10;
		year = 1987;
		counter++;
	}

	//parametarized constructor / cDate(int , int , int )
	cDate(int d, int m, int y)
	{
		//cout << "\nI am inside the parametarized constructor ";
		day = d;
		month = m;
		year = y;
		counter++;
	}


	//this is not a object specific function. so mark it static
	static void displayTotalNumberOfObjectsCreated()
	{
		cout << "\n\nTotal No. of objects created so far is : " << counter;
	}


	//To call display we observe that "object" is mandatory
	//It's a object specific function
	void display()
	{
		cout << "\n\nDisplaying Date : " << this->day << "-" << this->month << "-" << this->year;
	}


};

int cDate::counter = 0;

int main(void)
{
	cDate::displayTotalNumberOfObjectsCreated();

	cDate d1;
	cDate d2(9, 9, 2020);

	cDate::displayTotalNumberOfObjectsCreated();

	cDate d3(21, 11, 2018);
	cDate d4;

	cDate::displayTotalNumberOfObjectsCreated();


	return 0;
}