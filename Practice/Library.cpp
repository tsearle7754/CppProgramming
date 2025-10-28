#include "Book.h"
#include "Library.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Library::Library() {}

void Library::addBook(const Book& b) {
    books.push_back(b);
}

void Library::showAvailableBooks() const {
    for(int i = 0; i < books.size(); i++) {
        cout << books[i].getTitle() << " by " << books[i].getAuthor() << endl;
    }
}

bool Library::anyAvailable() const {
    // loop through books, set isAvailable to true/false accordingly
    for(int i = 0; i < books.size(); i++) {
        if(books[i].isAvailable()) {
            return true;
        }
    }
    return false;
}