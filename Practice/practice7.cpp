#include "practice7.h"
#include <iostream>
#include <cmath>
using namespace std;


int Circle2D::numberOfCircles = 0;

Circle2D::Circle2D(double x, double y, double radius) {
    this->x = x;
    this->y = y;
    this->radius = radius;
    numberOfCircles++;
}

Circle2D::Circle2D(const Circle2D& circle) {
    this->x = circle.x;
    this->y = circle.y;
    this->radius = circle.radius;
    numberOfCircles++;

}

Circle2D::~Circle2D() {
    numberOfCircles--;
}

double Circle2D::getX() const { return x; }
double Circle2D::getY() const { return y; }
double Circle2D::getRadius() const { return radius; }

int Circle2D::getNumberOfCircles() {
    return numberOfCircles;
}

bool Circle2D::overlaps(const Circle2D& circle) const {
    double dx = this->x - circle.x;
    double dy = this->y - circle.y;
    double distance = sqrt(dx * dx + dy * dy);
    return distance <= (this->radius + circle.radius);
}
