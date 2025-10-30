// Assignment 1, Problem 5
#include <iostream>
using namespace std;

int main() {
    // Get input from user
    string message;
    cout << "Enter a string: " << endl;
    getline(cin, message);
    
    // Find and display characters at odd index positions
    for (int i = 1; i < message.size(); i+= 2) {
        cout << message[i];
    }
    return 0;
}