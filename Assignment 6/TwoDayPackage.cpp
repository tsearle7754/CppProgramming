#include "Package.h"
#include "TwoDayPackage.h"
#include <iostream>
using namespace std;

// Constructor
TwoDayPackage::TwoDayPackage(const std::string& name, const std::string& address, const std::string& city, 
                        const std::string& state, int ZIP, double w, double cost, int id, double fee) : 
                        Package(name, address, city, state, ZIP, w, cost, id) {
                        this->fee = fee;
                    }

// Mutator
void TwoDayPackage::setFlatFee(double f) {
    if (f > 0) {
        fee = f;
    } else {
        cout << "Invalid input. Setting flat fee to 0." << endl;
        fee = 0.0;
    }
}

// Function
double TwoDayPackage::calculateCost() const{
    return fee + (weight * cost);
}

void TwoDayPackage::printPackageInfo() const {
    cout << "-----------------------------------" << endl;
    cout << "Two Day Package ID " << id << ":" << endl;
    cout << name << endl;
    cout << address << endl;
    cout << city << ", " << state << " " << ZIP << endl;
    cout << "Cost: $" << calculateCost() << endl;
    cout << "-----------------------------------" << endl;
}