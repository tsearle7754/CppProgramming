#ifndef LIBRARY_H
#define LIBRARY_H
#include "Book.h"
#include <iostream>
#include <vector>
using namespace std;

class Library {
private:
    std::vector<Book> books;

public:
    // constructors
    Library();

    // methods
    void addBook(const Book& b);
    void showAvailableBooks() const;
    bool anyAvailable() const;
};

#endif