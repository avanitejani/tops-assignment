/*#include <iostream>
using namespace std;
class A//parent
{
    public:
    int a=50,b=60;
    void subtraction()
    {
        int answer=a-b;
        cout<<"addition"<<answer<<endl;
    }
};

class B //parent
{
    public:
    int n=50,m=10;
    void subtraction()
    {
        int subtrac=n-m;
        cout<<"subtraction"<<subtrac<<endl;
    }
};

class C:public A,public B
{
    public:
    //classname::
    A::subtraction();
    int x=50,y=10;
    void multiplication()
    {
        int multi=x*y;
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
    void subtraction()
    {
        int answer = a + b;
        cout << "Addition= " << answer << endl;
    }
};
class B // child class
{
public:
    int m = 40, n = 10;
    void subtraction()
    {
        int subtract = m - n;
        cout << "aubtraction= " << subtract << endl;
    }
};
class C : public A, public B
{
public:
    int x = 22, y = 11;
    void multiplication()
    {
        // classname::
        A::subtraction();
        int multiply = x * y;
        cout << "Multiplication= " << multiply << endl;
    }
};
int main()
{
    A a1;
    B b1;
    C c1;
    c1.A::subtraction();
    c1.B::subtraction();
    c1.multiplication();
    return 0;
}