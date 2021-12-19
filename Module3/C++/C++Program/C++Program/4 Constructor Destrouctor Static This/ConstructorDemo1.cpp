#include<iostream>
using namespace std;


class cDate
{
    
    public:

        //No argument constructor / default constructor
        cDate()
        {
            cout << "\nI am inside the no-argument constructor";
        }

        //parameterixed constructor / cDate(int ,int ,int )
        cDate(int d,int m,int y)
        {
            cout << "\nI am inside the parameterized  constructor";
        }

       
};

int main(void)
{
    cDate d1;    //Q/A :- Now which constructor will be called ?
                //We have 2 different constructor's defined insite our class
                //Here no parameters we have passed so, we will observe "no argument"
                //constructor getting called
                //cDate() 

    cDate d2(9,9,2020);      //cDate(int, int, int)

    return 0;
}
