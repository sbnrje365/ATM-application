#include <iostream>
using namespace std;

void showMenu()
{
    cout << "****** MENU ******" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposite Amount" << endl;
    cout << "3. Withdrawl Amount" << endl;
    cout << "0. Exit" << endl;
    cout << "******************" << endl;
}

int main()
{
    int option;
    double balance = 0;
    do
    {
        showMenu();
        cout << "Option: ";
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Current Balance is: Rs. " << balance << endl;
            break;

        case 2:
            cout << "Deposite amount: Rs. ";
            double depositeAmount;
            cin >> depositeAmount;
            balance += depositeAmount;
            break;

        case 3:
            cout << "Withdrawl Amount: Rs. ";
            double withdralAmount;
            cin >> withdralAmount;
            if (withdralAmount < balance)
            {
                balance -= withdralAmount;
            }
            else
            {
                cout << "Not enough money." << endl;
                break;
            }
        }
    } while (option != 0);
    
    return 0;
}