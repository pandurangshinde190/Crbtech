#include<stdio.h>
int main(void)
{
    int a,b;
    int choice;

    printf("\nEnter two integers :");
    scanf("%d%d",&a,&b);

    printf("\n\n1 Add\n2 Substact\n3 Multilpy\n4. Divide\nEnter your choice : ");
    // scanf("%d",&choice); 
    // switch(scanf("%d",&choice))
    // switch(printf("AA")) //It's a valid expression
    switch(3)
    {
        case 1 :printf("Result is :%d",a+b);
                break;

        case 2 :printf("Result is :%d",a-b);
                break;

        case 3 :printf("Result is :%d",a * b);
                break;

        case 4 :printf("Result is :%d",a/b);
                break;
                
        default :
            printf("\nWrong choice............");
            break;        
       
    }
    return 0;
}