#include<stdio.h>
int main()
{
    int aary[3];
    int i;
    int j;
    for (int i = 0; i < 3; i++)
    {
        printf("enter number :\n");
        scanf("%d",&aary[i]);
        for(j=1;j<11;j++)
        {
            printf("\n%d*%d=%d",aary[i],j,aary[i]*j);
        }
    }
    return 0;
} 
