#include<iostream>
using namespace std;


int foo(void)
{
    cout << "\nI am int foo ";
    return 9;
}

int bar(void)
{
    cout << "\nI am in bar ";
    
}

// int g=foo();
// bar();//Error

// foo();  //CTE in C++ as well.
            //The function should return something and it's mandatory to catch it.


int main(void)
{
    cout << "\nI am int main ";
    return 0;
}