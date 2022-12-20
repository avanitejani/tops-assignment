#include<stdio.h>
int main()
{
    int age;
    printf("\nenter your age :");
    scanf("%d",&age);
    printf("\n you have enter %d as year age",age);

    if (age>=18)
    {
        printf("\nyou can vote ");
    }
    else 
    {
        printf("\n you can not vote ");
    }
    


    return 0;

} 
