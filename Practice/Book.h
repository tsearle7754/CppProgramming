#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    bool checkedOut;

public:
    // constructors
    Book();
    Book(string t, string a);

    // methods
    void checkOut();
    void returnBook();
    bool isCheckedOut() const;
    string getInfo() const;
};

#endif