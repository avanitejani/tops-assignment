#include <stdio.h>
int main()
{
    int choise, quantity, total_amount=0, amount;
    char option;

start:
    printf("1.pizza    price = 150rs/pcs\n");
    printf("2.burger   price = 70rs/pcs\n");
    printf("3.dosa     price = 100rs/pcs\n");
    printf("4.idli     price = 50rs/pcs\n");

    printf("enter your choice  :");
    scanf("%d", &choise);

    if (choise == 1)
    {
        printf("you have selected pizza \n");
    }

    else if (choise == 2)
    {
        printf("you have selected burger \n");
    }

    else if (choise == 3)
    {
        printf("you have selected dosa \n");
    }

    else if (choise == 4)
    {
        printf("you have selected idli \n");
    }
    else
    {
        printf("only select 1 to 4 number\n ");
    
    }

    printf("enter Quantity: \n");
    scanf("%d", &quantity);

    if (choise == 1)
    {
        amount = quantity * 150;
    }

    else if (choise == 2)
    {
        amount = quantity * 70;



    }

    else if (choise == 3)
    {
        amount = quantity * 100;
    }

    else if (choise == 4)
    {
        amount = quantity * 50;
    }

    total_amount += amount ;

    printf("\n amount = %d \n", amount);
    printf("total_amount = %d \n", total_amount);
    printf(" do you want to plce more oders? y or n :\n");
    scanf("%s", &option);

    if (option == 'y')
    {
        goto start;
    }
    else
    {
        printf("total bill is %d \n", total_amount);
        printf("visit again \n");
    }

    return 0;
}
