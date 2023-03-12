// Write a program of Addition, Subtraction, Division, Multiplication using constructor.
#include <iostream>
using namespace std;
class constructor
{
public:
    int a, b;
    constructor(int a)
    {
        cout << "enter two value for addition" << endl;
        cin >> a >> b;
        cout << "addition =" << a + b << endl;
    }
    constructor(int a, int b)
    {
        cout << "enter two value for subtraction" << endl;
        cin >> a >> b;
        cout << "subtraction =" << a - b << endl;
    }
    constructor(int a, int d, int c)
    {
        cout << "enter two value multiplication" << endl;
        cin >> a >> b;
        cout << "multiplication =" << a * b << endl;
    }
    constructor(int a, int b, int c, int d)
    {
        cout << "enter two value divition" << endl;
        cin >> a >> b;
        cout << "divition =" << a / b << endl;
    }
};

int main()
{

    constructor d1(0), d2(0, 0), d3(0, 0, 0), d4(0, 0, 0, 0);

    return 0;
}
