#include <iostream>
using namespace std;
class demo
{
public:
    int l = 10;

private:
    int m = 20;

protected:
    int n = 30;

    friend void show(demo &obj);
};
void show(demo &obj)
{
    cout << "l= " << obj.l << "m= " << obj.m << "n= " << obj.n;
}
int main()
{
    demo d1;
    show(d1);
    return 0;
}

/*
properties of friend function
1. not in the scope of class
2. since it is not in the scope of the class , it cannot be called be called from the objec of
   that class. c1. sumdemo() == invalid
3. can be invoked without the help of any object
4. usually contans the objects as arguments 
5. can be declared inside public or privet section of the class
6. ti can not access the members directly by their by their names and need object_name.member_name to access any member.


*/