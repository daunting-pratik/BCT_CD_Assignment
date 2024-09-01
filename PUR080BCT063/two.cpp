#include <iostream>
using namespace std;

class Employee {
    int id;
    string name;
    float salary;

public:
    Employee(int i, string n, float s) {
        id = i;
        name = n;
        salary = s;
    }

    float getSalary() {
        return salary;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << endl;
    }
};

int main() {
    Employee employees[3] = {
        Employee(1, "John", 5000),
        Employee(2, "Doe", 7000),
        Employee(3, "Jane", 3000)
    };

    float salaryThreshold;
    cout << "Enter minimum salary to filter: ";
    cin >> salaryThreshold;

    for (int i = 0; i < 3; i++) {
        if (employees[i].getSalary() > salaryThreshold) {
            employees[i].display();
        }
    }

    return 0;
}
