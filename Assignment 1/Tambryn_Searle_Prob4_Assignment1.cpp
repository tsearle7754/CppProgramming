// Assignment 1, Problem 4
#include <iostream>
#include <cmath>
#include <iomanip> // For setprecision() for 2 decimal places
using namespace std;

int main() {
    // Get user input
    float side;
    cout << "Enter the side: " << endl;
    cin >> side;

    // Calculations
    const float pi = 3.14159265;
    float area = (6 * pow(side, 2)) / (4 * tan(pi / 6));

    // Display area with two decimal places
    cout << fixed << setprecision(2);
    cout << "The area of the hexagon is " << area << endl;

    return 0;
}