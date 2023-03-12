//Write a program to swap the two numbers using friend function without using third variable 

#include <iostream>
#include <conio.h>
using namespace std;
class swaping
{
    int x, y, q;

public:
    void input()
    {
        cout << "Enter Two Numbers :";
        cin >> x >> y;
    }
    friend void swap(swaping &t);
    void display()
    {
        cout << "After Swap x is :" << x;
        cout << "After Swap y is :" << y;
    }
};
void swap(swaping &t)
{
    t.q = t.x;
    t.x = t.y;
    t.y = t.q;
}
int main()
{
    swaping s1;
    s1.input();
    swap(s1);
    s1.display();
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