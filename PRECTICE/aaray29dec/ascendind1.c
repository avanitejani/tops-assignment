#include <stdio.h>
int main()
{
    int arry[10], i, j, num, ascending;
    printf("enter the 10 number :\n");
    // scanf("%d",&num);

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arry[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (arry[i] > arry[j])
            {
                ascending = arry[i];
                arry[i] = arry[j];
                arry[j] = ascending;
            }
        }
    }
    printf("\n array of elements in ascending oder are :");
    for (i = 0; i < num; i++)
    {
        printf("%d\t", arry[i]);
    }
    return 0;
}