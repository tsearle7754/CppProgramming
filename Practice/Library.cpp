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

void Library::showAnyAvailableBooks() const {
    for(int = 0; i < books.size(); i++) {
        cout << books[i].getTitle() << " by " << books[i].getAuthor() << endl;
    }
}

bool Library::showAnyAvailable() const {

}