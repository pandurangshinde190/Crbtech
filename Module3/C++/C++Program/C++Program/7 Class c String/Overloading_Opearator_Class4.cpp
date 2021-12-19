#include<string.h>
#include<iostream>
using namespace std;

class cString
{
	private :
		
		//char str[256];
		char *str;
		int length;

	public  :

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
			cout << "\nString is : " << str;
			cout << "\nLength is : " << length;
		}

		
		//s1 = s2;
		//s1.operator=(s2);
	
		const cString& operator=(const cString &s2)
		{
			cout << "\nI am inside the overloaded assignment operator ";

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


int main(void)
{
	

	cString s1("Yash");  //para-constructor is called for s1
	                     //cString(const char *)

	cString s2("Shweta");  //para-constructor is called for s1
	                       //cString(const char *)


	/*
	int a = 10;
	int b = 20;

	a = b;  //eg of assignment
            //variable 'b' is being assigned to 'a'
	        //'a' is getting assigned with 'b'

	cout << a;
	*/


	s1 = s2; 

	s1.display();

	return 0;
}