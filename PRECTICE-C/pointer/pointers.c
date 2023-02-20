#include <stdio.h>
int main()
{
    int a=85;
    int *k=&a;
    int **m=&k; //pointer to pointer  double pointer
    printf("%p\n",*k);
    printf("%d",a);
    // printf("sfdjkg\b\b\berjkg\b"); // \b--backsapce

    return 0;
}
/*
pointer is nothing but just a variable which stores address of another variable

a+b*9-c
9+8

*/