// how many even numbers are there
#include <stdio.h>
int main()
{
    int i, number;
    printf("please enter the maximum limitb value :\n");
    scanf("%d", &number);

    printf("even numbers between 0 and %d are :\n", number);
    for (i = 1; i <= number; i++)
      {   
        if (i % 2 == 0)
        printf("%d\t", i);
      }     

    return 0;
}