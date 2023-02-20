#include<stdio.h>
int main()
{
    int num;
    printf("enter your number \n:");
    scanf("%d",&num);

    if(num==1)
    {
        printf("sunday");
    }    
    else if(num==2)
    {
        printf("monday");
    }
    else if(num==3)
    {
        printf("tuseday");
    }
    else if(num==4)
    {
        printf("wenrsday");
    }
    else if(num==5)
    {
        printf("thursday");
    }
    else if(num==6)
    {
        printf("friday");
    }
    else if(num==7)
    {
        printf("seterday");
    }
    else
    {
        printf("enter proper number");
    }
    
    
    return 0;
} 
