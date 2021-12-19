#include<iostream>
using namespace std;

int main(void)
{
    int m1,m2,m3,m4,m5;
    int sum;
    float average;

    cout<<"\nAccept the Marks : ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;
    /*
    cin >> m1;
    cin >> m2;
    cin >> m3;
    cin >> m4;
    cin >> m5;
    */
    sum = m1+m2+m3+m4+m5;

    // average = (float)sum / 5;
    
    average = static_cast<float>(sum) / 5;



    cout << " Sum is : "  << sum ;

    cout << "\nAverage of The Marks : "  << average;


    return 0;
}

/*
static_cast
dynamic_cast
reinterpret_cast
*/