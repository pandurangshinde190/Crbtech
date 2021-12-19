#include<iostream>
using namespace std;


#include<iostream>
using namespace std;


class cDate
{
private:
    int day;
    int month;
    int year;

public:

    //No argument constructor / default constructor
    cDate()
    {
        // cout << "\nI am inside the no-argument constructor";
        day = 25;
        month = 12;
        year = 1994;
    }

    //parameterixed constructor / cDate(int ,int ,int )
    cDate(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }

    ~cDate()
    {
        cout << "\nI am inside Destructor  : " << day << "-" << month << "-" << year;
    }

    void display()
    {
        cout << "\n Displaying d1's Date is : " << day << "-" << month << "-" << year;
    }
};

int main(void)
{
    {
        cDate d1;    //Q/A :- Now which constructor will be called ?
                    //We have 2 different constructor's defined insite our class
                    //Here no parameters we have passed so, we will observe "no argument"

                    //constructor getting called
                    //cDate() 

        cDate d2(9, 9, 2020);      //cDate(int, int, int)
        d1.display();
        d2.display();
    }
    cout << "\n\nOut of the arbitary block";

    return 0;
}
