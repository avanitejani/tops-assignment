//WAP to swap two numbers without using third variable.
#include<stdio.h>
int main()
{
    int k,r;
    printf("\nenter first number and second number :");
    scanf("%d %d",&k ,&r);
    k=k+r;
    r=k-r;
    k=r-k;
    printf("k=%d\n r=%d\n", k,r);


    return 0;
}