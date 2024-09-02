// Design a class Employee with id, name, and salary as data members.
// Implement functions to input employee data and display employees who have a salary greater than a user-specified amount.
#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    double salary;

public:
    void input()
    {
        cout << "Enter employee ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter employee name: ";
        getline(cin, name);
        cout << "Enter employee salary: ";
        cin >> salary;
    }

    bool hasSalaryGreaterThan(double amount) const
    {
        return salary > amount;
    }

    void display() const
    {
        cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << endl;
    }
};

int main()
{
    int numEmployees;
    double salaryThreshold;
    Employee employees[100];
    cout << "Enter the number of employees: ";
    cin >> numEmployees;
    for (int i = 0; i < numEmployees; i++)
    {
        cout << "Enter details for employee " << i + 1 << ":" << endl;
        employees[i].input();
    }
    cout << "Enter the salary threshold: ";
    cin >> salaryThreshold;
    cout << "Employees with salary greater than " << salaryThreshold << ":\n";
    for (int i = 0; i < numEmployees; i++)
    {
        if (employees[i].hasSalaryGreaterThan(salaryThreshold))
        {
            employees[i].display();
        }
        else
        {
            cout << "No One";
        }
    }
    return 0;
}
