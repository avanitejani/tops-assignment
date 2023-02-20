/*
 Assume a class cricketer is declared.
 Declare a derived class batsman from cricketer.
 Data member of batsman.
 Total runs, Average runs and best performance.
 Member functions input data, calculate average runs, Display data. (Single Inheritance)
*/


#include <iostream>
#include <string.h>

using namespace std;
class cricket
{
public:
    struct batsman
    {
        char name[10];
        int totalrun;
        int outt, inning;
    };

    int n, m, average, totalrun, inning;
    float ave;
    char name;

    void inputdata()
    {
        int n, m, average, totalrun, inning;
        cout << "total Member form crikete team :" << endl;
        cin >> m;

        cout << "total batsman form crikete team :" << endl;
        cin >> n;

        struct batsman b[n];
        cout << "you have " << n << "  batsman form crikete team :" << m << endl;

        for (int i = 0; i < n; i++)
        {
            cout << "\n enter a player name :";
            cin >> b[i].name;

            cout << " total run :";
            cin >> b[i].totalrun;

            cout << " total inning or metch :";
            cin >> b[i].inning;

            cout << " avarage run " << b[i].totalrun / b[i].inning;
            // ave=(totalrun/inning);
        }
    }
};
class batsma : public cricket
{
public:
    struct bats
    {
        int outt, inning, totalrun, performance, big;
        int aary[10], average;
    };

    int n, m, average, totalrun, inning, performance, big;
    float ave;
    char name;

    void dispay()
    {
        int n, m, average, totalrun, inning, ave;

        struct bats b[n];

        for (int i = 0; i < n; i++)
        {
            cout << " total run :";
            cin >> b[i].totalrun;

            cout << " total inning or metch :";
            cin >> b[i].inning;

            cout << " avarehe run " << b[i].totalrun / b[i].inning;
            b[i].average = b[i].totalrun / b[i].inning;

            /*strcpy(b[i].ave, b[i].average);

             big=b[i].ave;
             for(i=0;i<ave;i++)
             {
                 if(b[i].ave>big)
                 {
                     big = b[i].aary;
                 }
         cout<<"the best performance is :"<<big;*/
        }
    }
    /*int ave[100];
    for (int i = 0; i < ave; i++)
    {

        cout << "Enter the Average run of " << n << " players of your team";
        cin >> ave;
    }
    big=ave;
        for(i=0;i<ave;i++)
        {
            if(ave>big)
            {
                big = ave;
            }
    cout<<"the best performance is :"<<big;
        }*/
    // void performanc()
    //{
    //}
};

int main()
{

    cricket c1;
    batsma b1;
    b1.inputdata();

    b1.dispay();
    // b1.performanc();

    return 0;
}

