#include<stdio.h>
int main(void)
{
    int radius =5;
    float area;
    float perimeter;

    area =3.14f * radius *radius ;
    perimeter = 2 * 3.14f * radius;

    printf("\nArea Of Circle is :%f sq.Units",area);
    printf("\nPerimeter of Cirlce i :%f Units",perimeter);
    return 0;
}

//Area ---> 3.14f * radius * radius

//perimeter/circumference --> 2 * 3.14f * redius

