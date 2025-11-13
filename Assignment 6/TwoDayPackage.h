#include "Package.h"
#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include <iostream>
using namespace std;

class TwoDayPackage : public Package {
private:
    double fee;

public:
    // Constructor
    TwoDayPackage(const std::string& name, const std::string& address, const std::string& city, 
                    const std::string& state, int ZIP, double w, double cost, double fee);

    // Mutator
    double setFlatFee();

    // Functions
    double calculateCost();
    void printPackageInfo();
};

#endif