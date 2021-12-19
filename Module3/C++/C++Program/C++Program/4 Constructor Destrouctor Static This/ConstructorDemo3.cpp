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
             day =25;
            month =12;
            year =1994; 
        }

        //parameterixed constructor / cDate(int ,int ,int )
        cDate(int d,int m,int y)
        {
            day =d;
            month =m;
            year =y;
        }

        void initDate()
        {
            day =25;
            month =12;
            year =1994;   
        }

        void setDate(int d, int m,int y)
        {
            day =d;
            month =m;
            year =y;   
        }

     
        void display()
        {
            cout << "\n Displaying d1's Date is : " << day  << "-"  << month  << "-"  << year;
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

int main(void)
{
    cDate d1;    //Q/A :- Now which constructor will be called ?
                //We have 2 different constructor's defined insite our class
                //Here no parameters we have passed so, we will observe "no argument"
                //constructor getting called
                //cDate() 

    cDate d2(9,9,2020);      //cDate(int, int, int)
    d1.display();
    d2.display();

    return 0;
}
