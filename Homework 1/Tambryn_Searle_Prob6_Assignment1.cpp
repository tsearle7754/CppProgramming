// Assignment 1, Problem 6
#include <iostream>
using namespace std;

int main() {
    // Get input from user
    int num;
    cout << "Enter an integer between 0 and 1000000: " << endl;
    cin >> num;

    // Isolate digits and calculate sum
    int sum = 0;
    while (num > 0) {
        int last_digit = num % 10;  // Isolates last digit
        sum += last_digit;
        num = num / 10;  // Removes last digit
    }

    // Display sum
    cout << "The sum of the digits is: " << sum << endl;
    return 0;
}