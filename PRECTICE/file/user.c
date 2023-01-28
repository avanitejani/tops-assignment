#include <stdio.h>
int main()
{

    char name[100];
    char email[100];
    int age;
    printf("Enter Name: ");
    gets(name);
    printf("Enter Email: ");
    gets(email);
    printf("Enter Age: ");
    scanf("%d", &age);
    printf("Name\t:\t%s\nemail\t:\t%s\nage\t:\t%d\n", name, email, age);
    FILE *fp;
    fp = fopen("User.txt", "a");
    fprintf(fp, "Name\t:\t%s\nemail\t:\t%s\nage\t\t:\t%d\n", name, email, age);
    fprintf(fp, "---------------------------------------------------------\n");
    fclose(fp);
    getch();//?
    return 0;
}