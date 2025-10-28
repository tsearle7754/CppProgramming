#include "Book.h"
#include <iostream>
#include <string>
using namespace std;

Book::Book() {
    title = "Untitled";
    checkedOut = false;
}

Book::Book(string t, string a) {
    title = t;
    author = a;
    available = true;
    checkedOut = false;
}

void Book::checkOut() {
    checkedOut = true;
}

void Book::returnBook() {
    checkedOut = false;
}

bool Book::isCheckedOut() const {
    return checkedOut;
}

string Book::getInfo() const {
    return title + " by " + author;
}

string Book::getTitle() const { return title; }
string Book::getAuthor() const { return author; }
bool Book::isAvailable() const { return available; }