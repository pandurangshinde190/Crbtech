#include<stdio.h>
int main(void)
{
    int a = 10, b = 20, c = 10, d = 30;
    int x = 0, y = 1;
    int Result;

    printf("\nI Love You");

    !a;    // It's not going to have any effect as such w.r.t any output on the 
           // o/p screen


    Result = !(a>b);
    printf("\n\n%d",Result); //1

    Result = !(10+20-20);
    printf("\n\n%d",Result);   //0

    Result = !(x);
    printf("\n\n%d",Result); //1

    Result = !(!y);
    printf("\n\n%d",Result); //1

    Result = !(9);
    printf("\n\n%d",Result); //0

    Result = !(a==b);
    printf("\n\n%d",Result); //1

    Result = !(!(a==b) != !(x!=0));
    printf("\n\n%d",Result);      //1

    /*
    An Expression will be created
    And we will have a semicolon as the terminator so that 
    It turns out into a statement.
    Note it :- It's noot mandatory to catch the value of some expression always
    and use it



    !(Expression);  --> Also valid as per the syntax
  
    Variable = !(Expression);
    Using the so called Variable

    */

    printf("\nI Hate You");
    return 0;
}