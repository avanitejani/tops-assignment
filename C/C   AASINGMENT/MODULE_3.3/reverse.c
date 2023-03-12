
// WAP to find reverse of string using recursion
#include <stdio.h>
void reverse()
{
    char a;
    scanf("%c", &a);

    if (a != '\n')
    {
        reverse();
        printf("%c\n", a);
    }
}
int main()
{
    char a;
    printf("enter sentence :", a);
    reverse();

    return 0;
}
