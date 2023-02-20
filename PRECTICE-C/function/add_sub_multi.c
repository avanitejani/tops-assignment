#include<stdio.h>
void addition( int n1 ,int n2 )
{
   // int n1,n2;
    int add ,sub,multi;
    
    add = n1+n2;
    sub = n1-n2;
    multi = n1*n2;
    printf("%d\n %d\n %d\n",add,sub,multi);

}



int main()
{
    
    int m1,m2;
    printf(" enter two number :");
    scanf(" %d %d ",&m1,&m2);
    addition(m1,m2);
    


    return 0;
}


