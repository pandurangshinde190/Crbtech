#include<stdio.h>
int main(void)
{
    int a =10;

    //char ch=A; 

    /*
    Error:- identifier A is  undefined
    Here it will search for a variable with name A.
    Further the data paresent inside A has to be copied into variable ch
    */


    
    //ch is a variable of type 'char' that means it is capable of storing 
    //any character type data (character constant) from the machines character set

    char ch ='A'; //'A'  perfectly represent the character constant
    printf("\n\n%c",ch);

    printf("\n\n%d",ch);

    printf("ASCII value of \'%c\' and %d",ch,ch);
    return 0;
}


