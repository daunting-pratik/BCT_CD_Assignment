//Q.no.2
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Employee
{
    int id;
    string name;
    float salary;

public:
    Employee() : id(0), name(""), salary(0) {}

    Employee(int i, string n, float s) : id(i), name(n), salary(s) {}

    void get_input()
    {
        cout << "Enter the id: ";
        cin >> id;
        cout << "Enter the name: ";
        cin.ignore(); // clear buffer
        getline(cin, name);
        cout << "Enter the salary: ";
        cin >> salary;
    }

    void display() const
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

    void check_salary(float s) const
    {
        if (salary > s)
        {
            display();
        }
    }
};

int main()
{
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    vector<Employee> employees(n);

    for (int i = 0; i < n; i++)
    {
        employees[i].get_input();
    }

    float s;
    cout << "Enter the salary to search: ";
    cin >> s;

    cout << "\nEmployees with salary greater than " << s << ":\n";
    for (const auto &emp : employees)
    {
        emp.check_salary(s);
    }

    return 0;
}
