#include <iostream>
using namespace std;

class bankAccount
{

private:
    signed int currentBalance;

public:
    bankAccount()
    {
        //opening_balance = 1000;
        currentBalance = 1000;
     
    }
    void deposit()
    {

        currentBalance = currentBalance + 500;
    }

    void withdraw()
    {
        if (currentBalance <= 500)
        {

            cout << "Insufficient Balance!" << endl;
            currentBalance = currentBalance; 
        }
        else
            currentBalance = currentBalance - 500;
    }
    void show()
    {
        cout << "The current Balance is: " << currentBalance << endl;
    }
};

int main()
{
    bankAccount current;
    bankAccount deposit;
    bankAccount withdraw;
    current.show();
    deposit.deposit();
    deposit.show();
    withdraw.withdraw();
    withdraw.show();
    withdraw.withdraw();
    withdraw.show();

    return 0;
}

//  if (currentBalance < 500)
// {
//     cout << "Insufficient Balance!"<< endl;
// }