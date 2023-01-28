#include<stdio.h>
#include<string.h>
int main()
{
    int ans;
char str1[20]="Zebra";
char str2[20]="Zebra";
ans=strcmp(str1,str2);
printf("%d",ans);
return 0;
} /*
 strcmp(firststring,secondstring);

 0 ---both string is totallysame
 1 ---when first string is greater ascii then second
 -1 ---when first string is lower ascii then second
 */