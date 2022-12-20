// WAP to print number in reverse order . 
#include <stdio.h>
int main()
{
    int num, reminder, reverse = 0;
    printf("\n please enter the any number to reverse :");
    scanf("%d", &num);

    while (num > 0) // e.g; 96385---->58369
    {
        reminder = num % 10;
        reverse = reverse * 10 + reminder;
        num = num / 10;
    }
    printf("\nrverse of entered number is = : %d ", reverse);

    return 0;
}