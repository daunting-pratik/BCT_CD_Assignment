//Question Number 1
#include<iostream>
#include<string>
using namespace std;
class Person
{
    private:
    string name;
    string dateofBirth;
public:
    Person ()
    {}
    Person (string Name,string DOB)
    {
       name=Name;
       dateofBirth=DOB;
    }

   
     string getDOB()
     {
         return dateofBirth;
     }

};
int main()
{
    const int n=4;
    int i;

     Person p[n] = {
        Person("Prashant Shah", "2003-06-02"),
        Person("Smarika Sharma", "2005-01-02"),
        Person("Mallika Singh", "2000-08-28"),
        Person("Rohit Sharma", "1990-03-19")
    };

    string DOB;
    cout<<"Enter your DOB (YY-MM-DD)";
    cin>>DOB;
    bool found=false;
    
    for(i=0;i<n;i++)
    {
        if(p[i].getDOB()==DOB)
        {
          cout<<"The dob with the user found  "<<endl;
          found=true;  
        }
    }
    if(!found)
    {
        cout<<"no matching DOB found";
    }
    return 0;
}