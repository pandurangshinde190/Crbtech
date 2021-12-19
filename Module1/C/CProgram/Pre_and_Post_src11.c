#include<stdio.h>
int main(void)
{
    int a = 5, b;

    /*
    b= ++a; //Here using the value of operand means - giving the value to b

    printf("\nValue of A is :%d",a); //6
    printf("\nValue of B is :%d",b);//6
    return 0;

    */

   
    b= a++; //Here using the operand 'a' means assigning the value of it to b

    printf("\nValue of A is :%d",a); //6
    printf("\nValue of B is :%d",b);//5

    
//    b= 10++;
    return 0;
}