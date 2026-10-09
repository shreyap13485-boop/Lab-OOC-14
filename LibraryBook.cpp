#include <iostream>
#include <string>
using namespace std;

class LibraryBook
{
private:
    int bookId;
    string bookName;
    bool issued;

public:
    // Constructor
    LibraryBook(int id, string name)
    {
        bookId = id;
        bookName = name;
        issued = false;
    }

    // Issue book
    void issueBook()
    {
        if (!issued)
        {
            issued = true;
            cout << "Book issued successfully!" << endl;
        }
        else
        {
            cout << "Book is already issued!" << endl;
        }
    }

    // Return book
    void returnBook()
    {
        if (issued)
        {
            issued = false;
            cout << "Book returned successfully!" << endl;
        }
        else
        {
            cout << "Book was not issued!" << endl;
        }
    }

    // Display book details
    void displayBook()
    {
        cout << "\nBook ID: " << bookId << endl;
        cout << "Book Name: " << bookName << endl;

        if (issued)
            cout << "Status: Issued" << endl;
        else
            cout << "Status: Available" << endl;
    }
};

int main()
{
    int id;
    string name;

    cout << "Enter Book ID: ";
    cin >> id;

    cin.ignore();
    cout << "Enter Book Name: ";
    getline(cin, name);

    LibraryBook book(id, name);

    book.displayBook();
    book.issueBook();
    book.displayBook();
    book.returnBook();
    book.displayBook();

    return 0;
}
