// WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice
#include <stdio.h>

int main()
{
    int a[20], n, i, j;
    printf("array size :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\n\n.............\n");



/////////////////////////////////////////////////////////////////////////////////////

    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)

        {
            if (a[j] > a[i])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    printf("\n\nascending :");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n\n..............\n");




///////////////////////////////////////////////////////////////////////////////////////////////    
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)

        {
            if (a[j] < a[i])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    printf("\n\ndescendimg :");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n\n.................\n");
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////