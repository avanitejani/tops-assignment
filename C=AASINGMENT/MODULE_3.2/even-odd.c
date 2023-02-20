//WAPfind number is even or odd using ternary operator.
#include<stdio.h>
int main()
{
    int m;
    printf("enter the number :\n",m);
    scanf("%d",&m);
    (m % 2 == 0) ?
    (printf("%d is even number \n",m)) : (printf("%d is odd number \n",m));
    return 0;    
}
    // ()?():();
    //condition             true             false
    //(expression1)  ?  (expression2) : (expression3)