#include <iostream>
#include <string>
using namespace std;

// Function to swap the case of each character in the string
string swapCase(const string &n) {
    string result = n;
    for (char &c : result) {
        if (islower(c))
            c = toupper(c);
        else if (isupper(c))
            c = tolower(c);
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string: "<< endl;
    getline(cin, input);
    string swapped = swapCase(input);
    cout << "The new string is: " << swapped << endl;
    return 0;
}

// Function to count number of digits in an integer
int getDigit(int n) {
    n = abs(n);  // Handle negative numbers
    if (n == 0) return 1;
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}

int main() {
    int number;
    cout << "Enter an integer: " << endl;
    cin >> number;
    int digitCount = getDigit(number);
    cout << "The number of digits in the integer is: " << digitCount << endl;
}

// Pointer examples
int main() {
    int num;
    int* p1 = &num;  // p1 holds the address of num
    cout << "The value of the num is " << num << endl;
    cout << "The value of the num is " << *p1 << endl;   // dereference operator to get value at address
    cout << "The address of the num is " << &num << endl;
    cout << "The address of the num is " << p1 << endl;
    cout << "The value of pointer p1 is " << p1 << endl;
    cout << "The address of pointer p1 is " << &p1 << endl;
}

// Function to print array elements
