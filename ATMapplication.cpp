#include <iostream>
using namespace std;

void showMenu()
{
    cout << "****** MENU ******" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposite Amount" << endl;
    cout << "3. Withdrawal Amount" << endl;
    cout << "0. Exit" << endl;
    cout << "******************" << endl;
}

int main()
{
    int option;
    cout << "Add amount: Rs. ";

    double balance;
    cin >> balance;
    cout << endl;
    do
    {
        showMenu();
        cout << "Option: ";
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "> Current Balance is: Rs. " << balance << endl;
            cout << endl;
            break;

        case 2:
            cout << "Deposite amount: Rs. ";
            double depositeAmount;
            cin >> depositeAmount;
            balance += depositeAmount;
            cout << "> Current balance: Rs. " << balance << endl;
            cout << endl;
            break;

        case 3:
            cout << "Withdrawl Amount: Rs. ";
            double withdrawalAmount;
            cin >> withdrawalAmount;
            if (withdralAmount < balance)
            {
                balance -= withdrawalAmount;
                cout << "> Current balance: Rs. " << balance << endl;
                cout << endl;
            }
            else
            {
                cout << "Not enough money." << endl;
                break;
            }
        }
    } 
    while (option != 0);
    
    return 0;
}
