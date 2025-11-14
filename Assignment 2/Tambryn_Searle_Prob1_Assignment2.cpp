# include <iostream>
using namespace std;
 
int main() {
// Given variables
    long value1 = 200000;
    long value2;

    // Statements
    long* lPtr = &value1;
    cout << *lPtr << endl;
    value2 = *lPtr;
    cout << value2 << endl;
    cout << &value1 << endl;
    cout << lPtr << endl;   // Same as value1
}