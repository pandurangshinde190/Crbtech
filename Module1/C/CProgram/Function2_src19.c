#include<stdio.h>
void display(int var);

int main(void)
{
    display((10, 20));

    /* 
    int a =(10,20);
    printf("%d",a)
    */
    return 0;
}

void display(int var) //function defination
{
    printf("\nValue of formal parameter \"var\" is %d",var);
}