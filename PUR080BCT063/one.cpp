#include <iostream>
using namespace std;

class Person {
    string name;
    string dateOfBirth;

public:
    Person(string n, string dob) {
        name = n;
        dateOfBirth = dob;
    }

    string getName() {
        return name;
    }

    string getDateOfBirth() {
        return dateOfBirth;
    }
};

int main() {
    Person persons[3] = {
        Person("Alice", "01-01-1990"),
        Person("Bob", "02-02-1995"),
        Person("Charlie", "01-01-1990")
    };

    string dobToFind;
    cout << "Enter Date of Birth (DD-MM-YYYY) to search: ";
    cin >> dobToFind;

    for (int i = 0; i < 3; i++) {
        if (persons[i].getDateOfBirth() == dobToFind) {
            cout << "Name: " << persons[i].getName() << endl;
        }
    }

    return 0;
}
