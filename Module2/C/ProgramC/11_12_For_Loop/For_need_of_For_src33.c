#include<stdio.h>

//1 2 3 4  . . . . 97 98 99 100

//For-loop is example of Pre-Tested 
int main(void)
{
    int i;
/*
    for(i=1; i<=100; ++i)
    {
        printf("\n%d",i);
    }
    printf("\nLove You");

*/
/*
     for(i=1; i<=100; ++i)
        printf("\n%d",i);
        printf("\n%d",i);
   
    printf("\n%d",i);
*/

//Q/A :- Can you think of displaying it in the order
//100 99 98 .................4 3 2 1

    /*
    for(i=100; i >=1; i=-1)  // --i
    {
        printf("\n%d",i);  //1
    }

    printf("\n%d",i);

    */
    return 0;
}


/*
    Choose the better approch to increment the value of i
    i = i + 1;
    i += 1;
    ++i;
    i++;

    Note : ++i works more efficiently than i++
    Note : uses bracket becuase to increase the  Readiability

*/