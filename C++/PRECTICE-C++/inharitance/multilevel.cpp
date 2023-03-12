/*#include <iostream>
using namespace std;
class A
{
    public:
    int a=50,b=60;
    void subtraction()
    {
        int answer=a+b;
        cout<<"addition"<<answer<<endl;
    }
};

class B:public A
{
    public:
    int a=40,b=10;
    void subtraction()
    {
        int subtrac=a-b;
        cout<<"subtraction"<<subtrac<<endl;
    }
};

class C:public B
{
    public:
    int a=50,b=10;
    void multiplication()
    {
        int multi=a-b;
        cout<<"multiplication"<<multi<<endl;
    }
};



int main()
{
    A a1,a2,a3;
    B b1,b2,b3;
    C c1;
   // a1.addition();
   // b1.subtraction();
   c1.addition();
   c1.multiplication();
   c1.subtraction();
    
    return 0;
}
*/
#include <iostream>
using namespace std;
class A // parent class
{
public:
    int a = 50, b = 60;
    void addition()
    {
        int answer = a + b;
        cout << "Addition= " << answer << endl;
    }
};
class B : public A // child class
{
public:
    int m = 40, n = 10;
    void subtraction()
    {
        int subtract = m - n;
        cout << "aubtraction= " << subtract << endl;
    }
};
class C : public A
{
public:
    int x = 22, y = 11;
    void multiplication()
    {
        subtraction();
        int multiply = x * y;
        cout << "Multiplication= " << multiply << endl;
    }
};#include <iostream>
using namespace std;
class A // parent class
{
public:
    int a = 50, b = 60;
    void addition()
    {
        int answer = a + b;
        cout << "Addition= " << answer << endl;
    }
};
class B : public A // child class
{
public:
    int m = 40, n = 10;
    void subtraction()
    {
        int subtract = m - n;
        cout << "aubtraction= " << subtract << endl;
    }
};
class C : public A
{
public:
    int x = 22, y = 11;
    void multiplication()
    {
        subtraction();
        int multiply = x * y;
        cout << "Multiplication= " << multiply << endl;
    }
};
int main()
{
    A a1, a2, a3;
    B b1, b2, b3;
    C c1;
    c1.addition();
    c1.subtraction();
    c1.multiplication();
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


int main()
{
    A a1, a2, a3;
    B b1, b2, b3;
    C c1;
    c1.addition();
    c1.multiplication();
    c1.multiplication();
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
