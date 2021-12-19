#include<stdio.h>
int main(void)
{
    char ch;

    printf("\nEnter any character : ");
    scanf("%c",&ch);

    //Check if it's representing an alphabate
    //if Yes, then convert it into the opposite cases

/*
  if((( ch>=65 )&&( ch<= 90)) || ((ch >= 97)&&(ch <= 122)))
  {
     
     //Just identify if it's Capital case. If yes then simply add 32
     //to ch for converting it into small case
     //else
     //them simply substract 32 from ch for converting it into capital case
      
        if((ch >=65) && (ch <= 90))
        {
            ch +=32;// ch =ch +32;
        } 
        else
        {
            ch-=32;// ch = ch -32;
        }
         printf("\nThe Opposite case alphabate would be : %c ",ch);

  }
  else
  {
      printf("\nNope!!! It's not an alphabate. So, no question of upper or loaver cases. ");
  }
  */


    if((ch >= 65) && (ch <= 90))
    {
        ch +=32; // ch = ch +32;
        printf("\nThe Opposite case alphabate would be : %c ",ch);
    }
    else
    {
        if((ch >=97) && (ch <= 122))
        {
            ch -=32;// ch = ch-32;
            printf("\nThe Opposite case alphabate would be : %c ",ch);
        }
        else
        {
            printf("Its not an alphabate");
        }
    }  

    return 0;
} 