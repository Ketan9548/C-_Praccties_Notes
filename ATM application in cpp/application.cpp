#include <iostream>
using namespace std;
void mainmenu()
{
    cout << "********MENU*******" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "*******************" << endl;
}
int main()
{
    // check balance, deposit, withdraw, show menu
    int option;
    double balance = 500;
    do
    {

        mainmenu();
        cout << "Option: " << endl;
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "Balance is: " << balance << "\u20B9" << endl;
            break;

        case 2:
            cout << "Deposit amount:";
            double Deposit_money;
            cin >> Deposit_money;
            balance += Deposit_money;
            break;
        case 3:
            cout << "WithDraw amount:";
            double withdraw_money;
            cin >> withdraw_money;
            balance += Deposit_money;
            if (withdraw_money <= balance)
            {
                balance -= withdraw_money;
            }
            else
            {
                cout << "Not enougt money" << endl;
            }
            break;
        }
    } while (option != 4);
    return 0;
}