// Write a program of structure employee that provides the following information -print and display empno, empname, address and age

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

  struct employee e;

  printf("enter name: ");
  scanf(" %s", &e.name);
  //gets(e.name);
  printf("enter address: ");
  scanf(" %s", &e.add);
  printf("enter age: ");
  scanf(" %d", &e.age);
  printf("enter phone no.: ");
  scanf("%lld", &e.no);

  printf("\n\nname:%s\naddress:%s\nage:%d\nphone no.:%lld", e.name, e.add, e.age, e.no);

  return 0;
}