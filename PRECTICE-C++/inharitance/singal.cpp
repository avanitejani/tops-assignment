#include <iostream>
using namespace std;
class a
{
    public:
    int a=50,b=60;
    void addition()
    {
        int answer=a+b;
        cout<<"addition"<<answer<<endl;
    }
};

class b:public a //child class
{
    public:
    int a=50,b=10;
    void subtraction()
    {
        int subtrac=a-b;
        cout<<"subtraction"<<subtrac<<endl;
    }
};


int main()
{
    a a1,a2,a3;
    b b1,b2,b3;
    b1.addition();
    b1.subtraction();
    
    return 0;
}
/*
parent class /super class/ base class

child class/sub class/derived class

types of inheritance

1_single inheritance
2_Multilevel inheritance
3_multiple inheritance
4_hierarchical inheritance
5_hybrid inheritance


*/