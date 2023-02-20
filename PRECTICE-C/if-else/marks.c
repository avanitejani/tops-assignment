#include<stdio.h>
int main()
{

    float maths ,science ,marks;
    printf("enter your maths and science marks :\n",maths);
    scanf("%f %f",&maths,&science);
    
    printf(" your maths marks %f and your science marks %f",maths,science);

    //100 in 35 you are pass onother fsail
    if(maths>=35)
    {
        printf("\nyou are pass i given 15$");
    }
    else if (maths<=100)
    {
        printf("\nyou are fail");
    }
    if(science>=35)
    {
        printf("\nyou are pass i given 15$");
    }
    else if (science<=100)
    {
        printf("\nyou are fail");
    }
    if (maths+science>=70)
    {
        printf("\nyou are pass in both subject , so i will given you $50 ");
    }
    

    return 0;
} 
