#include<stdio.h>
int main(void)
{
    int i;
    int no;

    printf("Enter the No :");
    scanf("%d",&no);

    for(i =1; i<=10;++i)
    {
         printf("\n%d  * %d  = %d",no, i,no*i);
    }

    /*
     for(i =1; i<=10;++i)
         printf("\n%d  * %d  = %d",2, i,29*i);
    */

    /*
    int i,Prod;
    for(i =1; i<=10;++i)
    {
        //This loop will iterate for 10 times.
        //It will give you the value of 'i' as - 1,2 ,3, 4, ....., 10

        Prod =2*i;
        printf("\n%d  * %d  = %d",2, i,Prod);
    }
    */

    
    return 0;
}