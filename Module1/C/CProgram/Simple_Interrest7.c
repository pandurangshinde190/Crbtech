// #include<stdio.h>
// int main(void)
// {
//     int p=2000;
//     int n=5;
//     float r=8.9f;

//     float SI;

  
//     printf("\nSimple Interest is Rs %f/-",(p*n*r) /100);
//     return 0;
// }


//Simple Interst ---> (p * n * r) / 100   // p :- principle of Amount
                                          // n :- Number of year
                                          // r :- rate of interest

#include<stdio.h>
int main(void)
{
    int p=20000;
    int n=2;
    float r=8.9f;
    
    printf("\nSimple interest is :- %f",(p * n* r)/100);

    return 0;
}