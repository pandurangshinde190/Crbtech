#include<iostream>
using namespace std;


class cComplex
{
	private :
	
		int real;
		int imaginary;

	public  :

		cComplex()
		{
			real = 1;
			imaginary = 1;
		}

		cComplex(int r, int i)
		{
			real = r;
			imaginary = i;
		}

		void display()
		{
			cout << "\nComplex Number is : " << real << " +i" << imaginary;
		}

		void setReal(int r)
		{
			real = r;
		}

		void setImaginary(int i)
		{
			imaginary = i;
		}

		int getReal()
		{
			return real;
		}

		int getImaginary()
		{
			return imaginary;
		}

		//c3 = c1.add(c2) ;
		cComplex add(cComplex c2)
		{
			cComplex temp;
			temp.real = real + c2.real;
			temp.imaginary = imaginary + c2.imaginary;
			return temp;
		}
};


cComplex add(cComplex c1, cComplex c2)
{
	cComplex temp;

	//"add" is a global function it will not have access to the private members 
	//of the class "cComplex"
	/*
	temp.real = c1.real + c2.real;
	temp.imaginary = c1.imaginary + c2.imaginary;
	return temp;
	*/

	int r, i;
	r = c1.getReal() + c2.getReal();
	i = c1.getImaginary() + c2.getImaginary();

	temp.setReal(r);
	temp.setImaginary(i);

	return temp;
}


int main(void)
{
	//I want to perform addition of two complex numbers 
	//I want to add "c1 and c2" and give the result to "c3"
	//Something like "c3 = c1 + c2"

	/*
	cComplex c1(2, 2);
	cComplex c2(3, 5);
	cComplex c3;

	c3 = add(c1, c2)   ;
	c3.display();
	*/
	
	/*
	cComplex c1(2, 2);
	cComplex c2(3, 6);
	cComplex c3;

	c3 = c1.add(c2) ;

	c3.display();
	*/


	/*
	int a = 10;
	int b = 20;
	int c;
	c = a + b;
	*/

    /*
    cComplex c1(2, 2);
	cComplex c2(3, 6);
	cComplex c3;

    c3 =c1 + c2;

    //I want this to work
    //I want + operator to know/understand the way to add two complex number
    //So, this is what we need to teach the + operator
    //The meaning of + operator we want to extend it for the user created types as well 
    */
	return 0;
}
