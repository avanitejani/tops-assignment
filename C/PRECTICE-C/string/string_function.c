#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    int a;
    printf("Enter String: ");
    gets(name);
    a = strlen(name);
    printf("length of string = %d\n", a);
    a = strupr(name);
    printf("uprcase of string = %s \n", a);
    a = strlwr(name);
    printf("lwrcase of string = %s \n", a);
    a = strrev(name);
    printf("revrse of string = %s  \n", a);
    // printf("Name=%s", name);

    return 0;
}