/*Create a class person with Name and date of birth as data members.
Ask the user to enter a date of birth and print all persons Name with a matched date of birth.*/


#include<iostream>
using namespace std;
int count=0;

class person
{
    char Name[30];
    int yrs;
    int Months;
    int Day;
    public:
    person(){}
    person(int d,int m,int y){
        Day=d;
        Months=m;
        yrs=y;
    }
    void Input()
    {
        cout<<"Enter Name: ";
        cin>>Name;
        cout<<"Enter DOB (DD/MM/YY):";
        cin>>Day>>Months>>yrs;
    }
    void display()
    {
        cout<<"Name of the person with the given DOB: \n"<<Name<<endl;
    }
    bool operator==(person &p)
    {
        if((yrs==p.yrs)&&(Months==p.Months)&&(Day==p.Day))
        {
            ::count=1;
            return true;
        }
        else
            return false;
    }
};
int main()
{
    int n,d,m,y;
    cout<<"Enter Number of Persons: ";
    cin>>n;
    person p[100];
    for(int i=0;i<n;i++)
    {
        p[i].Input();
    }
    cout<<"Enter the date of birth to Search::"<<endl;
    cin>>d>>m>>y;
    person a(d,m,y);
    for(int i=0;i<n;i++)
    {
        if(a==p[i]){
            cout<<"Matched"<<endl;
            p[i].display();
        }
    }
    if(::count!=1){
        cout<<"Did Not Matched"<<endl;
    }
    return 0;
}