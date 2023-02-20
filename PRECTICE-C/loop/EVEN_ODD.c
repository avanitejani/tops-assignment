#include<stdio.h>
int main()
{
    int n,i=1,even=0,odd=0;
    printf("enter number");
    scanf("%d",&n);
    
    for(i=1;1<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d is even",i);
        } //even++;
        else
        {
            printf("%d is odd",i);
        }
    }

    return 0;
} 
