#include <iostream>
#include <string>
using namespace std;

#define MAX_BOOKS 100

struct Book {
    int id;
    string title;
    string author;
    int year;
};

struct Library {
    Book books[MAX_BOOKS];
    int count;

    void init() {
        count = 0;
    }

    void addBook(int id, string title, string author, int year) {
        if (count >= MAX_BOOKS) {
            cout << "Library full! Cannot add more books.\n";
            return;
        }
        books[count].id = id;
        books[count].title = title;
        books[count].author = author;
        books[count].year = year;
        count++;
        cout << "Book added successfully.\n";
    }

    void displayBooks() {
        if (count == 0) {
            cout << "No books in library.\n";
            return;
        }
        cout << "Library Books:\n";
        for (int i = 0; i < count; i++) {
            cout << "ID: " << books[i].id << ", "
                 << "Title: " << books[i].title << ", "
                 << "Author: " << books[i].author << ", "
                 << "Year: " << books[i].year << "\n";
        }
    }

    void searchByTitle(string title) {
        bool found = false;
        for (int i = 0; i < count; i++) {
            if (books[i].title == title) {
                cout << "Book found:\n";
                cout << "ID: " << books[i].id << ", "
                     << "Title: " << books[i].title << ", "
                     << "Author: " << books[i].author << ", "
                     << "Year: " << books[i].year << "\n";
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Book titled '" << title << "' not found.\n";
        }
    }
};

int main() {
    Library lib;
    lib.init();

    lib.addBook(1, "1984", "George Orwell", 1949);
    lib.addBook(2, "To Kill a Mockingbird", "Harper Lee", 1960);
    lib.addBook(3, "The Great Gatsby", "F. Scott Fitzgerald", 1925);

    lib.displayBooks();

    cout << "\nSearching for '1984':\n";
    lib.searchByTitle("1984");

    cout << "\nSearching for 'Moby Dick':\n";
    lib.searchByTitle("Moby Dick");

    return 0;
}
