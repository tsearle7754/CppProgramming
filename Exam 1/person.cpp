# include <iostream>
# include <cmath>
using namespace std;

int maxValue(int a, int b) {
    return (a > b) ? a : b;
}

int maxValue(int arr[], int size) {
    int maxVal = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int power(int base, int exp) {
    if (exp == 0) return 1;
    int result = base^exp;
    return result;
}

class Person {
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    Person(string n) {
        name = n;
        age = 18;
    }

    void display() {
        cout << "Name : " << name << ", Age: " << age << endl;
    }
};

int main() {
    int* arr = new int[5];
    for (int i = 0; i < 5; i++) {
        *(arr + i) = 1 + i;
        cout << *(arr + i) << " ";
    }
    cout << endl;

    cout << "Max Value (int, int): " << maxValue(10, 20) << endl;
    cout << "Max Value (array): " << maxValue(arr, 5) << endl;

    cout << "Power: " << power(2, 5) << endl;

    Person p1("Alice", 25);
    Person p2("Bob");
    p1.display();
    p2.display();

    delete[] arr;
}