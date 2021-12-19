#include<iostream>
using namespace std;
int main(void)
{
    /*
    int *ptr;

    ptr =new int;
    *ptr = 25;
    cout << "\n\nValue stored is : " <<*ptr;


    //Here the memory is not released back to the enviroment
    //i.e Memory Leakage
    //It's a poor programming practice
*/
/*
    int *ptr;

    ptr =new int;
    *ptr = 25;
    cout << "\n\nValue stored is : " <<*ptr;
    delete ptr;
*/
/*
    int *ptr;
    ptr =new int(77);
    cout << "\n\nValue stored is : " <<*ptr;
    delete ptr;
*/

    //Lets try to create an array of data type int using the concept of DMA

    int *arr;
    int no;
    int sum;
    float avg;

    cout << "\nEnter the total no. of subject : ";
    cin >> no;

    //Now want to create an array of DT "int" and size "no" using DMA 

    // arr=malloc(sizeof(int)*no);  

    arr =new int[no];

    //An array of DT "int" , size "no" and name "arr" is duly created

    cout << "\nEnter the marks obtained in  " << no << "  Subject :";

    sum =0;
    for(int i=0;i < no;++i)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    avg = static_cast<float>(sum) / no;
    
    cout<< "Average of marks is : " << avg;

    
    delete []arr;





    return 0;
}