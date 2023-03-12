#include <stdio.h>
//
void function1(int a)
{
    if (a > 0)
    {
        printf("%d  ", a);
        function1(a - 1);
    }
}

int main()
{
    function1(9);

    return 0;
}