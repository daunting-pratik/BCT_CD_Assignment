#include <iostream>
#include <string>
using namespace std;

class Library
{
private:
    string bookTitle;
    string author;
    int numberOfCopies;

public:
    Library(string title, string authorName, int copies)
    {
        bookTitle = title;
        author = authorName;
        numberOfCopies = copies;
    }
    void addBooks(int copies)
    {
        numberOfCopies += copies;
        cout << copies << " copies of '" << bookTitle << "' added. Total copies: " << numberOfCopies << endl;
    }
    void issueBook()
    {
        if (numberOfCopies > 0)
        {
            numberOfCopies--;
            cout << "One copy of '" << bookTitle << "' issued. Remaining copies: " << numberOfCopies << endl;
        }
        else
        {
            cout << "No copies of '" << bookTitle << "' available for issuing." << endl;
        }
    }
    void returnBook()
    {
        numberOfCopies++;
        cout << "One copy of '" << bookTitle << "' returned. Total copies: " << numberOfCopies << endl;
    }
    void displayBookInfo() const
    {
        cout << "Book Title: " << bookTitle << ", Author: " << author << ", Copies Available: " << numberOfCopies << endl;
    }
};

int main()
{
    Library book("Math", "Shishir", 4);
    book.displayBookInfo();
    book.addBooks(6);
    book.issueBook();
    book.returnBook();
    book.displayBookInfo();
    return 0;
}
