#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Circle {
private:
    double x, y, radius;
    static int numCircles;

public:
    Circle(double x = 0, double y = 0, double r = 1) {
        this->x = x;
        this->y = y;
        this->radius = r;
        numCircles++;
    }

    Circle(const Circle& other) {
        this->x = other.x;
        this->y = other.y;
        this->radius = other.radius;
        numCircles++;
    }

    ~Circle() {
        numCircles--;
    }


    double getRadius() const {
        return radius;
    }

    double area() const {
        return M_PI * radius * radius;
    }

    double distanceFrom(const Circle& other) const {
        double dx = x - other.x;
        double dy = y - other.y;
        return sqrt(dx * dx + dy * dy);
    }
    
    bool overlaps(const Circle& other) const {
        double dist = distanceFrom(other);
        return dist <= (radius + other.radius);
    }

    bool operator==(const Circle& other) const {
        return this->radius == other.radius;
    }

    static int getCount() {
        return numCircles;
    }
};

int Circle::numCircles = 0;

template<typename T>
T getMax(const T& a, const T& b) {
    return (a.area() > b.area()) ? a : b;
}

int main() {
    Circle a(0, 0, 5);
    Circle b(3, 4, 2);

    cout << "Distance: " << a.distanceFrom(b) << endl;
    cout << "Overlap: " << (a.overlaps(b) ? "Yes" : "No") << endl;
}