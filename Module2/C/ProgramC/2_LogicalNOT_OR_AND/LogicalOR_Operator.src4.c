#include<stdio.h>
int main(void)
{
    int a = 10, b =20, c =10, d =20;
    int x = 0, y =1;
    int result;

    printf("\nValue of b is :%d",b);   //20
    result =(a != 10) || (b =5);
    printf("\nValue of b is :%d",b);  //20

/*
    result = (a>=10) || (b==20);
    printf("\n\n%d",result);    //1

    // printf("\nValue of a is : %d",a); //10
    // printf("\nValue of b is : %d",b); //20

    result = (a=0) || (b=5);
    printf("\n\n%d",result);    //1

    // printf("\nValue of a is : %d",a);  //0
    // printf("\nValue of b is : %d",b);  //0

    result = (0) || (1);
    printf("\n\n%d",result);   //1

    // printf("\nValue of x is : %d",x); //0

    result = (x=1) || (y==1);
    printf("\n\n%d",result); //1

    // printf("\nValue of x is : %d",x); //0 


    result = (d!=0) || (a==10);
    printf("\n\n%d",result);  //1

*/    
    return 0;
}