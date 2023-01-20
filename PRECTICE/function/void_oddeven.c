#include<stdio.h>
void odd(int num)
{
    // int num;
    // printf("\nenter number :\n");
    // scanf("%d",&num);
    if(num%2==0)
    {
        printf("\nnumber is even  :");
    }    
    else
    {
        printf("\nnumber is odd :");
    }
    
}

int main()
{


    odd(2);
    odd(45);
    odd(24);
    odd(29);
    odd(25);
    return 0;
}