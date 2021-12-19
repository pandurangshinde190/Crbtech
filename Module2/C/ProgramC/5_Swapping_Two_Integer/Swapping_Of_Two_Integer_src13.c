#include<stdio.h>
int main(void)
{
    int a = 25, b =50;
    // int temp;

    /*
    printf("\nBefore Swapping ");
    printf("\nValue of a is : %d and Value of b is : %d",a,b);

    a = b ;
    b = a ;
    
    printf("\nAfter Swapping ");
    printf("\nValue of a is : %d and Value of b is : %d",a,b);  
    */

     /*
    printf("\nBefore Swapping ");
    printf("\nValue of a is : %d and Value of b is : %d",a,b);

    temp = a ;
    a = b ;
    b = temp;
    


    printf("\nAfter Swapping ");
    printf("\nValue of a is : %d and Value of b is : %d",a,b);
    */
   /*
    printf("\nBefore Swapping ");
    printf("\nValue of a is : %d and Value of b is : %d",a,b);

    // a = a + b;  
    // b = a-b;    
    // a = a -b;   

    a += b;
    b = a- b;
    a -= b;
    

    printf("\nAfter Swapping ");
    printf("\nValue of a is : %d and Value of b is : %d",a,b);

    */


    // You should be able to swap value of two integer variable
    //Just using a songle statement
    printf("\nBefore Swapping ");
    printf("\nValue of a is : %d and Value of b is : %d",a,b);

    // a = a ^ b;
    // b = b ^ a;
    // a = a ^ b;

    //  a ^=b;
    //  b ^=a;
    //  a ^=b;

    a ^= b ^= a ^= b; //Just a single statement which will swap the values of a and b

    printf("\nAfter Swapping ");
    printf("\nValue of a is : %d and Value of b is : %d",a,b);

    return 0;
}