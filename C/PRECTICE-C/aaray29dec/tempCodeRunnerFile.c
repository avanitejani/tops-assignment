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