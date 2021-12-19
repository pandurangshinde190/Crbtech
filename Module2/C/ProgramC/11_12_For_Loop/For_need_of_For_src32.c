#include<stdio.h>

//Q/A : Can you display integers in the range 1 to 100  (includeing the extremities)
//o/p :- 1 2 3 4 5 6 . . . . . . . 97 98 99 100
int main(void)
{
    // int v1 = 1,v2 = 2, v3 = 3, ........,v100 = 100;
    // printf("%d %d %d %d .....%d %d",v1, v2, v3, ...., v99, v100);

    /*
    printf("\n%d",v1); 
    printf("\n%d",v2); 
    printf("\n%d",v3);
    .
    .
    .
    .
    printf("\n%d",v100); 
    */
    /*
    printf("\n%d",1); 
    printf("\n%d",2); 
    printf("\n%d",3);
    .
    .
    .
    .
    printf("\n%d",100);
    */


    for(int i =1; i <= 100; ++i)
    {
        printf(" %d",i);
    }
    return 0;
}