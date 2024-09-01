#include <iostream>
using namespace std;

class Account {
protected:
    int accountNumber;
    double balance;

public:
    Account(int accNum, double bal) {
        accountNumber = accNum;
        balance = bal;
    }

    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;
    virtual void display() = 0;
};

class SavingsAccount : public Account {
public:
    SavingsAccount(int accNum, double bal) : Account(accNum, bal) {}

    void deposit(double amount) {
        balance += amount;
        cout << "Savings Account: Deposited " << amount << ", New Balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Savings Account: Withdrawn " << amount << ", New Balance: " << balance << endl;
        } else {
            cout << "Savings Account: Insufficient balance!" << endl;
        }
    }

    void display() {
        cout << "Savings Account: " << accountNumber << ", Balance: " << balance << endl;
    }
};

class CheckingAccount : public Account {
public:
    CheckingAccount(int accNum, double bal) : Account(accNum, bal) {}

    void deposit(double amount) {
        balance += amount;
        cout << "Checking Account: Deposited " << amount << ", New Balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (balance >= amount + 1) {
            balance -= (amount + 1);
            cout << "Checking Account: Withdrawn " << amount << " (including $1 fee), New Balance: " << balance << endl;
        } else {
            cout << "Checking Account: Insufficient balance!" << endl;
        }
    }

    void display() {
        cout << "Checking Account: " << accountNumber << ", Balance: " << balance << endl;
    }
};

int main() {
    SavingsAccount sa(101, 500);
    CheckingAccount ca(102, 1000);

    sa.deposit(100);
    sa.withdraw(50);
    sa.display();

    ca.deposit(200);
    ca.withdraw(150);
    ca.display();

    return 0;
}
