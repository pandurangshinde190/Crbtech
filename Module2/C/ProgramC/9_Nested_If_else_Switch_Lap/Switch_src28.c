#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a, b;
    int choice;
    int flag =2;

    printf("\nEnter the value for a and b : ");
    scanf("%d%d", &a, &b);

    printf("\n\n1. Add\n2. Substraction\n3. Multiple\n4. Divide");
    printf("\nEnter your choice(1,2,3,4) :");
    scanf("%d",&choice);

   switch (choice)
   {
   case 1 :     printf("\nResult is :%d ",a+b);
                break;


   case 2 :     printf("\nResult is : %d",a-b);  //expression must have constant value
                break;

   case 3 :     printf("\nResult is : %d",a*b);
                break;

   case 4 :     printf("\nResult is : %f",(float)a/b);
                break;

   default:     printf("\n\nInvalid choice");
                break;
  
   }

   printf("\n\nOut of switch");

    return 0;

}