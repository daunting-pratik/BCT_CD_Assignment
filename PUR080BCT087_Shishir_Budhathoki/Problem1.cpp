// Create a class person with name and date of birth as data members.
// Ask the user to enter a date of birth and print all persons name with a matched date of birth.

#include <iostream>
#include <cstring>
using namespace std;
class Person
{
public:
    char name[50];
    char dateOfBirth[11];
    void setPerson(const char *n, const char *dob)
    {
        strcpy(name, n);
        strcpy(dateOfBirth, dob);
    }
};

int main()
{
    int numPeople;
    char name[50], dob[11], searchDOB[11];
    cout << "Enter the number of persons: ";
    cin >> numPeople;
    Person people[100];
    for (int i = 0; i < numPeople; i++)
    {
        cout << "Enter name for person " << i + 1 << ": ";
        cin.ignore();
        cin.getline(name, 50);
        cout << "Enter date of birth for person " << i + 1 << " (format: YYYY-MM-DD): ";
        cin.getline(dob, 11);
        people[i].setPerson(name, dob);
    }

    cout << "Enter the date of birth to search for (format: YYYY-MM-DD): ";
    cin.getline(searchDOB, 11);
    bool found = false;
    for (int i = 0; i < numPeople; i++)
    {
        if (strcmp(people[i].dateOfBirth, searchDOB) == 0)
        {
            cout << "Person with matching date of birth: " << people[i].name << endl;
            found = true;
        }
    }
    if (!found)
    {
        cout << "No persons found with the date of birth:" << searchDOB << endl;
    }
    return 0;
}
