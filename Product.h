#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name;
    double price;

public:
    Product(string n, double p);
    
    string getName() const;
    double getPrice() const;
    virtual void display() const = 0;   
    // pure virtual function, makes class abstract
};

#endif