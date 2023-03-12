#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("User.txt", "r");

    char ch;
    do
    {
        ch = getc(fp);
        printf("%c", ch);

    } while (ch != EOF);//End OF FIle
    fclose(fp);
    return 0;
}