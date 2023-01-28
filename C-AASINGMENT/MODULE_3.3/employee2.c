// Write a program of structure for five employee that provides the following information -print and display empno, empname, address and age.

#include <stdio.h>
struct employee
{
  char name[20];
  char add[50];
  int age;
  long long int no;
};

int main()
{
  struct employee e[5];

  for (int i = 0; i < 5; i++)
  {
    printf("\n\nnumber of employee %d\n", i++);

    printf("enter name: ");
    scanf(" %s", &e[i].name);
    // gets(e[i].name);
    printf("enter address: ");
    scanf(" %s", &e[i].add);
    printf("enter age: ");
    scanf(" %d", &e[i].age);
    printf("enter phone no.: ");
    scanf("%lld", &e[i].no);

    printf("name:%s\naddress:%s\nage:%d\nphone no.:%lld", e[i].name, e[i].add, e[i].age, e[i].no);
  }

  return 0;
}
