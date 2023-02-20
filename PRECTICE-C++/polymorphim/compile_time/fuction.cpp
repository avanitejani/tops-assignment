#include <iostream>
using namespace std;

class demo
{
    public:
    void calculation()
    {
        cout<<"eithour parameter function called"<<endl;
    }
    void calculation(int a)
    {
        cout<<"value of a is"<<a<<endl;
    }
    void calculation(int a,int b)
    {
        cout<<"value of a is "<<a<<"b is"<<b<<endl;
    }


};
int main()
{
    demo d1;
    d1.calculation();
    d1.calculation(58);
    d1.calculation(48,34);
    return 0;
}
/*
Poly ----many----bahot sareee
morphism  ---forms---roop

polynorphism has two types

compile time polymorphism
    function overloading
    operator overloading

Run time Polymorphism
    virtual function


*/