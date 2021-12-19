#include<stdio.h>
int main(void)
{
    int a =10, b =20, c =0, d=1;
    int x =0, y=1;
    int result;

    result = (a > 10) && (b == 20);  
    printf("\n\n%d",result);         //0

    result = (a != b) && (d == 1);
    printf("\n\n%d",result);        //1

    result = (0) && (a = 1);
    printf("\n\n%d",result);    //0


    // printf("\n\n*********Value of a is %d\n\n",a);

    result = (a == 1) && (1);
    printf("\n\n%d",result);  //0

    result = (1+2) && (d++);
    printf("\n\n%d",result); //1

    result = (x) && (y);
    printf("\n\n%d",result); //0

    return 0;
}