#include<iostream>
using namespace std


void addition(int a, int b)
{
    int sum;
    sum = a + b;
    cout << "\nAddition of two integers is :" << sum;
}
void  addition(float x, float y)
{
    float sum;
    sum = x + y;
    cout << "\nAddition of two float is :" << sum;
}

int main(void)
{
    addition(5, 5);  //addition(int, int)
    addition(1.2f, 1.4f); //addition(float,float)

    return 0;
}