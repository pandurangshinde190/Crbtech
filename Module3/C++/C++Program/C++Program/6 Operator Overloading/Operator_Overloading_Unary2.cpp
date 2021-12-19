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

        //c5 = -c4
        //c5 = -c4.operator-()
        cComplex operator-()
        {
            cComplex temp;
            temp.real =-real;
            temp.imaginary = -imaginary;
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
    int a = 10;
    int b;
    b = -a;
    cout << "\n" << a; //10
    cout << "\n" << b; //-10
*/
    cComplex c4(2,3);
    cComplex c5;

    c5 = -c4;  //c5 = -c4.operator-() ;
               // OR
               // c5 = operator-(c4) ;
            
     c5.display(); //-2 + i-3           

    
	return 0;
}
