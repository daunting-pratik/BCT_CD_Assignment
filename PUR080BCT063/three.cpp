#include <iostream>
using namespace std;

class Library {
    string bookTitle;
    string author;
    int numberOfCopies;

public:
    Library(string bt, string au, int nc) {
        bookTitle = bt;
        author = au;
        numberOfCopies = nc;
    }

    void addCopies(int n) {
        numberOfCopies += n;
    }

    void issueBook() {
        if (numberOfCopies > 0) {
            numberOfCopies--;
        }
    }

    void returnBook() {
        numberOfCopies++;
    }

    void displayBook() {
        cout << "Title: " << bookTitle << ", Author: " << author << ", Copies: " << numberOfCopies << endl;
    }
};

int main() {
    Library lib("C++ Programming", "Bjarne Stroustrup", 10);

    lib.displayBook();
    lib.issueBook();
    lib.displayBook();
    lib.returnBook();
    lib.displayBook();

    return 0;
}
