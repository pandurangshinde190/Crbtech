#include<stdio.h>
int main(void)
{
    char ch;

    printf("\nEnter any character : ");
    scanf("%c",&ch);

    // Checl whether the user enterd character is a "digit"
    //0,1,2,3,.........,8,9  //These are the symbols belonging to the machines 
    //chareacter set which are supposed to represent the so called digit

    //The integer value  ( ASCII value ) present insie ch should lie between 
    //48 to 57 including the end values

    //ch >= 48
    //AND
    //ch <= 57

    /*
    if ((ch >= 48) && (ch <=57))
    {
        printf("\nYes!!! It's a digit representing character ");
    } 
    else
    {
        printf("\nNope !!! It's not a digit representing character");
    }
    */

    ((ch >= 48) && (ch <=57)) ? ( printf("\nYes!!! It's a digit representing character ")) : (printf("\nNope !!! It's not a digit representing character"));

    return 0;
}