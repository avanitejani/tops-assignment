#include<stdio.h>
int main()
{
     int aaray1[5];
     int aaray2[5];
     int addtion[5];

     for(int i=0;i<5;i++)
     {
        printf("enter value :");
        scanf("%d",&aaray1[i]); 
     }

     for(int i=0;i<5;i++)
     {
         printf("enter value :");
         scanf("%d",&aaray2[i]); 
     }

     for(int i=0;i<5;i++)
     {
        addtion[i]=aaray1[i]+aaray2[i];
     }

     for(int i=0;i<5;i++)
     {
        printf("%d",addtion[i]);
     }

     
    
       
    return 0;
} 