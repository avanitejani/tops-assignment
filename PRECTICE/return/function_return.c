#include<stdio.h>
int add(int n1, int n2)
{
   
   int add;
  
   add = n1+n2;
   return add;
}
 int main()
 {
    int m;
    int a,b;
    printf("enter number :\n");
    scanf("%d %d",&a ,&b);
    m = add(a,b);
   

    printf("%d ",m);
    return 0;
 }