#include<stdio.h>
int main(void)
{
    char ch;

    printf("\nEnter any character : ");
    scanf("%c",&ch);

 /*   
  if((( ch>=65 )&&( ch<= 90)) || ((ch >= 97)&&(ch <= 122)))
  {
      printf("\nYes !!! It's an alphabate ");
  }
  else
  {
      printf("\nNope!!! It's not an alphabate ");
  }
*/

// ((( ch>=65 )&&( ch<= 90)) || ((ch >= 97)&&(ch <= 122))) ? (printf("\nYes !!! It's an alphabate ")) : (printf("\nNope!!! It's not an alphabate "));
    return 0;
}