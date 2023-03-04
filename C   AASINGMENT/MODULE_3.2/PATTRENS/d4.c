/*

*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
*

*/
#include <stdio.h>
main()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = 1; i <= 7 - 1; i++)
    {
        for (int j = 0; j < 7 - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}