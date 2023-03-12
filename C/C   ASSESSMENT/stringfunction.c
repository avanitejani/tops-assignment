/*
● Create an application that can perform all string related operations

Make sure each business logic is denoted with appropriate comments and
make your code interactive and represent clean and clear output on your
console screen.

Adhere to the coding principles
It should be a menu driven approach, for which you are suppose to use the functions
concept

Over Here, take string input from user and perform string operations listed below :

1● reverse a string
2● Concatenation
3● Palindrome
4● Copy a string
5● Length of the string
6● Frequency of character in s string
7● Find number of vowels and consonants
8● Find number of blank spaces and digits
As given above perform the operation as per user’s choice

If user will not select any of the above then it should not perform any operation and
give an appropriate user friendly message

After performing the operation ask the user if the user wants to continue or not ?
*/

#include <stdio.h>
#include <string.h>

int main()
{

    int num, operator;
start:
    printf("1. reverse \n");
    printf("2. Concatenation \n");
    printf("3. Palindrome \n");
    printf("4. Copy a string \n");
    printf("5. Length of the string \n");
    printf("6. Frequency of character \n");
    printf("7. vowels and consonants \n");
    printf("8. blank spaces and digits \n");
    //printf("9. exit \n");

    printf("select any number of your choice :");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("you have selected reverse \n");
        char name[20];
        printf("enter the reverse a string : \n");
        scanf(" ");
        gets(name);
        strrev(name);
        printf("revrse of string = %s ", name);
    }

    else if (num == 2)
    {
        printf("you have selected Concatenation \n");
        char name[20];
        printf("Enter name: ");
        scanf(" ");
        gets(name);
        char surname[20];
        printf("Enter surname: ");
        gets(surname);

        strcat(name, surname);
        // strcat(surname, name);

        printf("Name= %s\n", name);
        printf("surname= %s", surname);
    }

    else if (num == 3)
    {
        printf("you have selected Palindrome \n");
        char inputArray[100], revesdArray[100];
        printf("Enter a String : ");
        scanf("%s", inputArray);

        strcpy(revesdArray, inputArray);

        strrev(revesdArray);

        if (strcmp(inputArray, revesdArray) == 0)
        {
            printf("%s is a Palindrome.", inputArray);
        }
        else
        {
            printf("%s is not a Palindrome.", inputArray);
        }
    }

    else if (num == 4)
    {
        printf("you have selected Copy a string \n");
        char oldstr[20];
        printf("Enter name1: ", oldstr);
        scanf(" ");

        gets(oldstr);

        char newstr[20];

        strcpy(newstr, oldstr);
        puts(newstr);
    }

    else if (num == 5)
    {
        printf("you have selected Length of the string \n");
        char name[20];
        printf("Enter name: ");
        scanf(" ");
        gets(name);
        int length = strlen(name);
        printf("length is: %d", strlen(name));
    }

    else if (num == 6)
    {
        printf("you have selected Frequency of character \n");

        char str[1000], ch;
        int count = 0;

        printf("Enter a string: ");
        scanf(" ");

        fgets(str, sizeof(str), stdin);

        printf("Enter a character to find its frequency: ");
        scanf("%c", &ch);

        for (int i = 0; str[i] != '\0'; ++i)
        {
            if (ch == str[i])
                ++count;
        }

        printf("Frequency of %c = %d", ch, count);
    }

    else if (num == 7)
    {
        printf("you have selected vowels and consonants \n");
        char s[100];
        int i, vowels = 0, consonants = 0;

        printf("Enter  the string : ");
        scanf(" ");

        gets(s);

        for (i = 0; s[i] != '\0'; i++)
        {

            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
                s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                vowels++;
            else
                consonants++;
        }

        printf("vowels = %d\n", vowels);
        printf("consonants = %d\n", consonants);
    }
    else if (num == 8)
    {
        printf("you have selected blank spaces and digits \n");
        char str[50];
        int len, i, spaces = 0;
        printf("Enter the String\n");
        scanf(" ");
        gets(str);
        len = strlen(str);
        for (i = 0; i < len; i++)
        {
            if (str[i] == ' ')
                spaces++;
        }
        printf("Total spaces are : %d\n", spaces);
    }

    //else if (num == 9)
    //{
    //  printf("you have selected exit \n");
    //}

    else
    {
        printf("only select proper number of choice\n ");
    }

    int option;

    printf("\n\n-----------------------------------------------\n");
    printf(" \n do you want to continue? \n< press 1 to continue> :\n");
    scanf("%d", &option);

    if (option == 1)
    {
        goto start;
    }
    else
    {
        printf("you have not select an option \n");
        printf("\n-----------------------------------------------\n");
    }

    return 0;
}




/*
C
scanf("%d");
scanf("%s");

scanf("%s");
scanf("");
gets(name);

C++

cin>>id;
cin.ignore();
cin>>name;

cin>>id;
cin.ignore();
cin>>(cin,name);
*/