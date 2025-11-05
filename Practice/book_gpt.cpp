#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Book {
private:
    string title;
    string author;
    double* rating;

public:
    Book(string t, string a, double r) {
        title = t;
        author = a;
        rating = new double(r);
    }

    Book(const Book& other) {
        title = other.title;
        author = other.author;
        rating = new double(*other.rating);
    }

    Book() {
        title = "Unknown";
        author = "Unknown";
        rating = new double(0.0);
    }

    ~Book() {
        delete rating;
    }

    string getTitle() const {
        return title;
    }

    string getAuthor() const {
        return author;
    }

    double getRating() const {
        return *rating;
    }

    bool operator==(const Book& other) {
        return title == other.title;
    }
};

class Library {
private:
    Book* books;
    int numBooks;
    int capacity;

public:
    Library(int n) {
        capacity = n;
        numBooks = 0;
        books = new Book[capacity];
    }

    ~Library() {
        delete[] books;
    }

    void addBook(const Book& other) {
        if(numBooks < capacity) {
            books[numBooks] = other;
            numBooks++;
        } else {
            cout << "Library is full!" << endl;
        }
    }

    void display() const {
        for(int i = 0; i < numBooks; i++) {
            cout << i + 1 << ". " << books[i].getTitle()
                << " by " << books[i].getAuthor()
                << " (Rating: " << books[i].getRating() << ")" << endl;
        }
    }
};

int main() {
    Library lib(3);

    Book b1("1984", "George Orwell", 9.1);
    Book b2("The Hobbit", "J.R.R. Tolkien", 8.7);
    Book b3("Dune", "Frank Herbert", 9.3);

    lib.addBook(b1);
    lib.addBook(b2);
    lib.addBook(b3);

    lib.display();

    return 0;
}