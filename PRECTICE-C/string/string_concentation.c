#include <stdio.h>
#include <string.h>
int main()
{
    char name[20] = "Rohit";
    char surname[20] = "Sharma";
    // strcat(name, surname);
    strcat(surname, name);
    printf("Name= %s\n", name);
    printf("surname= %s", surname);

    return 0;
}
/*
strcat(jisme jodna hai,jisse jodna hai)
%s =string format specifier
*/