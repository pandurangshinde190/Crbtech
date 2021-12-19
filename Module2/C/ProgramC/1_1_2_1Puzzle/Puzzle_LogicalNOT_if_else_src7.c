#include<stdio.h>
int main(void)
{
    /*
        int a= printf("Yash");

        printf("\n\nValue of a is :%d",a);
    */

    //This is basically a function call 
    //printf("Yash") --> perfectly a function call
    // we are colling built-in-function "printf"
    //and "Yash"  ----> is the only argument that we are passing to the b.i.f "printf"
    //in this case
    //b.i.f printf's return type is "int"
    //It returns the total number of arguments printed succefully on to the console
    //And the return value (if-any) is substituted at the place of function call.
    //So, THE CALL TO THE B.I.F "printf" IS ALSO TREATED AS A VALID EXPRESSION.

    // Q/A) if(CAN I WRITE A PRINTF FUNCTION OVER HERE WITHOUT A ; I.E. A FUNCTION CALL)
    //  Ans :- Yes, You Can


    if(!printf("Yash"))
    {
        printf("Yash");
    }
    else
    {
        printf("Shweta");
    }
    return 0;
}