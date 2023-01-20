#include<stdio.h>
main()
{
    int m=4,n=1;
    int u=1,v=4;
    for(int i=1;i<=10;i++)
    {
        if(i<6)
        for(int j=1;j<=m;j++)
        {
            printf(" ");
        }
        m--;
        for(int k=1;k<=n;k++)
        {
            printf("* ");
        }
        n++;
        printf("\n");
        for(int a=5;a>=5;a--)
        {
            printf(" ");
        }
        u++;
        for(int b=1;b<=n;b++)
        {
            printf("* ");
        }
        v--;
    }

    return 0;
}
/* 
for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        


for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
   */