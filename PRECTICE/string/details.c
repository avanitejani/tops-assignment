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