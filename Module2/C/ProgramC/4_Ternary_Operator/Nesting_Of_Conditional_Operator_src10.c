#include<stdio.h>
int main(void)
{
    int a = 10, b =20, c =30, d =40;
    int Result;
   Result = ((a!=10) ? (a+b) : (a+b-c)) ? ((a<b) ? (10+20+30+40) : (100-75)) : ((b==20) ? (printf("reyansh")) : (d>c));

    printf("\n%d",Result);
   /*
        In place of expression-1, expression-2  and expression-3
        we will have an expression which agin is constructed using the conditional operator


        expr -1 :-   (a!=10) ? (a+b) : (a+b-c) ......//Value of thos expression is  0
        expr -2 :-   (a<b) ? (10+20+30+40) : (100-75)   // No need  to get it executed 
                                                            bcz expr -1 evaluted as FALSE
        expr -3 :-   (b==20) ? (printf("Reyansh")) : (d>c)

        o/p :Reyansh

   */

    return 0;
}