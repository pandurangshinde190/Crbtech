#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a, b;
    int Result;
    int choice;

    printf("\nEnter the value for a and b : ");
    scanf("%d%d", &a, &b);

    printf("\n\n1. Add\n2. Substraction\n3. Multiple\n4. Divide");
    printf("\nEnter your choice(1,2,3,4) :");
    scanf("%d",&choice);

    if(choice == 1)
    {
        Result = a +b;
        printf("\n\nResult is : %d",Result);
    }
    else
    {
        //Value of choice not equal to 1
        //It could be 2,3,4,5,6,0,-10,55 or anything(other than 1)

        if(choice == 2)
        {
             Result = a - b;
             printf("\n\nResult is : %d",Result);
        }
        else
        {
            if(choice == 3)
            {
                 Result = a * b;
                 printf("\n\nResult is : %d",Result);
            }
            else
            {
                if(choice == 4)
                {
                         
                         printf("\n\nResult is : %f",(float)a/b);
                }
                else
                {
                    //It's an invalid choice
                    //Value of chice is not - 1,2,3 or 4

                    printf("\nInvalid Choice");
                    exit(1);
                }
            }
        }
    }
    printf("\n\nOut side Of if-else");

    return 0;

}