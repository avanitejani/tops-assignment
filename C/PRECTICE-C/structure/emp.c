#include <stdio.h>
struct employee
{
    char name[10];
    int id;
    int age;
};

int main()
{
    int n;
    printf(" enter number of employee: \n");
    scanf("%d", &n);
    struct employee e[n];
    printf(" number of employee are %d\n", n);

    for (int i = 0; i < n; i++)
    {
        printf("enter name: \n");
        scanf(" %s", e[i].name);
        printf("enter id: \n");     
        scanf(" %d", &e[i].id);
        printf("enter age: \n");
        scanf(" %d", &e[i].age);

        printf("name=%c \n id=%d \n age=%d",e[i].name,e[i].id,e[i].age);
    }

    return 0;
}