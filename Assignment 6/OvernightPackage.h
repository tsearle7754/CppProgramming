#include "Package.h"
#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include <iostream>
using namespace std;

class OvernightPackage: public Package {
protected:
    double fee;

public:
    // Constructor
    OvernightPackage(const std::string& name, const std::string& address, const std::string& city, 
                        const std::string& state, int ZIP, double w, double cost, double fee);

    // Mutator
    void setOvernightFeePerOunce(double f);

    // Function
    double calculateCost() const override;
    void printPackageInfo() const override;
};

#endif