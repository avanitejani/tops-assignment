/*
Create a class person having members name and age.
Derive a class student having member percentage. 
Derive another class teacher having member salary. 
Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance) 
*/

#include<iostream>
using namespace std;
class person  //Create a class person having members name and age.   //parence
{
    public:
    string name;
    int age;

    void members()
    {
        //cin.ignore();
        cout<<"-------------------------\n";
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);//cin.ignore();
        cout << "Enter Age: ";
        cin >> age;
        
    }
};
class student:public person  //Derive a class student having member percentage.   //child
{
    public:
    float percent;
    void percentage()
    {
        cout<<"enter student percentage= ";
        cin>>percent;
    }
};
class teacher:public person //Derive another class teacher having member salary.  /child
{
    public:
    int salar;
    void salary()
    {
        cout<<"enter techer salary = ";
        cin>>salar;
    }
};
int main()
{
    //person a1;
    student s1;
    teacher t1;
    s1.members();
    s1.percentage();
    t1.members();
    t1.salary();
    
    return 0;
}