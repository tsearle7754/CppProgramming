#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include <iostream>
using namespace std;

// Constructor
OvernightPackage::OvernightPackage(const std::string& name, const std::string& address, const std::string& city, 
                        const std::string& state, int ZIP, double w, double cost, double fee) : 
                        Package(name, address, city, state, ZIP, w, cost) {
                            this->fee = fee;
                        }

// Mutator
void OvernightPackage::setOvernightFeePerOunce(double f) {
    if (f > 0) {
        fee = f;
    } else {
        cout << "Invalid input. Setting overnight fee to 0." << endl;
        fee = 0.0;
    }
}

// Function
double OvernightPackage::calculateCost() const {
    return (fee + cost) * weight;
}

void OvernightPackage::printPackageInfo() const {
    cout << "-----------------------------------" << endl;
    cout << "Overnight Package ID " << id << ":" << endl;
    cout << name << endl;
    cout << address << endl;
    cout << city << ", " << state << " " << ZIP << endl;
    cout << "Cost: $" << calculateCost() << endl;
    cout << "-----------------------------------" << endl;
}