#include <stdio.h>
int main()
{
    int aar[100], i, j, temp, size;
    printf("\n please enter the number of counting:\n");
    scanf("%d", &size);

    printf("\n please enter %d elements \n", size);
    for (i = 0; i < size; i++)
    {
        // printf("enyer the number: \n");
        scanf("%d", &aar[i]);
    }
    for (int i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (aar[i] > aar[j])
            {
                temp = aar[i];
                aar[i] = aar[j];
                aar[j] = temp;
            }
        }
    }
    printf("\n array of elements in ascending oder are : \n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", aar[i]);
    }

    return 0;
}
