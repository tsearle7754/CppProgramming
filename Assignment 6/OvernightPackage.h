#include "Package.h"
#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include <iostream>
using namespace std;

class OvernightPackage: public Package {
private:
    double fee;

public:
    // Constructor
    OvernightPackage(const std::string& name, const std::string& address, const std::string& city, 
                        const std::string& state, int ZIP, double w, double cost, double fee);

    // Mutator
    double setOvernightFeePerOunce();

    // Function
    void printPackageInfo() const override;
};

#endif