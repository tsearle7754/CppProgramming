# include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int averageArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    int average = sum / size;
    return average;
}

class Rectangle {
    public:
    int width, height;

    Rectangle(int w, int h) {
        width = w;
        height = w;
    }

    int area() {
        return width * height;
    }

    void display() {
        cout << "Width: " << width << ", Height: " << height << ", Area: " << area() << endl;
    }
};

int main() {
    int n;
    cout << "Enter an integer: " << endl;
    cin >> n;
    int fact = factorial(n);
    int arr1[5] = {1, 2, 3, 4, 5};
    int avg = averageArray(arr1, 5);
    
    Rectangle r1(4, 6);
    Rectangle r2(5);

    r1.display();
    r2.display();

    return 0;
}