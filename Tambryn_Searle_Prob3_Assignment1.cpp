// Assignment 1, Problem 3
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Get integer from user
    int num;
    cout << "Enter an integer to see if the given number is divisible by 4 or not: " << endl;
    cin >> num;

    // Check for negative 
    if (num < 0)
        cout << "The program does not accept negative numbers." << endl;

    // Check for positive range
    else if (num > 0 && num <= 100) {

        // Check for divisibility
        if (num % 4 == 0) {
            cout << "The given number " << num << " is divisible by 4." << endl;
        }
        else {
            cout << "The given number " << num << " is not divisible by 4." << endl;
        }

        // Find and display quotient and remainder
        float quotient = static_cast<float> (num) / 4;
        int remainder = num % 4;
        cout << "Quotient: " << quotient << " and Remainder: " << remainder << endl;
    }

    // Check for over 100. Find and display square root
    else if (num > 100) {
        float square_root = sqrt(static_cast<float>(num));
        cout << "The entered number is greater than 100 and the square root is: " << square_root << endl;
    }
    return 0;
}