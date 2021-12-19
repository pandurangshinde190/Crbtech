#include<stdio.h>
int main(void)
{
    int i,j;
    int no;
    int fact;

    // printf("\nEnter the find factorial No: ");
    // scanf("%d",&no);
    no =5;

    
    for(j =2; j<=7; ++j)
    {
        //This loop will give u values of j as - 2,3,4,5,6, and 7
        fact =1;
        no =j;
        for(i =1; i<=no; ++i)     //This code is calculating factorial of no
        {
            fact *=i;
        }
        printf("\n\n%d! = %d ",no, fact);
       
    }
    return 0;
}