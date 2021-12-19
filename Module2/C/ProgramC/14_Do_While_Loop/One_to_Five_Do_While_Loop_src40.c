#include<stdio.h>
int main(void)
{
    int i;
    /*
    i =1;
    do
    {
        printf("\n%d",i);
        ++i;
    } while (i <= 5);

    printf("\n%d",i);
    */
/*
    i =1;
    do
    {
        printf("\n%d",i);
        ++i;
    } while (i >= 5);

    printf("\n%d",i);
*/

/*
 i =1;
    do
    {
        printf("\n%d",i);
        ++i;
    }
    
    while (i <= 5);
*/


// Compile Time Error : Expected "while"
/*
 i =1;
    do
   
        printf("\n%d",i);
        ++i;
     while (i <= 5);
*/

/*
i =1;
    do
    {
        printf("\n%d",i++);
        
    }
    while (i <= 5);
*/
/*
i=1;
 do 
    printf("\n%d",i++);
        
while (i <= 5);
*/

//The below code is invalid.
// You can't represent a empty body without specifying the {}
/*
i=1;
 do

 while (i <= 5);
 */


/*
i=1;
 do
 {

 }while (i <= 5);
*/

/*
i=1;
 do
 {
     break;
 }while (i <= 5);

 printf("\nOutside of the loop");

*/

 return 0;
}