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
};


int main(void)
{
    cClomplex c1; //'c1'  is an object of class cComplex
    c1.display();

    cClomplex c2(2,5);
    c2.display();

    
    return 0;
}
