// WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo)

#include <stdio.h>
 
int main()
{
    int num1,num2;
    float result;
    char choice;    //to store operator choice
     
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
     
    printf("Choose operation to perform (+,-,*,/,%%): ");
    scanf(" %c",&choice);
     
    result=0;
    switch(choice)    
    {
        case '+':
        {
            result=num1+num2;
            break;
        }    
        case '-':
        {
            result=num1-num2;
            break;
        }
        case '*':
        {
            result=num1*num2;
            break;
        }    
        case '/':
        {
            result=(float)num1/(float)num2;
            break;
        }
             
        case '%':
        {
            result=num1%num2;
            break;
        }
    
   
default :
        {
            printf("Invalid operation.\n");
            break;
        }
    }    
 
    printf("Result: %d %c %d = %f\n",num1,choice,num2,result);
    return 0;
}