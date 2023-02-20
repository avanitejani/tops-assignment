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