//monday to sunday usind switch case.
#include<stdio.h>
int main()
{
    int day;
    printf("enter the number");
    scanf("%d",&day);

    switch(day)
    {    
        case 1 :
        {
            printf("monday\n");
            break;
        }
        case 2 :
        {
            printf("tuesday\n");
            break;
        }
        case 3 :
        {
            printf("wednessday\n");
            break;
        }
        case 4 :
        {
            printf("thursday\n");
            break;
        }
        case 5 :
        {
            printf("friday\n");
            break;
        }
        case 6 :
        {
            printf("saturday\n");
            break;
        }
        case 7 :
        {
            printf("sunday\n");
            break;
        }
        default :
        {
            printf("enter the correct number");
            break;
        }

        

     }
    return 0;
}