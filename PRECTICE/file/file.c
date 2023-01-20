#include <stdio.h>
int main()
{
    FILE *fp;
    char name[20];
    char email[20];
    int age;

    printf("enter name :");
    gets(name);
    
    printf("enter email id :");
    gets(email);

    printf("enter your age: ");
    scanf("%d",&age);

    fp=fopen("demo.txt","w");
    fprintf(fp,"name\t:\t%s\n",name);
    fprintf(fp,"email\t:\t%s\n",email);
    fprintf(fp,"age\t:\t%d\n",age);


    printf( " name\t=\t%s\n email\t=\t%s\n age\t=\t%d \n",name,email,age);

    fclose(fp);
    return 0;
}
