#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;
    double* ratings;   // dynamically allocated array of ratings
    int numRatings;
    static int counter;  // tracks number of Book objects

public:
    // Constructor
    Book(string t = "", string a = "", double p = 0.0, int num = 0) {
        title = t;
        author = a;
        price = p;
        numRatings = num;

        if (numRatings > 0)
            ratings = new double[numRatings];
        else
            ratings = nullptr;

        // Initialize all ratings to 0
        for (int i = 0; i < numRatings; i++)
            ratings[i] = 0.0;

        counter++;
    }

    // Copy constructor (deep copy)
    Book(const Book& other) {
        title = other.title;
        author = other.author;
        price = other.price;
        numRatings = other.numRatings;

        if (numRatings > 0) {
            ratings = new double[numRatings];
            for (int i = 0; i < numRatings; i++)
                ratings[i] = other.ratings[i];
        } else {
            ratings = nullptr;
        }

        counter++;
    }

    // Destructor
    ~Book() {
        delete[] ratings;
        counter--;
    }

    // Mutator for setting a rating
    void setRating(int index, double value) {
        if (index >= 0 && index < numRatings)
            ratings[index] = value;
        else
            cout << "Invalid index" << endl;
    }

    // Accessor for average rating
    double getAverageRating() const {
        if (numRatings == 0)
            return 0.0;

        double sum = 0;
        for (int i = 0; i < numRatings; i++)
            sum += ratings[i];
        return sum / numRatings;
    }

    // Accessor functions
    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    double getPrice() const { return price; }

    // Static function to get current object count
    static int getCount() {
        return counter;
    }
};

// Definition of static member
int Book::counter = 0;

int main() {
    Book* p1 = new Book("1984", "George Orwell", 14.99, 3);
    p1->setRating(0, 4.8);
    p1->setRating(1, 4.6);
    p1->setRating(2, 5.0);

    cout << p1->getTitle() << " avg rating: " << p1->getAverageRating() << endl;
    cout << "Books in memory: " << Book::getCount() << endl;

    delete p1; // destructor runs
    cout << "Books after delete: " << Book::getCount() << endl;
}
