// WAP to make a summation of given number .
#include<stdio.h>
int main()
{
    int n,sum =0, i;
    printf("enter the number of n :",n);
    scanf("%d",&n);
    while(n>0)
    {
        i=n%10;
        sum+=i;
        n/=10;
    }
    printf("sun of number %d ",sum);
    return 0;
}
