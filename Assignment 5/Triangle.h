#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>
using namespace std;

class Triangle {
private:
    // variables
    double side1;
    double side2;
    double side3;

public:
    // constructors
    Triangle();
    Triangle(double s1, double s2, double s3);

    // functions
    double getPerimeter() const;
    double getArea() const;
    void display() const;

    // relational operators
    bool operator<(const Triangle& other) const;
    bool operator>=(const Triangle& other) const;
    bool operator!=(const Triangle& other) const;
};

#endif