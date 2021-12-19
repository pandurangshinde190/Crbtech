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


        // c3 = c1 + c2;  
		// c3 = c1.operator+(c2) ;
        cComplex operator+(cComplex c2)
		{ 
			cComplex temp;
			temp.real = real + c2.real;
			temp.imaginary = imaginary + c2.imaginary;
			return temp;
		}
};
/*
	// c3 = c1 + c2; 
   //c3 = operator+(c1, c2) ;
 
cComplex operator+(cComplex c1, cComplex c2)
{
	cComplex temp;

	int r, i;
	r = c1.getReal() + c2.getReal();
	i = c1.getImaginary() + c2.getImaginary();

	temp.setReal(r);
	temp.setImaginary(i);

	return temp;
}
*/

int main(void)
{
	/*
	int a =10;
	int b =20;
	c = a + b;
	cout << "\n" << c;
	*/

	cComplex c1(2, 3);
	cComplex c2(4, 6);
	cComplex c3;

	c3 = c1 + c2;  //c3 = operator+(c1, c2) ;
					//OR
					//c3 = c1.operator+(c2) ;
	//The error is becuase -
	//It's first of all expanded as per the rule. 
	//Acoording to the expansion further it is searching for the function 
	//the name of which is "Operator+"  off course with the relevant argument
	//The search is being carried out inside the class as well as in global scope
	//when no-where the function is found then finally we have a compile time error 	
    //Simple Error :-function with name "operator+" is not found 			
    c3.display();
	return 0;
}
