#include <iostream>
#include <vector>
#include <utility>
using namespace std;

template<typename T>
T sum(const vector<vector<T>>& v) {
    T total = T();
    for (const auto& x : v) {
        total = total + x;
    }
    return total;
}

class Point {
    int x, y;
    Point(int x_=0, int y_=0) : x(x_), y(y_) {}

    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }

    bool operator!=(const Point& other) const {
        return !(*this == other);
    }
};

ostream& operator<<(std::ostream& os, const Point& p) {
    os << "(" << p.x << ", " << p.y << ")";
    return os;
}
