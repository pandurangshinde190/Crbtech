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

     void accept()
     {
            if(length ==0)
            {
                delete str;
            }
            else
            {
                delete[]str;
            }
            char buff[256];
            cout << "\nEnter the String : " ;
            cin>>buff;

            length =strlen(buff);
            str = new char[length + 1];
            strcpy(str, buff);
     }
     
};




int main(void)
{
    cString s1;
    s1.display();

    cString s2("Pandurang");
    s2.display();

    s1.accept();
    s1.display();

    s2.accept();
    s2.display();

    return 0;
}