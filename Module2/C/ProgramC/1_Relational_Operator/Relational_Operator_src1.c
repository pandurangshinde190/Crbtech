#include<stdio.h>
int main(void)
{
    int a=10, b =11, c =10, e=9;
    int result;
    result = (a>b);
    printf("\n\nValue of result is :%d",result);    //0

    result = (a >= c);
    printf("\n\nValue of result is :%d",result);  //1

    result = (a < e);
    printf("\n\nValue of result is :%d",result);   //0

    result = (c <= a);
    printf("\n\nValue of result is :%d",result);    //1

    

        
        




    return 0;
}