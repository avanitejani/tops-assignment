#include<stdio.h>
int main()
{
    char name[50];
    int age;
    unsigned long mobail_no;
     
    printf(" enter your full name :");
    gets(name);

    printf(" enter your age :");
    scanf("%d",&age);

    printf(" enter your mobail number :");
    scanf("%lu",&mobail_no); 
    
    printf(" your name is:- %s  \n your age is:- %d \n your mobail no. is:- %lu\n",name,age,mobail_no);
    return 0;
}
/*

#include <stdio.h>
int main()
{
    //\0--null character
    // char n = 's';
    // char k = 'u';
    // char m = 'r';
    // char stirnname[size]="values";
    // char name[10] = "Surat"; //%s
    // printf("name =%s", name);
    // printf(" %d", sizeof(name));
    char name[200];
    printf("Enter name: ");
    // scanf("%s", name);
    gets(name);
    // printf("name =%s", name);
    puts(name);

    return 0;
}

*/


/*
stringfunction

strlen()  ---count length of string
strcpy() ---copy one string into another
strcat() ---concatenate two string means jodna of two string
strupr() ---converts string into uppercase
strlwr() ----converst string into lowercase
strrev() ---reverse the string
strcmp() --compare two string

*/