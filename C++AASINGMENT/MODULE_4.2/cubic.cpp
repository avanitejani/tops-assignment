// Write a program to find the multiplication values and the cubic values using inline function
#include <iostream>
using namespace std;
class cubic
{
public:
    inline int multiplication(int a, int b)
    {
        return (a * b);
    }
    inline int cube(int c)
    {
        return (c * c * c);
    }
};

int main()
{
    cubic c1;
    int n1, n2;

    cout << "enter two value :\n";
    cin >> n1 >> n2;

    cout << " \ntwo value multiplication  is : " << c1.multiplication(n1, n2) << endl;

    cout << " \ncubic\n"
         << n1 << " cubic value is : " << c1.cube(n1) << " \n"
         << n2 << " cubic value is : " << c1.cube(n2);

    return 0;
}
