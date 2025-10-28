#include "Library.h"
#include "Book.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // create library object
    Library myLibrary;

    // create a few book objects with titles and authors
    Book b1("test1", "testauthor1");
    Book b2("test2", "testauthor2");
    Book b3("test3", "testauthor3");

    // check out a book or two
    b1.checkOut();
    b2.checkOut();

    // add the book objects to the library
    myLibrary.addBook(b1);
    myLibrary.addBook(b2);
    myLibrary.addBook(b3);

    // show all available books
    myLibrary.showAvailableBooks();

    // check if there are available books
    if(myLibrary.anyAvailable()) {
        cout << "There are still books available." << endl;
    } else {
        cout << "There are no books available." << endl;
    }

    return 0;
}