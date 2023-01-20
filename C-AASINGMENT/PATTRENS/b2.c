/*
A
B C
D E F
G H I J
K L M N O
*/
#include <stdio.h>
main()
{
    for (int a = 65; a <= 80; a++)
    {
        for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%c ", a);
                a++;
            }
            printf("\n");
        }
    }

    return 0;
}