#include<string.h>
#include<iostream>
using namespace std;

//cDate
class cDate
{
private:

	int day;
	int month;
	int year;

public:


	cDate()
	{
		day = 25;
		month = 10;
		year = 1987;
	}


	cDate(int d, int m, int y)
	{
		day = d;
		month = m;
		year = y;
	}

	~cDate()
	{

	}

	void initDate()
	{
		day = 25;
		month = 10;
		year = 1987;
	}

	void setDate(int d, int m, int y)
	{
		day = d;
		month = m;
		year = y;
	}

	void display()
	{
		cout << "Date is : " << day << "-" << month << "-" << year;
	}


	void accept()
	{
		cout << "\nEnter the day : ";
		cin >> day;
		cout << "\nEnter the month : ";
		cin >> month;
		cout << "\nEnter the year : ";
		cin >> year;
	}


	void setDay(int d)
	{
		day = d;
	}

	void setMonth(int m)
	{
		month = m;
	}

	void setYear(int y)
	{
		year = y;
	}


	int getDay()
	{
		return day;
	}

	int getMonth()
	{
		return month;
	}

	int getYear()
	{
		return year;
	}
};



//cString
class cString
{
private:

	char *str;
	int length;

public:

	cString()
	{
		length = 0;
		str = new char('\0');
	}

	cString(const char *ptr)
	{
		length = strlen(ptr);
		str = new char[length + 1];
		strcpy(str, ptr);
	}



	cString(const cString &s1)
	{
		length = s1.length;
		str = new char[length + 1];
		strcpy(str, s1.str);
	}

	~cString()
	{
		if (length == 0)
		{
			delete str;
		}
		else
		{
			delete[]str;
		}
	}

	void display()
	{
		cout << "\nName is : " << str;
	}

	void accept()
	{
		if (length == 0)
		{
			delete str;
		}
		else
		{
			delete[]str;
		}

		char buff[256];
		cout << "\nEnter the string : ";
		cin >> buff;

		length = strlen(buff);
		str = new char[length + 1];
		strcpy(str, buff);
	}

	const cString& operator=(const cString &s2)
	{

		if (this == &s2)
		{
			//This means it's a self assignment
			return s2;
		}

		//First released the memory back to the environment 
		if (length == 0)
		{
			delete str;
		}
		else
		{
			delete[]str;
		}

		//Copy the value of length
		//Allocate the required ammount of memory
		//copy the string into the reserved memory
		length = s2.length;
		str = new char[length + 1];
		strcpy(str, s2.str);

		return s2;
	}

};


class cEmployee
{
private:

	int id;
	float sal;

	/*
	int day;
	int month;
	int year;
	*/
	cDate jdt; //object of a class cDate is being placed as a member while defining
			   //cEmployee - serving as an example for "containment"

	/*
	char name[256];
	*/

	cString name; //containment

public:

	cEmployee() : jdt(), name()
	{
		id = 1;
		sal = 10000;

		/*
		jdt.day = 1;
		jdt.month = 1;
		jdt.year = 1;
		*/

	}

	cEmployee(int i, float s, int d, int m, int y, const char * n) : jdt(d, m, y), name(n)
	{
		id = i;
		sal = s;
	}

	void display()
	{
		cout << "\nId is : " << id;
		cout << "\nSalary is : " << sal;

		cout << "\nJoining ";
		jdt.display();
		//cout << "\nJoining Date is : " << jdt.day << "-" << jdt.month << "-" << jdt.year;

		name.display();
	}
};


class cWageEmployee : public cEmployee
{
private :
	int hrs;
	int rate;

public :
        
	//cEmployee() :- invoke the default constructor of cEmployee for the base part
	cWageEmployee() : cEmployee()
	{
		//id = 1;
		hrs = 0;
		rate = 0;
	}

        //cEmployee(i, s, d, m, y, n) :- cEmployee(int, sal, int, int, int, const char *)
	cWageEmployee(int i, float s, int d, int m, int y, const char * n, int h, int r) : cEmployee(i, s, d, m, y, n)
	{
		//id = 1;
		hrs = h;
		rate = r;
	}

	void display()
	{
		cEmployee::display();   //---> Reusability
		cout << "\nHours are : " << hrs;
		cout << "\nRate is : " << rate;
	}
};

int main(void)
{
	cWageEmployee we1;
	we1.display();

	cout << "\n\n";

	cWageEmployee we2(2122, 20000, 3, 3, 2003, "Akash Pandey", 240, 2);
	we2.display();

	return 0;
}