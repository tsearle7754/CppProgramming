#ifndef PRACTICE7_H
#define PRACTICE7_H
#include <iostream>
using namespace std;

class Circle2D {
private:
    double x, y;
    double radius;
    static int numberOfCircles;

public:
    Circle2D(double x, double y, double radius);

    Circle2D(const Circle2D& circle);

    ~Circle2D();

    bool overlaps(const Circle2D& circle) const;

    double getX() const;
    double getY() const;
    double getRadius() const;

    static int getNumberOfCircles(int numberOfCircles);
};

#endif