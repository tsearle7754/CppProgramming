#include <iostream>
using namespace std;

// NUMBER 1
// Write a function void addOne(int x) that takes a number by value and adds 1.
// Then write void addOneRef(int& x) that does the same but by reference.
// Show with a main() program how the results differ.
void addOne(int x) {
    x = x + 1;
}
void addOneRef(int& x) {
    x = x + 1;
}

// NUMBER 3
// Write a recursive function int factorial(int n) that returns n!.
// Test it in main() with factorial(5).
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// NUMBER 5
// Write a function int sumArray(int arr[], int size) that returns the sum of all elements in an array.
// Test it with {1, 2, 3, 4, 5}.
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
        return sum;
}

int main() {
// NUMBER 1
    int a = 5;
    cout << "Before addOne: " << a << endl;
    addOne(a);
    cout << "After addOne: " << a << endl;
    cout << "Before addOneRef: " << a << endl;
    addOneRef(a);
    cout << "After addOneRef: " << a << endl;

// NUMBER 2
// Write a program that declares an integer variable n = 10, then creates a pointer p that points to n.
// Print the value of n.
// Print the address of n.
// Print the value stored at p.
// Print the value of *p.
    int n = 10;
    int* p = &n;
    cout << n << endl;
    cout << &n << endl;
    cout << p << endl;
    cout << *p << endl;

// NUMBER 3
    int num = 5;
    cout << factorial(num) << endl;

// NUMBER 4
// Write a program that prints all numbers from 1 to 50 but:
// Prints "Fizz" instead of numbers divisible by 3.
// Prints "Buzz" instead of numbers divisible by 5.
// Prints "FizzBuzz" for numbers divisible by both.
    for (int i = 1; i <= 50; i++) {
        if (i % 3 == 0 && i % 5 == 0)
            cout << "FizzBuzz" << endl;
        else if (i % 3 == 0)
            cout << "Fizz" << endl;
        else if (i % 5 == 0)
            cout << "Buzz" << endl;
        else 
            cout << i << endl;
    }

// NUMBER 5
    int numbers[] = {1, 2, 3, 4, 5};
    int size_of_numbers = 5;
    cout << sumArray(numbers, size_of_numbers) << endl;
}

// Pointers and arrays quiz next week. Be good with outputs. Array as parameter will always pass by reference and cannot create a new array in the function.