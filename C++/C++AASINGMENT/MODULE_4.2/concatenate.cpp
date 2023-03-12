// Write a program to concatenate the two strings using Operator Overloading

#include <iostream>
#include <string.h>
using namespace std;
class string
{
public:
    char s1[25];
    char answer[25];
    // int s2[25];
    void getdata(/*char str1[], char str2[]*/)
    {
    
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter string : ";
            cin >> s1[i];
        }

    }
    void showdata(/*char str1[], char str2[]*/)
    {
        for (int i = 0; i < 5; i++)
        {
            cout << s1[i] << " ";
        }
    }

    
    string operator+(string obj)
    {
        for (int i = 0; i < 5; i++)
        {
            answer[i] = s1[i] + obj.s1[i];
            cout << answer[i] << " ";
        }
    }
};

int main()
{
    string  s1, s2;
    s1.getdata();
    s2.getdata();
    s1 + s2;


    return 0;
} // cancal
