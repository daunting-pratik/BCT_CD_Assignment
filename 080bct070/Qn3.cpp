/*
define a class library with bookTitle,  Author, and numberofcopies as data members.
implement methods to add new books,issue books and return books.ensure that the number of copies is
appropriately updated for each operation.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Library
{
    string Title, Author;
    int copies;
    
public:
    static int book_count;

    Library() : Title(""), Author(""), copies(0) {}
    
    Library(string t, string a, int c) : Title(t), Author(a), copies(c) {}
   

    void addBook()
    {
        cout << "Enter the book Title: ";
        cin>>Title;
        cout << "Enter the Author: ";
        cin>>Author;
        cout << "Enter the number of copies: ";
        cin >> copies;
    }

    void issueBook()
    {
        if (copies > 0)
        {
            copies--;
            cout << "Book issued successfully "<<endl;
        }
        else
        {
            cout << "Book not available "<<endl;
        }
    }

    void returnBook()
    {
        copies++;
        cout << "Book returned successfully "<<endl;
    }

    void display() 
    {
        cout << "Title: " << Title <<endl<<
         "Author: " << Author <<endl<<
          "Copies: " << copies << endl;
    }

    string getTitle() 
    {
        return Title;
    }
};

int Library::book_count=1;

int main()
{
    vector<Library> library;
    Library lib[100],l;
    int choice;
    while(true){
    cout << "1. Add Book"<<endl;
    cout<<"2. Issue Book"<<endl;
    cout<<"3. Return Book"<<endl;
    cout<<"4. Display All Books "<<endl;
    cout<<"5. Exit"<<endl;
    cout << "Enter your choice: "<<endl;
    cin >> choice;


    switch (choice)
    {
        case 1:
        {
            lib[l.book_count].addBook();
            l.book_count++;
            cout << "Book added successfully!"<<endl;
            break;
        }
        case 2:
        {
            string Title;
            cout << "Enter the book Title to issue: ";
            cin>>Title;
            for (int i=1;i<=l.book_count;i++)
            {
                if (lib[i].getTitle() == Title)
                {
                    lib[i].issueBook();
                    break;
                }
                else
                {
                    cout << "Book not found!"<<endl;
                    break;
                }

            }
            break;
        }
        case 3:
        {
            string Title;
            cout << "Enter the book Title to return: ";
            cin>>Title;

           
            for (int i=1;i<=l.book_count;i++)
            {
                if (lib[i].getTitle() == Title)
                {
                    lib[i].returnBook();
                    break;
                }
                 else
                {
                    cout << "Book not found!";
                    break;
                }
            }
            break;
        }
        case 4:      
            cout <<endl<< "Displaying all books:"<<endl;
            for(int i=1;i<=l.book_count;i++){
                lib[i].display();
            }
            break;
        case 5:
            exit(0);
        default:
            cout << "Invalid choice!!!"<<endl;
            break;
    }
    }
    return 0;
}