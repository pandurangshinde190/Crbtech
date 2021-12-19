// 1. Calculate average of marks ibtained by a student in 5 subject

#include<stdio.h>
int main(void)
{
    int m1,m2,m3,m4,m5;
    int total;
    float average;

    printf("\n Enter the marks obtained by the student in five subject : \n");

    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);

    // printf("\n\n%d %d %d %d %d ",m1, m2, m3, m4, m5);

    total =m1 + m2 + m3 + m4 +m5;

    //average =(float) total / 5;
    //The expression "total" whoses DT is "int" temporily (just for this statements)
    //would be converted to float

    // average = total /(float) 5;

    average =(float) total /(float) 5;
    printf("\nAverage of Marks is :%f",average);

    return 0;
}