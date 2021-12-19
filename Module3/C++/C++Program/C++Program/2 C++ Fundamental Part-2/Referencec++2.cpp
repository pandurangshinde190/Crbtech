#include<iostream>
using namespace std;

// DataType &referance-Name  =  referantName ;



int main(void)
{
    int a =10;
    int &b = a;

    cout << "\nValue of a is : "  << a;
    cout << "\nValue of b is : "  << b;


    cout << "\n\n";
     cout << "\nAdderess of a is : "  << &a;
    cout << "\nAdderess of b is : "  << &b;



    b=77;
    cout<< "\n\n";

    cout << "\nValue of a is : "  << a;
    cout << "\nValue of b is : "  << b;

    a =99;
     cout << "\nValue of a is : "  << a;
    cout << "\nValue of b is : "  << b;
    return 0;
}