#include <iostream>
#include <vector>
using namespace std;

class Point {
private:
    int x, y;
public:
    Point(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
    }
    
    Point operator+(const Point& other) {
        return Point(x + other.x, y + other.y);
    }
    Point operator-(const Point& other) {
        return Point(x - other.x, y - other.y);
    }
};

class Accumulator {
public:
    int value;
    static int sum;
    Accumulator(int v) {
        value = v;
        sum += v;
    }
    static int getSum() {
        return sum;
    }
};

template<typename T>
T getMax(const T& arr, const T& size) {
    T max = arr[0];
    for(int i = 0; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

class Rectangle {
public:
    int width, height;
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }
    Rectangle operator*(const Rectangle& other) {
        return Rectangle((width * other.width), (height * other.height));
    }
    Rectangle operator==(const Rectangle& other) const {
        return width == other.width && height == other.height;
    }
}

class Point3D {
public:
    int x, y, z;
    Point3D() {
        x = 0;
        y = 0;
        z = 0;
    }
    Point3D(int x, int y, int z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    Point3D(int num) {
        x = num;
        y = num;
        z = num;
    }
};

int main() {
    vector<int> v(5);
    for(int i = 0; i < 5; i++) 
        v[i] = i + 1;
    for(int i = 0; i < 5; i++)
        v[i] *= 2;
    for(int i = 0; i < 5; i++)
        cout << v[i] << " " << endl;

    double* arr = new double[5];
    for(int i = 0; i < 5; i++)
        arr[i] = 0.1 * (i + 1);
    for(int i = 0; i < 5; i++)
        cout << arr[i] << " " << endl;
    delete[] arr;

    float* array = new float[4];
    for(int i = 0; i < 4; i++) {
        array[i] = i + 1.1;
    }
    delete[] array;

    return 0;
}