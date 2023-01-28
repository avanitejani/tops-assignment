#include<stdio.h>
int main()
{
FILE *fp;
char sent[100];
printf("Enter String: ");
gets(sent);
fp=fopen("file1.txt","a");
fprintf(fp,"%s",sent);
printf("%s",sent);
fclose(fp);

return 0;
}
/*
FIle pointer

FILE *pointername
FILE *fp

File

File Has 3 tasks

FIle open
pointername=fopen("filename","mode")
fp=fopen("demo.txt","r");
mode

read----r---if file mention is open for reading purpose and file is not exist then it will give error and if file exist the open for read purpose

write---w---if file open for write purpose then if file not exist then i will not give error but i will create a new file
and if file exist then it will open for writing purpose but all old content of file will be deleted

append--a---if file open for append purpose then if file not exist then i will not give error but i will create a new file
and if file exist then it will open for append purpose but all old content of file will not be deleted


file work



file close
fclose(pointername);
fclose(fp)



*/