#include<stdio.h>
int main(void)
{
   // float PI =3.14; //It's a poor programming practice
                    //3.14 is of type double and on LHS the variable type is float
                    //So, RHS expression DATA-TYPE has to be converted into
                    //LHS, variable's DATA TYPE temporary
                    //An example of implicit typecasting

    float PI =3.14f; //No Conversion would be carried out over here. so this will
                     // work faster in comparison with the above statement
    printf("\n%f",PI);
    return 0;
}