#include "Package.h"
#include <iostream>
using namespace std;

// define static member
int Package::ID = 0;

// Constructor
Package::Package(const string& name, const string& address, const string& city, 
                 const string& state, int ZIP, double weight, double cost) 
{
    this->name = name;
    this->address = address;
    this->city = city;
    this->state = state;
    setWeight(weight);
    setCostPerOunce(cost);
    this->ZIP = ZIP;

    // increment the static ID counter
    ID++;
    id = ID;
}

// Mutators
void Package::setWeight(double w) {
    if (w > 0) {
        weight = w;
    } else {
        cout << "Invalid input. Setting weight to 0." << endl;
        weight = 0.0;
    }
}

void Package::setCostPerOunce(double c) {
    if (c > 0) {
        cost = c;
    } else {
        cout << "Invalid input. Setting cost per ounce to 0." << endl;
        cost = 0.0;
    }
}

// Functions
double Package::calculateCost() const {
    return (weight * cost);
}

void Package::printPackageInfo() const {
    cout << "-----------------------------------" << endl;
    cout << "Package ID " << id << ":" << endl;
    cout << name << endl;
    cout << address << endl;
    cout << city << ", " << state << " " << ZIP << endl;
    cout << "Cost: $" << calculateCost() << endl;
    cout << "-----------------------------------" << endl;
}
