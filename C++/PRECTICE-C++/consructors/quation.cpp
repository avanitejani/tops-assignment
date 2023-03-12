#include <iostream>
using namespace std;
class calculator
{
public:
    calculator()//default constucto
    {
        cout<<"good morning"<<endl;
    }
    calculator(int i)//one peramiter constucto
    {
        cout << "square=" << i<<endl;
    }
    calculator(int o, int p)
    {
        cout << "nmultiplication=" << o*p<<endl;
    }
    calculator(float x,int y,int z)
    {
        cout<<"area="<<0.5 * y * z <<endl;
    }

};

int main()
{
    calculator ob1,ob2(2),ob3(25,3), ob4(0.5,5,8);
    

    
return 0;

}
/*
#include <iostream>
using namespace std;
class calculator
{
public:
    int a,b,ans;
    calculator()//default constucto
    {
        cout<<"good morning";
    }
    calculator(int i)//one peramiter constucto
    {
        cout<<"enter value of square";
        cin >> a;
        cout << "square=" << a*a;
    }
    calculator(int o, int p)
    {
        cout<<"enter two value of nmultiplication";
        cin >> a>> b;
        cout << "nmultiplication=" << a*b;
    }
    calculator(int x,int y,int z)
    {
        cout<<"enter two value of area of traingle ";
        cin >> a>> b;
        cout<<"area="<<0.5 * a * b;
    }

};

int main()
{
    calculator ob1;ob2(a);ob3(a,b);ob4();
    
return 0;

}
*/