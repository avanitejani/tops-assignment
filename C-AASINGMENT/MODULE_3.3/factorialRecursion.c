//WAP to find factorial using recursion
#include <stdio.h>
int multiply = 1;
void fact(int a)
{
    if(a>0)
    {
        multiply = multiply * a;
        fact(a-1);
    }


}
int main()
{
    fact(5);
    printf("fact=%d",multiply);


    return 0;
}