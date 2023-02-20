
/*
 Define a class to represent a bank account. Include the following members:

1. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account

2. Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance

*/
#include <iostream>
using namespace std;
class bank
{
public:
        long long int account_no;
        string name;
        string account_type;
        long long int balance;

        void ditails()
        {
                cout << "\n Enter customer Details : \n";
                cout << "-----------------------------------\n";

                cout << "\nEnter 11 digits Accout No. ";
                cin >> account_no;

                cout << "\nEnter Name : ";
                cin.ignore();
                getline(cin, name);

                cout << "\nType of bank account : ";
                getline(cin, account_type);

                cout << "\nTotal Balance in account : ";
                cin >> balance;
                cout << endl;
        }

        void diposit()
        {
                long long int diposit_amount;

                cout << "Enter Deposit Amount  :";
                cin >> diposit_amount;  cout << endl;
                cout << "Now your account Total balance is : " << balance + diposit_amount << endl << endl;
                balance = balance + diposit_amount;
        }

        void Withdrow()
        {
                long long int Withdrow_amount;

                cout << "Enter Withdraw Amount : ";
                cin >> Withdrow_amount;  cout << endl;
                balance = balance - Withdrow_amount;
                cout << "Now your account Total balance is : " << balance << endl << endl;
        }

        void display()
        {
                cout << "\n\n----------------------------------\n"
                     << endl;
                cout << "Account Number : " << account_no << endl
                     << endl;
                cout << "Customer Name  : " << name << endl
                     << endl;
                cout << "Type Of Account : " << account_type << endl
                     << endl;
                cout << "Total Amount in Bank Account : " << balance << endl
                     << endl;
        }
};
int main()
{
        bank b1, b2, b3;
        b1.ditails();
        b1.diposit();
        b1.Withdrow();
        b1.display();
        
        return 0;
}

/*
#include <iostream>
#include <string.h>

using namespace std;

class bank
{
        long long int ac_num ;
        char nm[100], acctype[100];
        float bal;

public:
        bank(long long int acc_no, char *name, char *acc_type, float balance) // Parameterized Constructor
        {
                ac_num = acc_no;
                strcpy(nm, name);
                strcpy(acctype, acc_type);
                bal = balance;
        }
        void deposit() // depositing an amount
        {
                int damt1;
                cout << "\n Enter Deposit Amount = ";
                cin >> damt1; //
                bal += damt1;
        }

        void withdraw() // withdrawing an amount
        {
                int wamt1;
                cout << "\n Enter Withdraw Amount = ";
                cin >> wamt1;
                if (wamt1 > bal)
                {
                        cout << "\n Cannot Withdraw Amount";
                }
                bal -= wamt1;
        }

        void display() // displaying the details

        {
                cout << "\n ----------------------\n";
                cout << "\n Accout No. : " << ac_num;
                cout << "\n Name : " << nm;
                cout << "\n Account Type : " << acctype;
                cout << "\n Balance : " << bal;
        }
};
int main()
{
        long long int acc_no;
        char name[100], acc_type[100];
        float balance;
        cout << "\n Enter customer Details : \n";
        cout << "-----------------------";
        cout << "\n Accout No. ";
        cin >> acc_no;
        cout << "\n Name : ";
        cin >> name;
        cout << "\n Account Type : ";
        cin >> acc_type;
        cout << "\n Balance : ";
        cin >> balance;

        bank b1(acc_no, name, acc_type, balance); // object is created

        b1.deposit();                             //
        b1.withdraw();                            // calling member functions
        b1.display();                             //

        return 0;
}
*/