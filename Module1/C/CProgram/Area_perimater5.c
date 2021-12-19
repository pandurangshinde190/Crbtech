#include<stdio.h>
int main(void)
{
    int radius; //No Hardcoded value is there for "radius"
                //W'll accept the value from the user(introduction to the built in function - scanf)

    float area,perimeter;

    printf("\n\nEnter the value for radius : ");
    scanf("%d",&radius);

    area=3.14f * radius *radius;
    perimeter =2 * 3.14f * radius;

    printf("\nArea of cirle is :%f",area);
    printf("\nperimeter of circle is :%f",perimeter);    
    return 0;            
}


