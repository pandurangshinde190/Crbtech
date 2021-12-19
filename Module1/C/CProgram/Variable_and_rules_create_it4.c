//variable creation 1
/*
#include<stdio.h>
int main(void)
{
    int a=10;  // this is a defination
                //its an example of initialization
                //'a' is a variable of data type "int" which is defined and initialized with the value 10

    int b =20;
    printf("\n The value of a is : %d",a); //The value of a is :10           
    printf("\n The value of a is : %d",b); //The value of a is :20 
    printf("\n The value of a is : %d",a+b); //The value of a is :30           
    printf("\n The value of a is : %d",10+20+30+40); //The value of a is :100            
    return 0;  
}

*/

//Variable creation 2
/*
#include<stdio.h>
int main(void)
{
    int a=10, b=20, c=70;
    printf("\nvalue of c is : %d",c);//value of c is 70
    printf("\nvalue of expression \"c= a + b\" is : %d",c=a+b);//value of expression is :30
    //the expression that you provide is excuted
    //Here c = a + b will be executed

    printf("\nvalue of c is : %d",c); //value of c is: 30
    return 0;
}

*/

//variable 3

/*
#include<stdio.h>
int main(void)
{
    int a=10;
   
    printf("\nValue of a is : %d",a); //Value of a is : 10

    printf("\nAddress of a is : %d",&a); //Address of a is : 6422300
    //At different instance of time during program execution we can observe different address

    printf("\nAddress of a is : %u",&a); //Address of a is :
    //%u :- unsigned int (+ve integer quantities)
    return 0;
}

*/
//Variable 5
/*
#include<stdio.h>
int main(void)
{
    int a =10;
    printf("\n%d",a); //10

    {
        int a=20;
        printf("\n%d",a);//20
    }

    printf("\n%d",a); //10
    return 0;
}
*/

//variable rule 4
#include<stdio.h>
int main(void)
{
    //     int a=10,b=20,c=30;
    //     //---------------------
    //    printf("\n%d",a);
    //    printf("\n%d",b);
    //    printf("\n%d",c);

        int a =a;//Absolutely a valid statement
                    //it's an example of self initialization

    int b;
    printf("\n\n%d",b);

        // printf("\n%d",a);            


    return 0;
}