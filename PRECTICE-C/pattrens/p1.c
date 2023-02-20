/*#include<stdio.h>
int main()
{
    int i,j;
    for (i='A'; i<='E'; i++)
    {
        for (j='A'; j<=i; j++)
        {
            printf("%c ", j);
        }
        printf("\n");
    }

    return 0;
}*/
#include <stdio.h>

int main() {
  // right pasal triangle
  

  for (int i = 1; i <= 5; i++) {
    for (int j = 0; j < i; j++) {
      printf("* ");
    }
    printf("\n");
  }
  
  for (int i = 1; i <= 5-1; i++) {
    for (int j = 0; j < 5-i; j++) {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}


/*
#include <stdio.h>
int main()
{
  return 0;
}
*/