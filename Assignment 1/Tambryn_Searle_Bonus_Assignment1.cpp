// Assignment 1, Bonus Problem
#include <iostream>
using namespace std;

int main() {
    // Get input from user
    int num;
    cout << "Enter an integer: " << endl;
    cin >> num;

    // Isolate digits and calculate sum
    while (num >= 10) {
        int sum = 0;
        int temp = num;   // Temporary variable to hold original value
        while (temp > 0) {
            int last_digit = temp % 10;
            sum += last_digit;
            temp = temp / 10;
        }
        num = sum; // Update num to be the sum of its digits
    }
    
    // Display sum
    cout << num << endl;
    return 0;
}