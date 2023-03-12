#include <iostream>
using namespace std;
class demo
{
    public:
    int x,y;
    //copy constructor
    demo()
    {

    }
    demo(demo &obj1)
    {
        x=obj1.x;
        y=obj1.y;
    }
    void printvalue()
    {
        cout<<"x="<<x<<"y="<<y<<endl;
    }

};

int main()
{
    demo d1;
    d1.x=90;
    d1.y=54;
    d1.printvalue();
    demo d2=d1;
    demo d3=d2;
    d2.printvalue();
    d3.printvalue();
    return 0;
}


/*
classname(classname &objectname)
{
    body
}

classname object(values);

classname object1=object2
classname object1(object2)
*/

/*

c
data typ
variyeble
if eles_control stasment
loop
brek
continyu 
goto
file hendeling
switch
arry
function _ paramiter return value


c++
class
object
inharitanch
function over loding
opretor overloding



*/