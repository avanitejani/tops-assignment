/*
A
A B
A B C
A B C D
A B C D E
*/
#include <stdio.h>
int main()
{
    int a=65;
        for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= i ; j++)
            {

                printf("%c ", a);
                a++;
            }
            a=65;
            printf("\n");
        }
    return 0;
}