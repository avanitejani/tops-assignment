/*
function are of two types:

    inbuilt functions
    user defined functions

user defiend functions

je value function calling par thi user defined function maa jayy chee aee chee parameters

function thi koi value calling place upar mokalva mate return no use thay cheee
function with parameters and with return value
function with parameter and without return value
function without parameter and with return value
function without parameter and without return value

*/
/*
#include<stdio.h>
int main()
{
int a=90;

return 0;
}
printf("%d",a);*/


/*
 function declaration; always use before main()
 returntype function_name(paremeters);
 function definition
 returntype function_name(paremeters)
 {
     body:
 }

 function calling
 functionanme()
 */


/*


/*

3 janyuyari,  2023

2 types of functions in c

inbuilt function
    function thath has been provided by C itself
    printf()
    scanf()
user defined function

    function which has been created by user and also used by user


4 types
1.function with parameters and no retun value
===>1.
#include<stdio.h>  
void sum(int, int);  
void main()  
{  
    int a,b,result;   
    printf("\nGoing to calculate the sum of two numbers:");  
    printf("\nEnter two numbers:");  
    scanf("%d %d",&a,&b);  
    sum(a,b);  
}  
void sum(int a, int b)  
{  
    printf("\nThe sum is %d",a+b);      
}

2.function with parameters and with return value
===>
#include<stdio.h>  
int sum(int, int);  
void main()  
{  
    int a,b,result;   
    printf("\nGoing to calculate the sum of two numbers:");  
    printf("\nEnter two numbers:");  
    scanf("%d %d",&a,&b);  
    result = sum(a,b);  
    printf("\nThe sum is : %d",result);  
}  
int sum(int a, int b)  
{  
    return a+b;  
}

3.function without parameters and with return value
===>1.
#include<stdio.h>  
int sum();  
void main()  
{  
    int result;   
    printf("\nGoing to calculate the sum of two numbers:");  
    result = sum();  
    printf("%d",result);  
}  
int sum()  
{  
    int a,b;   
    printf("\nEnter two numbers");  
    scanf("%d %d",&a,&b);  
    return a+b;   
}

4.function withpout parameters and without return value
===>1.   
#include<stdio.h>  
void printName();  
void main ()  
{  
    printf("Hello ");  
    printName();  
}  
void printName()  
{  
    printf("Javatpoint");  
}
//output-----> hello javapoint
===>2. 
#include<stdio.h>  
void sum();  
void main()  
{  
    printf("\nGoing to calculate the sum of two numbers:");  
    sum();  
}  
void sum()  
{  
    int a,b;   
    printf("\nEnter two numbers");  
    scanf("%d %d",&a,&b);   
    printf("The sum is %d",a+b);  
}


function declaration

returnntype function_name(parameters);



function definition
returnntype function_name(parameters)
{

    what to do inside function
}

function calling

functionname(parameters)


*/
/*    
#include <stdio.h>

void addition(int k)
{
    int a = 90;
    printf("hello");
    return 
}

int main()
{
    int p;
    int z=80;
    p=addition(z);

    // printf("%d", a);
    return 0;
}
*/
#include<stdio.h>  
void printName();  
void main ()  
{  
    printf("Hello ");  
    printName();  
}  
void printName()  
{  
    printf("Javatpoint");  
}
