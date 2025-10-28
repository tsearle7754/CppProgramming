#include "Triangle.h"
#include <iostream>
#include <cmath>
using namespace std;

// no-arg
Triangle::Triangle() {
    side1 = 1.0;
    side2 = 1.0;
    side3 = 1.0;
}

// arg
Triangle::Triangle(double s1, double s2, double s3) {
    side1 = s1;
    side2 = s2;
    side3 = s3;
}
// functions
double Triangle::getPerimeter() const {
    return side1 + side2 + side3;
}

double Triangle::getArea() const {
    double s = getPerimeter() / 2.0;
    return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}

void display() {
    cout << "Area: " << getArea() << ", Perimeter: " << getPerimeter()
    << ", Sides: " << side1 << ", " << side2 << ", " << side3 << endl;
}

// relational operators
bool Triangle::operator<(const Triangle& other) const {
    return getArea() > other.getArea();
}

bool Triangle::operator>=(const Triangle& other) const {
    return getArea() >= other.getArea();
}

bool Triangle::operator!=(const Triangle& other) const {
    return getArea() != other.getArea();
}