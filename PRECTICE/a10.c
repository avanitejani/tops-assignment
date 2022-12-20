#include<stdio.h>
int main()
{
     int num;
     printf("enter number");
     scanf("%d",&num);

     if(num<0)
     {
        printf("nagative number");
     }   
     else if (num>0)
     {
        printf("possetive number");
     }
     else
     {
        printf("zero number");
     }
     
    return 0;
} 
