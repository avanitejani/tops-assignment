#include <stdio.h>
int main()
{
    int aary[10], big;
    for (int i = 0; i < 10; i++)
    {
        printf("enter number :");
        scanf("%d", &aary[i]);
    }
    big=aary[0];
    for (int i = 0; i < 10; i++)
    {
        if (aary[i] > big)
        {
            big = aary[i];
        }

        // printf("%d", aary[i]);
    }
    printf("%d is biggest", big);
    return 0;
}


/*

void performanc()
    {
        int ave[5], big;
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter the Average run of " << n << " players of your team :";
        cin>>ave[i];
    }
    big=ave[5];
    for (int i = 0; i < 5; i++)
    {
        if (ave[i] > big)
        {
            big = ave[i];
        }

        // printf("%d", aary[i]);
    }
        cout<<"the best performance is :"<<big;


*/