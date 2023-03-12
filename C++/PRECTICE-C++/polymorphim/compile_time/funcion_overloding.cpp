#include <iostream>
#include <cmath>
using namespace std;
class demo
{
    public:
    void calculation()
    {
        int a;
        cout<<"enter value"<<endl;
        cin>>a;
        cout<<"square root="<<sqrt(a)<<endl;

    }
    void calculation(int a)
    {
        cout << "square="<<a*a<<endl;

    }
    void calculation(int a,int b )
    {
        cout << "nmultiplication=" <<a*b;
    }


};
int main()
{
    demo d1;
    d1.calculation();//khali peramarter nu value  function ma levani


    //value uper send krva mate
    int a;
    cout<<" enter value of aquare root ";
    cin>>a;
    d1.calculation(a); // ex... user will entered 81 ,answer will be declered ---> 9


    //direct value lidheli 6e
    d1.calculation(9,5);//40
    return 0;
}

/*
in function overloding we have multiple function of same name 
within one class.

but the numbers of parameters will be different

one object can call all this function by passing different parameters 
*/