//WAP Find out length of string without using inbuilt function 

#include <stdio.h>
#include <string.h>
int main()
{
  int i=0;
char name[10]="hello";
while (name[i]!='\0')
{
  i++;

}

printf("%d",i);

  
  return 0;
}
/*


char s[100];
  int i;
  printf("enter sentence : ");
  scanf("%s",&s);

  for(int i=0;s[i]!='\0';++i)
  {
    printf("length of sreing is: %d",s);
  }



*/