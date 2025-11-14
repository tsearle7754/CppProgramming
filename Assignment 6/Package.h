#ifndef PACKAGE_H
#define PACKAGE_H
#include <iostream>
using namespace std;

class Package {
protected:
    string name;
    string address;
    string city;
    string state;
    int ZIP;
    double weight;
    double cost;
    static int ID;

public:
    // Constructor
    Package(const string& name, const string& address, const string& city, const string& state, int ZIP, double weight, double cost);

    // Mutator
    void setWeight(double w);
    void setCostPerOunce(double c);

    // Functions
    virtual double calculateCost() const;
    virtual void printPackageInfo() const;
};

#endif