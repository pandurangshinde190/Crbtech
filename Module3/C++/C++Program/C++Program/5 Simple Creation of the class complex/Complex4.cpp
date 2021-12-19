#include<iostream>
using namespace std;

class cClomplex
{
    private:
        int real;
        int imaginary;

    public :    

        cClomplex()
        {
            real =1;
            imaginary =1;
        }

        cClomplex(int r, int i)
        {
            real =r;
            imaginary =i;
        }

        void display()
        {
            cout << "\nComplex Number is : " << real << "+i"  << imaginary;
        }
    
        void setReal(int r)
        {
            real =r;
        }

         void setImaginary(int i)
        {
            imaginary =i;
        }
        
        int getReal()
        {
            return real;
        }

        int getImaginary()
        {
            return imaginary;
        }
};


int main(void)
{
    cClomplex c1; //'c1'  is an object of class cComplex
    c1.display();

    cClomplex c2(2,5);
    c2.display();

   
    c1.setReal(4);
    c1.setImaginary(7);
    c1.display();

    c2.setReal(c1.getReal());
    c2.setImaginary(c1.getImaginary());

    // c1.display();
    c2.display();
    return 0;
}
