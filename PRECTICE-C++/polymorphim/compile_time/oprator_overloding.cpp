#include <iostream>
using namespace std;
class demo
{
    public:
    int a;
    int b;
    void getdata()
    {
        cout<<"enter two value"<<endl;
        cin>>a>>b;
    }
    void showdata()
    {
        cout << "a= "<<a<<"b= "<<b<<endl;
    }

    demo operator++(int)
    {
        a=a+80;
        b=b+50;
    }
};

int main()
{
    demo d1,d2,d3;
    d1.getdata();
    d1++;
    d1.showdata();

    d2.getdata();
    d2++;
    d2.showdata();

    d3.getdata();
    d3++;
    d3.showdata();

    return 0;
}
/*
classname operator symbol(PARAMETERS)
{
    body
}
*/

