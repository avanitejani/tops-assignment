
// Write a Program of Two 1D Matrix Addition using Operator Overloading

#include <iostream>
using namespace std;
class calculation
{
public:
    int array1[5];
    int answer[5];
    void getdata()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter VAlue: ";
            cin >> array1[i];
        }
    }
    void showdata()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << array1[i] << " ";
        }
    }
    calculation operator+(calculation obj)
    {
        for (int i = 0; i < 5; i++)
        {
            answer[i] = array1[i] + obj.array1[i];
            cout << answer[i] << " ";
        }
    }
};
int main()
{
    calculation c1, c2, c3;
    c1.getdata();
    c2.getdata();
    c1 + c2  ;

    //c3.getdata();
    //c1 + c2 + c3 ;
    // c1.+(c2);
}

/*
classname operator symbol(PARAMETERS)
{
    body
}
*/
