/*
Assume that the test results of a batch of students are stored in three different classes. 
Class Students are storing the roll number.
Class Test stores the marks obtained in two subjects and class result contains the total marks obtained in the test. 
The class result can inherit the details of the marks obtained in the test and roll number of students. (Multilevel Inheritance) 

*/

#include <iostream>
using namespace std;
class student // child class
{
public:
    int rollnum;
    void rollnumber()
    {
        cout << "Enter roll number : ";
        cin >> rollnum;
    }
};
class test
{
public:
    int mark1,mark2;
    void marks()
    {
        cout << "Enter marks of subject 1 : " ;
        cin >> mark1;
        cout << "Enter marks of subject 2 : " ;
        cin >> mark2;
    }
};
class result : public student , public test
{
public:
    int totalmark;
    void totalmarks()
    {
        totalmark = mark1 + mark2;
        cout << "totalmarks of two subject is : " << totalmark << endl;
        //cin >> totalmark;
    }
};
int main()
{
    student a1;
    test b1;
    result c1;
    c1.rollnumber();
    c1.marks();
    c1.totalmarks();
    return 0;
}