// WAP to take 10 no. input from user and find out...

#include <stdio.h>
int main()
{
  int aaray[10];

 // printf("enter the 10 number :\n");

  for (int i = 0; i < 10; i++)
  {
    printf("enter the 10 number :");
    scanf("%d", &aaray[i]);
  }

  for (int i = 0; i < 10; i++)
  {

    if (aaray[i] % 2 == 0)
    {
      printf("%d number is even\n", aaray[i]);
    }
    else
    {
      printf("%d number is odd\n", aaray[i]);
    }
  }
  return 0;
}
