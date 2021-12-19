#include<iostream>
using namespace std;

/*
    class cDate
    {
    private:
            int day;
            int month;
            int year;
    };



int main(void)
{
    cDate d1; //d1 is an object of class cDate

    
        // cDate d2; //d2 is an object of class cDate

        // cDate d3,d4,d5; //d3,d4,d5 are objects of class cDate
        

    d1.day=25;
    d1.month=5;
    d1.year=1995;

    cout << "\n Displaying d1's Date is : " << d1.day  << "-"  << d1.month  << "-"  << d1.year;


    return 0;
}

*/

class cDate
{
    private:
        int day;
        int month;
        int year;

    public:
            
            //Can I have a public function i.e. a behaviour which will do the required 
            //work for me i.e initializing DATE i.e. day,month and year to some
            //default value
        void initDate()
        {
            day =25;
            month =12;
            year =1234;   
        }

        void setDate(int d, int m,int y)
        {
            day =d;
            month =m;
            year =y;   
        }

        //Can I have a public function which will take care of displaying the date
        //eg :- from main instead of accessing the private members directly I will
        //call this function
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


        //Setter Methods / Setters  /Mutators 
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

        //Getter Method  /Getters  //Accessors
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
    cDate d1; //d1 is an object of class cDate

    /*
    cDate d2; //d2 is an object of class cDate

    cDate d3,d4,d5; //d3,d4,d5 are objects of class cDate
    */
   /*
    d1.day=25;
    d1.month=5;
    d1.year=1995;

    cout << "\n Displaying d1's Date is : " << d1.day  << "-"  << d1.month  << "-"  << d1.year;
    */

    //Task :- assigning some default value to day , month and year
    /*
     d1.day=25;
     d1.month=5;
     d1.year=1995;
    */

    d1.initDate();

    //Task :- displaying the date
    /*
    cout << "\n Displaying d1's Date is : " << d1.day  << "-"  << d1.month  << "-"  << d1.year;
    */
   d1.display();

    //Task :- accepting the date
	/*
	cout << "\nEnter the day : ";
	cin >> d1.day;
	cout << "\nEnter the month : ";
	cin >> d1.month;
	cout << "\nEnter the year : ";
	cin >> d1.year;
	*/

    /*
    d1.accept();
    d1.display();
    */

   //Task :- I want to alter/SET value for some individual attribute

	/*
	d1.day = 21;
	*/

    d1.setDay(21);
    d1.display();


    //Task :- I want to retrieve/fetch/receive/GET value of some individual attribute
	//for some further proccessing
    int temp =d1.getDay();
    cout << "\nValue of day with d1 is : " << temp;

    d1.setDate(25,12,1994);
    d1.display();

    return 0;
}
