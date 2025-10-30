#include <iostream>
using namespace std;

int sumElements(int arr[], int size) {
    int sum = 0;
    for (int* p = arr; p < arr + size; p++){
        sum += *p;
    }
    return sum;
}