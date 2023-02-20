// Write a program of to sort the array using templates.
#include<iostream>
using namespace std;

    template<class t1>
    class sort
    {
        public:
        void array()
        {
            t1 i,j,max;
            t1 a[5];

            for (int i = 0; i < 5; i++)
            {
                cout<<" Enter array elements :";
                cin>>a[i];
            }

            for (int i = 0; i < 5; i++)
            {
                for(int j = i + 1; j < 5; j++)
                {
                    if(a[i] > a[j])
                    {
                        max = a[i];
                        a[i] = a[j];
                        a[j] = max;
                    }
                }
                cout<<a[i]<<" ";
            }
            
        }
    };

int main()
{

    sort<int> s1;
    s1.array();

    return 0;
}
/*
c small in prectice

#include <stdio.h>
int main()
{
    int aary[10], small;
    for (int i = 0; i < 10; i++)
    {
        printf("enter number :");
        scanf("%d", &aary[i]);
    }
    small=aary[0];
    for (int i = 0; i < 10; i++)
    {
        if (aary[i] < small)
        {
            small = aary[i];
        }

        // printf("%d", aary[i]);
    }
    printf("%d is smallest", small);
    return 0;
}

*/