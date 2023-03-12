#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,total;
    float pursentage;
    printf("enter yor marks\n");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    total=s2+s2+s3+s4+s5;
    printf("total %d",total);
    pursentage=((float)total/500)*100;
    printf("pursentage %f",pursentage);
    
    if(pursentage<=100 && pursentage>=90)
    {
        printf("A+");
    }
    else if(pursentage<=90 && pursentage>=75)
    {
        printf("b+");
    }
    else if(pursentage<=75 && pursentage>=60)
    {
        printf("c+");
    }
    else if(pursentage<=60 && pursentage>=35)
    {
        printf("d+");
    }
    else if(pursentage<=35)
    {
        printf("you are fail");
    }
    

         
    return 0;
} 
