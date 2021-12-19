#include<stdio.h>

int main(void)
{
    int a = 5;

    //I want to check whether 'a' lies between 1 and 20 ( excluding the extremity)
  /*    
    if(1 < a < 20)
    {
        printf("Yes !!! \"a\" lies between 1 and 20 ");
    }
    else
    {
        printf("No !!! \"a\" does not lie between 1 and 20");
    }
  */

     if((a > 1) &&  (a < 20))
    {
        printf("Yes !!! \"a\" lies between 1 and 20 ");
    }
    else
    {
        printf("No !!! \"a\" does not lie between 1 and 20");
    }


    return 0;
}