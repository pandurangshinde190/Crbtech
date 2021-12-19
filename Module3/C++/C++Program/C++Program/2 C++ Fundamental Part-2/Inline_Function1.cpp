#include<iostream>
using namespace std;
/*
int calculateSquare(int);


int main(void)
{
    int no = 5;

    cout << calculateSquare(no);

    //If such a function is called for say 100000 times
    //Th definately will have issue of "function-call-overhead"

    return 0;
}

int calculateSquare(int var)
{
    int square;

    square = var * var;

    return square;
}
*/

inline int  calculateSquare(int var)
{
    int square;

    square = var * var;

    return square;
}


int main(void)
{
    int no = 5;

    cout << calculateSquare(no);

    //If such a function is called for say 100000 times
    //Th definately will have issue of "function-call-overhead"

    return 0;
}

