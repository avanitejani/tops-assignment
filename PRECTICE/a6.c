#include <stdio.h>
int main()
{
    int age;
    printf("\nenter your age :");
    scanf("%d", &age);
    printf("\n you have enter %d as year age", age);

    if (age >= 18)
    {
        printf("\nyou can vote ");
    }
    else if (age >= 10)
    {
        printf("you are between 10 to 80 and you can vote for kids");
    }
    else if (age>=3)
    {
        printf("\nyou are between 3 to 10 and you can vote for babies");
    }
    

    //  else
    //{
    //  printf("\n you can not vote ");
    // }

    return 0;
}
