#include <iostream>
#include "Tambryn_Searle_Prob4_Assignment4.h"
using namespace std;

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