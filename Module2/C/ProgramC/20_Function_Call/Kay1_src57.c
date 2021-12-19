
/* 1
#include<stdio.h>

void sayHelloKay(void);

int main()
{
    printf("\n\nSTART");   //This is also using/calling the u.d.f "printf"
                           //Here "stdio.h" holds the declaration for it

    sayHelloKay();

    printf("\n\nSTOP");
    return 0;
}


void sayHelloKay(void)
{
    printf("\n\n***************************");
    printf("\nHello Yash Howz life going on in Ahmednagar college Sarda???");
    printf("\n\n***************************");


}

*/

/* //2  Function  Defination define Abc.c
#include<stdio.h>

void sayHelloKay(void);

int main()
{
    printf("\n\nSTART");   //This is also using/calling the u.d.f "printf"
                           //Here "stdio.h" holds the declaration for it

    sayHelloKay();

    printf("\n\nSTOP");
    return 0;
}

*/

/* 3
 #include<stdio.h>

// void sayHelloKay(void);
void sayHelloKay(void)   //globaly defination already declare function inside defination
{
    printf("\n\n***************************");
    printf("\nHello Yash Howz life going on in Ahmednagar college Sarda???");
    printf("\n\n***************************");


}

//void sayHelloKay(void);     //Senseless practice
 
int main()
{
    printf("\n\nSTART");   //This is also using/calling the u.d.f "printf"
                           //Here "stdio.h" holds the declaration for it

    sayHelloKay();  

    printf("\n\nSTOP");
    return 0;
}

*/

/* //4
#include<stdio.h>

int main()
{
    //1. void sayHelloKay(void);
    printf("\n\nSTART");   //This is also using/calling the u.d.f "printf"
                           //Here "stdio.h" holds the declaration for it
    //2.void sayHelloKay(void);
    sayHelloKay();

    //3. void sayHelloKay(void);  (error)
    printf("\n\nSTOP");
    return 0;
}


void sayHelloKay(void)
{
    printf("\n\n***************************");
    printf("\nArts Commerece and Science College");
    printf("\n\n***************************");


}

*/


#include<stdio.h>

void sayHelloKay(void);
/*1.void sayHelloKay(void);
void sayHelloKay(void);
void sayHelloKay(void);
*/
int main()
{
    
    printf("\n\nSTART");   
                            
    sayHelloKay();
   
    printf("\n\nSTOP");
    return 0;
}


void sayHelloKay(void)  
{
    printf("\n\n***************************");
    printf("\nOm College");
    printf("\n\n***************************");
}

/*   //Redefination not allowed
void sayHelloKay(void)
{
    printf("\n\n***************************");
    printf("\nHari College");
    printf("\n\n***************************");
}

void sayHelloKay(void)
{
    printf("\n\n***************************");
    printf("\nJay College");
    printf("\n\n***************************");
}
*/
