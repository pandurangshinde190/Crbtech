#include<iostream>
using namespace std;

/*
void add(int a, int b,int c ,int d, int e);

int main(void)
{
    add(10,10,10,12,10);
    return 0;
}

void add(int a, int b,int c ,int d, int e)
{
    cout << "\nAddition is " << a+b+c+d+e;
}
*/


void add(int a, int b, int c=5, int d=2, int e=1);


int main(void)
{
    //CTE :- Too few arguments. First 2 arguments are compulsory
	/*
	//add(); 

	//add(10);
	*/

	add(10, 20);

	add(10, 20, 30);

	add(10, 20, 30, 40);

	add(10, 20, 30, 40, 50);
    return 0;
}

void add(int a, int b,int c ,int d, int e)
{
    cout << "\nAddition is " << a+b+c+d+e;
    
    //10 20  5  2  1   ---> 38

	//10, 20, 30  2  1  --> 63

	//10, 20, 30, 40 1  -->  101

	//10, 20, 30, 40, 50  ---> 150
}
