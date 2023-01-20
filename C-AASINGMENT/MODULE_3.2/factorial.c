//WAP to print factorial of given number
#include<stdio.h>
int main()
{
    int i,factorial=1,num;
    printf("enter the number :");
    scanf("%d",&num);

    for( i=1; i<=num; i++ )
    {
        factorial=factorial*i;
        //n!=n*(n-1)!
    }
    printf("factorial of %d is: %d", num,factorial);
    return 0;
}