#ifndef ELECTRONICS_H
#define ELECTRONICS_H

#include "Product.h"
#include <string>
using namespace std;

class Electronics : public Product {
private:
    string brand;
    int warrantyMonths;
    static int count;

public:
    // Constructors
    Electronics();  // default constructor
    Electronics(string n, string b, double p, int w);

    // Destructor
    ~Electronics();

    // Getters (const functions)
    string getBrand() const;
    int getWarrantyMonths() const;

    // Polymorphic display
    void display() const override;

    // Operator overloading
    bool operator==(const Electronics& other) const;

    // Static count getter
    static int getCount() { return count; }
};

#endif
