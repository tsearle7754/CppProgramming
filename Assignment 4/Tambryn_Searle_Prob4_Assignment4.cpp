#include <iostream>
using namespace std;

// func overloads
int average(const int* array, int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum / size;
}

double average(const double* array, int size) {
    double sum = 0.0;
    for(int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum / size;
}

int main() {
    double numbers[10];
    cout << "Enter 10 numbers: " << endl;

    for(int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    double avg = average(numbers, 10);
    cout << "Average: " << avg << endl;

    return 0;
}