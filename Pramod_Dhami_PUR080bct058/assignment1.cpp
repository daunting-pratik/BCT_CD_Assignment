#include <iostream>
#include <string>

using namespace std;

class BirthDate
{
    int day, month, year;

public:
    BirthDate()
    {
        day = 0;
        month = 0;
        year = 0;
    }
    BirthDate(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }
    void inputBirthDate()
    {
        cout << "Enter the birth date (day month year): ";
        cin >> day >> month >> year;
    }

    void displayBirthDate() const
    {
        cout << "Birth Date: " << day << "/" << month << "/" << year << endl;
    }
    bool isMatchingBirthDate(const BirthDate &bd) const
    {
        return (day == bd.day && month == bd.month);
    }
};

class Person
{
    string name;
    BirthDate birthDate;

public:
    Person()
    {
        name = "";
    }
    Person(string n, BirthDate bd) : name(n), birthDate(bd)
    {
    }
    void inputPerson()
    {
        cout << "Enter the name: ";
        cin >> name;
        birthDate.inputBirthDate();
    }
    void displayPerson() const
    {
        cout << "Name: " << name << endl;
        birthDate.displayBirthDate();
    }
    bool hasMatchingBirthDate(const BirthDate &bd) const
    {
        return birthDate.isMatchingBirthDate(bd);
    }
};

int main()
{
    int n;
    cout << "Enter the number of persons: ";
    cin >> n;

    Person *people = new Person[n]; 

    for (int i = 0; i < n; i++)
    {
        people[i].inputPerson();
    }

    BirthDate bd;
    cout << "\nEnter the birth date to search: ";
    bd.inputBirthDate();

    cout << "\nPersons with matching birth dates:\n";
    for (int i = 0; i < n; i++)
    {
        if (people[i].hasMatchingBirthDate(bd))
        {
            people[i].displayPerson();
        }
    }

    delete[] people; 

    return 0;
}
