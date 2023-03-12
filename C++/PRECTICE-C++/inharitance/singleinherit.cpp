#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
float a=29.5646857651351468;
cout<<setprecision(5)<<a;
return 0;
}
#include <iostream>
using namespace std;
class A
{
public:
    void display()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Hello" << endl;
        }
    }
};
class B : public A
{
public:
    void display()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Hello" << endl;
        }
    }
};
int main()
{
    A a1;
    B b1;
    a1.display();
    b1.display();
    
    return 0;
}