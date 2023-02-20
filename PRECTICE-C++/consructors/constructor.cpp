#include <iostream>
using namespace std;
class calculator
{
public:
        int a,b,ans;
    calculator()//default constucto
    {
        cout<<"enter two valu";
        cin >> a>> b;
    }
    void addtion()
    {
        cout << "add=" << a+b;
    }
    void subtraction()
    {
        cout << "sub=" << a-b;
    }
    void multipliction()
    {
        cout << "sub=" << a*b;
    }    
    void divition()
    {
        cout << "sub=" << a/b;
    }    
    

};

int main()
{
    calculator st1;
    st1.addtion();
    st1. subtraction();
    
return 0;

}

/*
function declare
function define

returntype functionname (parameters)
{
    body
}

function calling

    functionname (parameters)

consructor is also a function but special

consructor we can not give name is same as classname

consructor will be called automatically we don't have to call consructor wen object is define


*/


























/*
#include<iostream>
using namespace std;

    class cricket
    {
        protected:
        int TOTAL_RUN;
        int TOTAL_METCH;
        int BEST_PER;

        public:
        void getdata(int TOTAL_RUN,int TOTAL_METCH,int BEST_PER)
        {
            this->TOTAL_RUN=TOTAL_RUN;
            this->TOTAL_METCH=TOTAL_METCH;
            this->BEST_PER=BEST_PER;
        }
        
    };
    class betsmen: public cricket
    {
        public:
        void showdata()
        {
            cout<<"Total run is "<<TOTAL_RUN<<endl;
            cout<<"Total metch is "<<TOTAL_METCH<<endl;
            cout<<"Average run is "<<(float)TOTAL_RUN/(float)TOTAL_METCH<<endl;
            cout<<"Overall performance is "<<BEST_PER<<endl;
        }
    };

int main()
{
    int a;
    int b;
    int c;
    cout<<"Enter Total run : ";
    cin>>a;
    cout<<"Enter Total metch : ";
    cin>>b;
    cout<<"Enter Overall best performance : ";
    cin>>c;

    betsmen b1;
    b1.getdata(a,b,c);
    b1.showdata();
return 0;
}
*/
