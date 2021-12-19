#include<string.h>
#include<iostream>
using namespace std;

class cString
{
    private : 
        // char str[256]
        char *str;
        int length;
    public :

     cString()
     {
         length =0;
         str =new char('\0');
         
     }

     cString(const char *ptr)
     {
         length =strlen(ptr);
         str= new char[length + 1];
         strcpy(str, ptr);
     }

        //cString s2 =s1; 
        //cString s2(s1);

        // cString(cString x==s1)
        cString(const cString &s1)
        {
            cout << "\nI am inside the copy constructor ";
            length = s1.length;
            str =new char[length + 1];
            strcpy(str, s1.str);
        }

        ~cString()
        {
            if(length ==0)
            {
                delete str;
            }
            else
            {
                delete[]str;
            }
        }

     void display()
     {
         cout << "\nString is : " << str;
         cout << "\nlength is : " << length;
     }

   
     
};




int main(void)
{
   
   //Copy Constructor
   cString s1("Yash");

    //cString s2 =s1; //For s2 c.c will be involed. Bcz it's initialization
    cString s2(s1);

    s2.display();
    
    return 0;
}