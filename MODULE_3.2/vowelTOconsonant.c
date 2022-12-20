// vowel or consonant using switch case.
#include<stdio.h>
int main()
{
    char t;
    printf("\n enter your alfabet :");
    scanf("%c",&t);

    switch(t)
    {
        case'a' :
        {
            printf("vowel\n");
            break;
        }
        case'e' :
        {
            printf("vowel\n");
            break;
        }
        case'i' :
        {
            printf("vowel\n");
            break;
        }
        case'o' :
        {
            printf("vowel\n");
            break;
        }
        case'u' :
        {
            printf("vowel\n");
            break;
        }
        default :
        {
            printf("consonan\n");
            break;
        }
        

    }
    return 0;
}