/*Design a class Employee with id, Name, and Salary as data members.
Implement functions to input employee data and display employees who have a Salary greater than a user-specified amount.*/

#include<iostream>
#include<string>
using namespace std;

class Employee
{
    int id;
    string Name;
    float Salary;
public:
   Employee()
    {}
    void getInput()
    {
        cout<<"Enter the ID:";
        cin>>id;
        cout<<"Enter the Name:";
        cin>>Name;
        cout<<"Enter the Salary:";
        cin>>Salary;
    }
    void show()
    {
        cout << "ID: " << id <<endl<<
         "Name: " << Name <<endl<<
         "Salary: " << Salary << endl;
    }
    float getSalary()
    {
        return Salary;
    }
};
int main()
{
    int n,i,c=0;
    cout<<"No of employee:"<<endl;
    cin>>n;
    Employee* e = new Employee[n];
    
    for(i=0;i<n;i++)
    {
    cout<<"Enter employee id,Name and Salary: "<<endl;
    e[i].getInput();
    cout<<endl;
    }

    float money;
    cout<<"Enter the amount to be compared:";
    cin>>money;
    cout<<"Employees having Salary greater than the entered amount is"<<":"<<endl;
    
    for(i=0;i<n;i++)
    {
        if(e[i].getSalary()>money)
        {
            c=1;
            e[i].show();  
        }
    }
    if(c==0){
        cout<<"No Employee found"<<endl;
    }
    delete[] e;
    return 0;
}