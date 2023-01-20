#include<stdio.h>
int main()
{
     int aaray1[1][2];
     int aaray2[1][2];
     int addtion[1][2];

    for(int i=0;i<1;i++)
    {   
     for(int j=0;j<2;j++)
     {
        printf("enter value1 :");
        scanf("%d",&aaray1[i][j]); 
     }
    }
    
    for(int i=0;i<1;i++)
    {
     for(int j=0;j<2;j++)
     {
         printf("enter value2 :");
         scanf("%d",&aaray2[i][j]); 
     }
    }


     for(int i=0;i<1;i++)
     {
      for(int j=0;j<2;j++)
      {
        addtion[i][j]=aaray1[i][j]+aaray2[i][j];
      }
     }


     for(int i=0;i<1;i++)
     {
       for(int j=0;j<2;j++)
       {
            printf(" = %d",addtion[i][j]);
       }
     }
     
    
       
    return 0;
} 