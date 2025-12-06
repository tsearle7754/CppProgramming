#include "Electronics.h"
#include <iostream>
using namespace std;

// Initialize static member
int Electronics::count = 0;

// --------------------
// Default constructor
Electronics::Electronics()
    : Product("", 0.0), brand(""), warrantyMonths(0) {
    count++;
}

// Parameterized constructor
Electronics::Electronics(string n, string b, double p, int w)
    : Product(n, p), brand(b), warrantyMonths(w) {
    count++;
}

// Destructor
Electronics::~Electronics() {
    count--;
}

// --------------------
// Getters
string Electronics::getBrand() const {
    return brand;
}

int Electronics::getWarrantyMonths() const {
    return warrantyMonths;
}

// --------------------
// Polymorphic display
void Electronics::display() const {
    cout << "Name: " << getName()
         << ", Brand: " << brand
         << ", Price: " << getPrice()
         << ", Warranty: " << warrantyMonths << " months"
         << endl;
}

// --------------------
// Overloaded operator==
bool Electronics::operator==(const Electronics& other) const {
    return (getName() == other.getName()) && (brand == other.brand);
}
