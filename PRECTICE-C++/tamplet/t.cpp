#include <iostream>
using namespace std;
template<class t1>//t2 bijo class banava mate
class calculator
{
    public:
    t1  a,b;
    calculator()//default constucto
    {
        cout<<"enter two value :";
        cin >> a>> b;
    }
    void addition()
    {
        t1 add=a+b;
        cout <<"addition :"<<add;
    }
    void subtarction()
    {
        t1 sub=a-b;
        cout <<"subtraction :"<<sub;
    }
};

int main()
{

    calculator<int> c1;
    calculator<float> c2;
    c1.addition();
    c1.subtarction();
    c2.addition();
    c2.subtarction();
    return 0;
}
