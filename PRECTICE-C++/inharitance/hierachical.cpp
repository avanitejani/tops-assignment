#include <iostream>
using namespace std;
class person
{
public:
    int age;
    string name;
    string email;
    void getdata()
    {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Email: ";
        cin >> email;
    }
};
class student : public person
{
public:
    int rollno;
    string course;
    void getstudent()
    {
        cout << "Enter Rollno: ";
        cin >> rollno;
        cout << "Enter Course: ";
        cin >> course;
        cin.ignore();
    }
};
class faculty : public person
{
public:
    int fid;
    string subject;
    void getfaculty()
    {
        cout << "Enter Faculty ID: ";
        cin >> fid;
        cout << "Enter Subject: ";
        cin >> subject;
    }
};
int main()
{
    student s1;
    faculty f1;
    s1.getdata();
    s1.getstudent();
    f1.getdata();
    f1.getfaculty();
    return 0;
}
/*
firnd funtion 
firnd funtion privet 
*/