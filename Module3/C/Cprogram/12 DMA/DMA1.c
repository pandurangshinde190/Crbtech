#include<stdio.h>

/*
int main(void)
{
    int arr[5];
    int i;
    float average;
    int sum;

    printf("\n\nEnter the marks obtained in 5 subjects  : ");

    sum = 0;
    for (i = 0; i < 5; ++i)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = (float)sum / 5;

    printf("\nThe average is : %f", average);

    return 0;
}
*/

/*
Consider the total no. of subjects are not known in advance 
Say, user will provide it at run time
*/
/*
int main(void)
{
    int no;
    int i;
    float average;
    int sum;


    printf("\n\nEnter the total no of subject : ");
    scanf("%d",&no);

    //During program execution i.e. at run time we will know the value of "no"
    //So,now we need to create an array of type "int" and size "no"
    
    printf("\n\nEnter the marks obtained in 5 subjects  : ");

    int arr[no];
    //????????

    return 0;
}
*/

int main(void)
{
    int *arr;
    int no;
    int i;
    int sum;
    float average;

    printf("\nEnter the total number of subjects : ");
    scanf("%d", &no);



    //I want to create an array of size "no" and data type "int"

    //arr = (int*) malloc(20) ;
    arr = malloc(sizeof(int) * no);
   // arr = calloc(no, sizeof(int));

    //Just consider "arr" as an array of data type "int" and size "no"


    printf("\nEnter the marks obtained in %d subjects : ", no);

    sum = 0;
    for (i = 0; i < no; ++i)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    average = (float)sum / no;

    printf("\nThe average of marks is %f ", average);


    free(arr);


    return 0;
}
