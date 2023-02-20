#include<stdio.h>
void table( int n)
{    
    
    for(int i=1;i<11;i++)
    {
       printf("%d*%d=%d\n",n,i,n*i);
    }
}
    
    
int main()
{
    int  n;
    printf("enter number :\n");
    scanf("%d", &n);
    table(n)  ;  
    return 0;
} 