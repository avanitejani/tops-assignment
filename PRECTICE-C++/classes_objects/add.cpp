//my try
#include <iostream>
using namespace std;


int main()
{
    int n1,n2;
    int add;
    cout << "enter value two value";
    cin >> n1 >> n2;
    add=n1+n2;
    cout << "addition ="<<add;
    
    return 0;
}
//sir no pogram
#include <iostream>
using namespace std;
void calculation()
{
    int a, b, answer;
    cout << "Enter Two Value: ";
    cin >> a >> b;
    answer = a + b;
    cout << "Addition = " << answer;
}
int main()
{
    calculation();
    return 0;
}

/*
class should be deifned outside of main function
class classname
{
    public: //access specifier public private (deafult) protected
    variables // data members
    function //members function or methods
    // method is nothing but just a function inside class
};
naver forget semicolon after class completion
and never add semicolor after function completion

object is made inside main()
classname objectname;

*/

#include <iostream>
// using namespace std;
int main()
{
    int a;
    std::string name;
    std::cout << "Enter VAlue and name ";
    std::cin >> a;
    getline(std::cin, name);
    std::cout << "Hello " << a << " is the value " << name << " is the name";
    return 0;
}
/*
hello 98 is the value
printf("hello %d is the value",a);
int a;
scanf("%d",&a);
<< exertion opearator
>> insertion operator
:: scope resolution operator
*/
