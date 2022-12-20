//WAP fibonnaci series up to given number
#include<stdio.h>
int main()
{
    int number, i=0, n1=0, n2=1 ,fibonnaci;
    printf("enter the number of elements :");
    scanf("%d",&number);

    while(i<number)
    {
        if(i <= 1)
        {
            fibonnaci = i;
        }
        else
        {
            fibonnaci=n1+n2;
            n1=n2;
            n2=fibonnaci;
        }
        printf("%d\t",fibonnaci);
        i++;
    }
    return 0;
}