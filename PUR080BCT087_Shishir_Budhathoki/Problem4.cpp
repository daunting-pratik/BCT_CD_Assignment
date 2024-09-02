#include <iostream>

using namespace std;

class Account
{
protected:
    int accountNumber;
    double balance;

public:
    Account(int accNum, double bal) : accountNumber(accNum), balance(bal) {}

    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;

    void displayBalance() const
    {
        cout << "Account Number: " << accountNumber << ", Balance: $" << balance << endl;
    }

    virtual ~Account() {}
};

class SavingsAccount : public Account
{
public:
    SavingsAccount(int accNum, double bal) : Account(accNum, bal) {}

    void deposit(double amount) 
    {
        balance += amount;
        cout << "Savings Account: Deposited $" << amount << endl;
    }

    void withdraw(double amount) 
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Savings Account: Withdrawn $" << amount << endl;
        }
        else
        {
            cout << "Savings Account: Insufficient balance for withdrawal!" << endl;
        }
    }
};

class CheckingAccount : public Account
{
public:
    CheckingAccount(int accNum, double bal) : Account(accNum, bal) {}

    void deposit(double amount) 
    {
        balance += amount;
        cout << "Checking Account: Deposited $" << amount << endl;
    }

    void withdraw(double amount) 
    {

        double fee = 1.0;
        if (amount + fee <= balance)
        {
            balance -= (amount + fee);
            cout << "Checking Account: Withdrawn $" << amount << " (Fee: $" << fee << ")" << endl;
        }
        else
        {
            cout << "Checking Account: Insufficient balance for withdrawal!" << endl;
        }
    }
};

int main()
{
    SavingsAccount savings(12345, 1000.0);
    CheckingAccount checking(67890, 500.0);
    Account *accountPtr;
    accountPtr = &savings;
    accountPtr->deposit(200.0);
    accountPtr->withdraw(150.0);
    accountPtr->displayBalance();
    cout << endl;
    accountPtr = &checking;
    accountPtr->deposit(300.0);
    accountPtr->withdraw(200.0);
    accountPtr->displayBalance();
    return 0;
}
