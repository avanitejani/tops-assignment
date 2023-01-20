// WAP to find out max from given number 
#include<stdio.h>
int main()
{
    int num, temp;
    
        printf("enter number :");
        scanf("%d", &num);
    
    int s = num % 10;
    while ( num > 0)
    {
        temp = num % 10;
        num = num / 10;
        if(temp > s)
        {
            s = temp;
        }

        
    }
    printf("%d is biggest", s);
    
    return 0;
}