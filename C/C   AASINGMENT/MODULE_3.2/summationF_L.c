// WAP you have to make a summation of first and last digit.
#include<stdio.h>
int main()
{
    int num, temp;
    
        printf("enter numbers :");
        scanf("%d", &num);
    
    int s = num % 10;
    while ( num > 0)
    {
        temp = num % 10;
        num = num / 10;
       /* if(temp > s)
        {
            s = temp;
        }
        */
        
    }
    //printf("%d is biggest", s);
    printf("addition = %d", s + temp);
    return 0;
}