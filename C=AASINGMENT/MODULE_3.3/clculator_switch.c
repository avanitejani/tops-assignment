//write a program of make addition, subtraction, multiplication, division and modulo using switch case.(must be menu driven)
#include<stdio.h>
int main()
{
    char operator;
    int num1 , num2 ;
    printf("enter your choice ( + , - , * , / , %%) : ");
    scanf("%c", &operator);
    printf("\n enter two values for two operands : ");
    scanf("%d %d" ,&num1 ,&num2);
    switch(operator)
    {
        case'+' :
        {
            //result=num1+num2;
            printf("addition=%d", num1+num2);
            break;
        }
        case'-' :
        {
            //result=num1-num2;
            printf("subtraction=%d", num1-num2);
            break;
        }
        case'*' :
        {
            //result=num1*num2;
            printf("multiplication=%d", num1*num2);
            break;
        }
        case'/' :
        {
            //result=num1/num2;
            printf("divison=%d", num1/num2);
            break;
        }
        case'%' :
        {
            
            printf("modulo=%d", num1%num2);
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
