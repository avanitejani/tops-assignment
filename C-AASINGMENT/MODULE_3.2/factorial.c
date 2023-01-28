//WAP to print factorial of given number
#include<stdio.h>
int main()
{
    //n!=n
    //3=6   ->(3*2*1)
    //5=120 ->(5*4*3*2*1)
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