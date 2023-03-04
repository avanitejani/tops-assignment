/*

                  C ++ Programming Assessment Test

• Create a Project to demonstrate an Event Organiser Project which will help to manage the Events.
 The Project should contain all the necessary requirements i.e need to use conditional Statements, Loops, Function and also A Program should use the concept of OOP.

• Give comments where it is required , for better understanding of codes.
  It will help you and the project evaluator.

• A Project should contain the following execution flow.

• When Execution of the main source file, the program should first ask the NAME OF THE EVENT.


1. Example : Wedding

2. After asking the event name , it should ask your
I. FIRST NAME,LAST NAME.
II. Number of Guests.
III. Number of Minutes.

3. Once the all the Input requirement is over, you should be able to get the Event Cost Estimation.

 Use the following rate card :

a. const double CostPerHour = 18.50;
b. const double CostPerMinute = .40;
c. const double CostOfDinner = 20.70;

i. GET Number of Servers.
 (1 Server can handle 20 guests, so FIND how much server required for No. of Guests you Entered.) (Hint : You can use ceil() function . (i.e : rounds up the nearest integer)

ii. GET COST of ONE Server.
    Example :
        Cost1 = (NumberOfMinutes / 60) * CostPerHour;
        Cost2 = (NumberOfMinutes % 60) * CostPerMinute;
        CostForOneServer = Cost1 + Cost2;

iii. GET COST for FOOD.
        otalFoodCost = NumberOfGuests * CostOfDinner;

iv. Get Average Cost Per Person
        AverageCost = TotalFoodCost / NumberOfGuests;

v. GET TOTAL COST.
        TotalCost = TotalFoodCost + (CostForOneServer * NumberOfServers);

vi. GET DEPOSIT AMOUNT
        DepositAmount = TotalCost * .25;


*/

#include <iostream>
#include <math.h>
using namespace std;
class Event
{
public:
    int guest, time;
    float averageCost, totalCost, depositAmount, servers, costForOneserves, minute, food;
    string name, surname, event;
    void ditails()
    {
        // cout << "\n Enter customer Details : \n";
        cout << "...................Event Management System...................\n";

        cout << "\nEnter the name of the Event. ";
        cin >> event;
        cin.ignore();
        getline(cin, event);

        cout << "\nEnter first Name : ";
        cin >> name;
        // getline(cin, name);

        cout << "\nEnter last Name : ";
        cin >> surname;
        // getline(cin, surname);

        cout << "\nEnter the Number of Guests : ";
        cin >> guest;

        cout << "\nEnter the Number of Minutes in the event : ";
        cin >> time;
        cout << endl;
    }

    void cost()
    {
        // int costForOneserves, minute,  food;
        float minutes, hour, cost1, cost2;

        //1. GET Number of Servers.
        servers = ceil(guest / 20); // 1 Server can handle 20 guests

        float CostPerHour = 18.50;
        float CostPerMinute = 0.40;
        cost1 = time / 60 * CostPerHour;
        cost2 = time % 60 * CostPerMinute;
        //2. GET COST of ONE Server.
        costForOneserves = cost1 + cost2;

        //3. GET COST for FOOD.
        food = float(guest) * 20.70; // CostOfDinner = 20.70;

        //4. Get Average Cost Per Person
        averageCost = food / guest;

        //5. GET TOTAL COST.
        totalCost = food + (costForOneserves * servers);

        //6. GET DEPOSIT AMOUNT
        depositAmount = totalCost * 0.25;
    }

    void printvalues()
    {
        cout << "...................Event Management System...................\n";

        cout << "Total Number Of Servers : " << servers << endl;        // 1 Server can handle 20 guests
        cout << "Total cost Of Servers : " << costForOneserves << endl; 
        cout << "The Cost For Food Is : " << food << endl;
        cout << "Average Cost Per Person : " << averageCost << endl;

        cout << "\nTotal Cost Is : " << totalCost << endl;
        cout << "Please Deposite a 25% Deposit to reserve the event  " << endl;
        cout << "The Deposit Needed is : " << depositAmount << endl;
    }
};

int main()
{
    Event e1;
    e1.ditails();
    e1.cost();
    e1.printvalues();
    return 0;
}

/*
        cout << "1. Weding \n";
        cout << "2. Exhibition \n";
        cout << "3. Seminars \n";
        cout << "4. Trade Shows \n";
        cout << "5. Press Conferences \n";
        cout << "6. Product Launches \n";
        cout << "7. Birthday \n";
        cout << "8. Weding Anniversaries \n";
        cout << "9. Family Events \n";
        cout << "10. Festival \n";



*/
