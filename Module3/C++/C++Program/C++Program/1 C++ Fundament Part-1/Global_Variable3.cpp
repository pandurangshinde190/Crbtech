#include<iostream>
using namespace std;

int a =10; //It's a global variable
int main(void)
{
    int a =20;
    cout << "\nValue of a is : "  << a;

    cout << "\nValue of global  a is : "  << ::a;  //:: a---> refer to the 'a' which is defined 
                                                 //globally
    return 0;
}