//logicl operators------->  ( &&, ||, ! )
#include <stdio.h>
int main()
{
    int a,b;
    a=34;
    b=6;
    printf("a&&b=%d\n",a&&b);
    printf("a||b=%d\n",a||b);
    printf("a!b=%d\n",!a);
    printf("a!b=%d\n",!b);
    //printf("a%b=%d\n",a%b);
    return 0;
}
/*
bitwise operators
&----->  0 1 = 0
          1 0 = 0
          1 1 = 1
          0 0 = 0

|----->  0 1 = 1
          1 0 = 1
          1 1 = 1
          0 0 = 0

!------>  0 = 1
          1 = 0    

^------>  0 1 = 1   ( defrent answer hovo joye to 1, nkr sem answer aave to 0)
          1 0 = 1
          1 1 = 0
          0 0 = 0


other bitwise operators
~,  <<,  >>
                


*/