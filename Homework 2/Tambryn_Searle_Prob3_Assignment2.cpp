# include <iostream>
using namespace std;

int evenCount(int value) {
    value = abs(value);  // Handle negative nums
    if (value == 0) return 1;   // End case for 0 input
    int lastDigit = value % 10;
    int count = (lastDigit % 2 == 0 ? 1 : 0);  // If divisble, return 1, else 0
    if (value / 10 == 0)
        return count;
    else 
        return count + evenCount(value / 10);
    
}

int main() {
    int number;
    cout << "Enter the number " << endl;
    cin >> number;
    int evenNumbers = evenCount(number);
    cout << "The number of even digits is " << evenNumbers << endl;
}