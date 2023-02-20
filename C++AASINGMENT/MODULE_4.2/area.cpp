/*
 Write a program to calculate the area of circle, rectangle and triangle using 
Function Overloading 
 Rectangle: Area * breadth 
 Triangle: ½ Area breadth 
 Circle: Pi * Area *Area

*/

#include <iostream>
using namespace std;
class area
{
    public:
    void a(int length, int width, int area)
    {
        //area of rectangle = length * width
        cout<<"area of rectangle : "<< length * width<<endl<<endl;
    }

    void a(int base, int height)
    {
        //area of triangle = 0.5*base*height
        cout<<"area of triangle : "<<  0.5 * base * height<<endl<<endl;
    }

    void a(int redius)
    {   
        //area of circle = PI * redius * redius
        cout<<"area of circle : "<< 3.14 * redius * redius<<endl<<endl;
    }
};

int main()
{
    area d1;

    int a,b;
    cout<<"enter two value of length and width to fine the area of rectangle :  ";
    cin>>a>>b;
    d1.a(a,b,0);

    
    cout<<"enter two value of base and height to fine the area of triangle :  ";
    cin>>a>>b;
    d1.a(a,b);
    


    cout<<"enter one value of redius to find the area of circle : ";
    cin>>a;
    d1.a(a);
    
    
    

    return 0;
}
