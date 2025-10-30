# include <iostream>
using namespace std;

int sumArray(int arr[], int size) {
    if (size < 0) return 0;
    return arr[size] + sumArray(arr, size - 1);
}

void reverseArray(int *arr, int size) {
    int start = 0;
    int stop = size - 1;
    while (start < stop) {
        int temp = arr[start];
        arr[start] = arr[stop];
        arr[stop] = temp;
        start++;
        stop--;
    }
}

class Circle {
    double radius;

    Circle(double r) {
        radius = r;
    }

    Circle(double r) {
        radius = 1.0;
    }
    
    int area() {
        return 3.14 * radius * radius;
    }

    void display() {
        cout << "Radius: " << radius << endl;
        cout << "Area: " << area() << endl;
    }
};