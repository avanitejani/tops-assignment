
#include <stdio.h>
int main()
{
    int day_num;
    printf("Enter Number of Day: ");
    scanf("%d", &day_num);
    switch (day_num)
    {
    case 1:
    {
        printf("Monday");
        break;
    }
    case 2:
    {
        printf("Tuesday");
        break;
    }
    case 3:
    {
        printf("Wed");
        break;
    }
    case 4:
    {
        printf("thursday");
        break;
    }
    case 5:
    {
        printf("Friday");
        break;
    }
    case 6:
    {
        printf("Saturday");
        break;
    }
    case 7:
    {
        printf("Sunday");
        break;
    }
    default:
    {
        printf("Enter Number bewteen 1 to 7");
    }
    }
    return 0;
}

/*
switch(variable)
{
    case 1:
    {
        body of case1
        break;
    }
    case 2:
    {
        body of case 2
        break;
    }
    case 3:
    {
        body of case 3
        break;
    }
    defualt:
    {
        body of default:
        break;
    }
}



*/