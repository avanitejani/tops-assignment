/*
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

*/
#include <stdio.h>
main()
{
  int m = 9, n = 1;
    
  for (int i = 1; i <= 9; i++)
  {
    

    for (int j = 1; j <= m; j++)
    {
      printf(" ");
    }
    m--;
    for (int k = 1; k <= n; k++)
    {
      if(i%2!=0)
      printf("* ");
    }
    n++;
    printf("\n");
  }
  return 0;
}