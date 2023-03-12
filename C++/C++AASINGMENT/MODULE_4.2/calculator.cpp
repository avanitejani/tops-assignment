//  WAP to create simple calculator using class

#include <iostream>
using namespace std;

class calculation
{
public: 
    int a, b;
    void getdata()
    {
        cout << "enter two number : ";
        cin >> a >> b;
    }
    void putdata()
    {
        cout << "addition =" << a + b << endl;
        cout << "subtraction =" << a - b << endl;
        cout << "multiplication =" << a * b << endl;
        cout << "divition =" << a / b << endl;
    }
};

int main()
{
    calculation ob1, ob2, ob3;

    ob1.getdata();
    ob1.putdata();
        cout << endl ;
    ob2.getdata();
    ob2.putdata();

    return 0;
}

/*int main()
{
    calculation ob1, ob2, ob3,ob4;
    ob1.getdata();
    ob1.addtion();
    ob2.getdata();
    ob2.subtraction();
    ob3.getdata();
    ob3.multipliction();
    ob4.getdata();
    ob4.divition();

    //cout << " ";
    return 0;
}
*/