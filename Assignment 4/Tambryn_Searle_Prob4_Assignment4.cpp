#include "Tambryn_Searle_Prob4_Assignment4.h"
using namespace std;

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