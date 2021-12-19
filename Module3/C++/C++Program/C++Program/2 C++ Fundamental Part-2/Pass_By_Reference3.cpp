#include<iostream>
using namespace std;


//1. Pass By Value
/*
void calculateAreaPerimeter(int radius);
int main(void)
{
    int radius;

    cout<<"\nEnter the value of radius  : ";
    cin >> radius;

    calculateAreaPerimeter(radius);
    return 0;
}

void calculateAreaPerimeter(int radius)
{
    float a;
    float p;

    a =3.14f * radius * radius;
    p = 2 * 3.14f * radius;

    // cout << "\nArea is : " << a;
    // cout << "\nPerimeter is : " << p;

    //Q/A :- I want to display the value of "area" and "perimeter" in main
    //This is not possible using "return statement"
}
*/

//2. Pass By Address
/*
void calculateAreaPerimeter(int radius, float *a, float *p);
int main(void)
{
    int radius;
    float area;
    float perimeter;

    cout<<"\nEnter the value of radius  : ";
    cin >> radius;

    calculateAreaPerimeter(radius, &area, &perimeter);

    cout << "\nArea is : " << area;
    cout << "\nPerimeter is : " << perimeter;
    
    return 0;
}

void calculateAreaPerimeter(int radius, float *a, float *p)
{
  
    (*a) = 3.14f * radius * radius;
    (*p) = 2 * 3.14f * radius;

}
*/

//3. Pass By Reference

void calculateAreaPerimeter(int &x , float &y , float &z);

int main(void)
{
    int radius;
    float area;
    float perimeter;

    /*
    cout << "\n\nAddress of radius is : "  << &radius;
    cout << "\n\nAddress of area is : "  << &area;
    cout << "\n\nAddress of perimeter is : "  << &perimeter;
    calculateAreaPerimeter(radius, area, perimeter);
    */

    
    cout<<"\nEnter the value of radius  : ";
    cin >> radius;

    calculateAreaPerimeter(radius, area, perimeter);

    cout << "\nArea is : " << area;
    cout << "\nPerimeter is : " << perimeter;
    

    return 0;
}

/*
void calculateAreaPerimeter(int &x=radius , float &y=area , float &z=perimeter)
'x' is refering to radius
'y' is refering to area
'z' is refering to perimeter
*/

void calculateAreaPerimeter(int &x , float &y , float &z)
{
    /*
    cout << "\n\nAddress of x is : "  << &x;
    cout << "\n\nAddress of y is : "  << &y;
    cout << "\n\nAddress of z is : "  << &z;
    */
    y = 3.14f * x * x;
    z =2 * 3.14f * x;
}

