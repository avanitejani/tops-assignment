#include<stdio.h>
int main()
{
    int num1,num2;
    char a;
    printf("enter number:\n");
    scanf("%d",&num1);

    printf(" enter choice: \n  +\n -\n *\n /\n :");
    scanf(" %c",&a);

    printf("enter number:\n");
    scanf("%d",&num2);

    switch(a)
    {
        case'+' :
        {

            printf("addition=%d", num1+num2);
            break;
        }
        case'-' :
        {
            
            printf("subtraction=%d", num1-num2);
            break;
        }
        case'*' :
        {
            
            printf("multiplication=%d", num1*num2);
            break;
        }
        case'/' :
        {
            
            printf("divison=%d", num1/num2);
            break;
        }
        
        default :
        {
        printf("enter your proper choice :");
        break;
        }
    }
    

    



    

    return 0;
}