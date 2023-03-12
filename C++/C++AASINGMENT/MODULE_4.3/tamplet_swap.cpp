
//  Write a program of to swap the two values using templates

#include <iostream>
using namespace std;

template <class t1, class t2>

class swaping
{
    t1 a;
    t1 b;

public:
    swaping(t1 a, t2 b)
    {
        this->a = a;
        this->b = b;
    }

    void swap()
    {
        a = a + b;
        b = a - b;
        a = a - b;
        cout << a << " " << b << endl;
    }
};

int main()
{

    swaping<int, float> t1(10, 50);
    t1.swap();
    return 0;
}
/*
#include<stdio.h>
int main()
{
    int k,r;
    printf("\nenter first number and second number :");
    scanf("%d %d",&k ,&r);
    k=k+r;
    r=k-r;
    k=r-k;
    printf("k=%d\n r=%d\n", k,r);


    return 0;
}
*/