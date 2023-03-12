#include <iostream>
using namespace std;
class calculation
{
public: //after public colon colon
    static int x;
    int a,b,ans;
    void getdata()
    {
        cout << "enter number :";
        cin >> a>> b;
    }
    //void putdata()
    void putdata()
    {
        ans=a+b;
        cout << "ans=" << ans << endl;
    }

};
// int calculation::x=50;

/*
void getdate upr ni badle aya curly breket ni niche pn lakhi skvi aavi rite |
                                                                            V
void calculation::getdata()
{
    cout << "Enter Number : ";
    cin >> a >> b;
}*/


int main()
{
    calculation ob1, ob2, ob3;
    ob1.getdata();
    ob1.putdata();
    ob2.a = 85;
    ob2.b = 35;
    ob2.putdata();
    return 0;
}
