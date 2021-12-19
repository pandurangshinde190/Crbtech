#include<iostream>
using namespace std;
int main(void)
{
    int a=10,b=20,c=30;
    int x,y;
    int sum;
    // printf("Hello, world!!!"); In C

    // cout << "Hello World!!!";
    // cout << "\nMy name is Yash Paranjape";

    // cout << "\nMy name is Yash Paranjape" << "\nMy name is Yash Paranjape";

    // cout << "\nMy name is Yash Paranjape" << "\nMy name is Yash Paranjape" << "\n\nMy native place is \"Akole\"";

    // printf("%d",a);  //IN i.e format specifier is required

    // cout << "a";  //O/P :- a
    // cout << a;    //O/P :- 10

    // cout << "\n\n" << a+b;  //30;

    /*
    sum = a + b;

    // printf("\nAddition of %d and %d is %d",a,b,sum); //In C

    cout <<"\nAddition of " << a << " and " << b <<" = " <<sum;
    */

//    printf("\nEnter the value of x and y");
//    scanf("%d%d",&a,&b);

   cout << "\nEnter the value of x and y : ";
   cin >>  x >> y;
 /*
   cin >> x;
   cin >> y;
*/
   cout << "\n Addition of " << x << " and " << y <<" is : " << (x+y);

    return 0;
}