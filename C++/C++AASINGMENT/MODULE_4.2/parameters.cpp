/*
 Write a program to Mathematic operation like Addition, Subtraction,Multiplication, Division 
Of two number using different parameters and Function Overloading
*/

#include <iostream>
using namespace std;
class calculation
{
public:
    int a, b;

    void getdata(int a)
    {
        cin >> b;
        cout << "addition : " << a + b << endl;
    }
    void getdata(int a, int b)
    {
        cout << "subtraction : " << a - b << endl;
    }
    void getdata(int a, int d, int c)
    {
        cout << "multiplication : " << a * b << endl;
    }
    void getdata(int a, int b, int c, int d)
    {
        cout << "divition : " << a / b << endl;
    }
};

int main()
{

    calculation d1;
    int a, b;
    cout << "\n--------------------------------------\n";
    cout << "\nenter two value for addition : " << endl;
    cin >> a;
    d1.getdata(a);

    cout << "\n--------------------------------------\n";
    cout << "\nenter two value for subtraction : " << endl;
    cin >> a >> b;
    d1.getdata(a, b);

    cout << "\n--------------------------------------\n";
    cout << "\nenter two value for multiplication : " << endl;
    cin >> a >> b;
    d1.getdata(a, b, 0);

    cout << "\n--------------------------------------\n";
    cout << "\nenter two value for divition : " << endl;
    cin >> a >> b;
    d1.getdata(a, b, 0, 0);

    return 0;
}
