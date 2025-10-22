# include <iostream>
using namespace std;

class Person {
private:
    int age;
    char* name;     // pointer (will point to heap)

public:
    Person(const char n[], int a) {
        int length = 0;     // Find length of name (manually)
        while(n[length] != '\0') {
            length++;
        }
        name = new char[length + 1];
        for(int i = 0; i <= length; i++) {
            name[i] = n[i];
        }
        age = a;
    }

    // Copy constructor
    Person(const Person& other) {
        int length = 0;
        while(other.name[length] != '\0') {
            length++;
        }
        name = new char[length + 1];
        for(int i = 0; i <= length; i++) {
            name[i] = other.name[i];     // copy each character
        }
        age = other.age;
    }

    // Setter
    void setName(const char newName[]) {
        delete[] name;      // free old memory
        int length = 0;
        while(newName[length] != '\0') {
            length++;
        }
        name = new char[length + 1];
        for(int i = 0; i <= length; i++) {
            name[i] = newName[i];
        }
    }

    // Display info
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    // Deconstructor
    ~Person() {
        delete[] name;      // Free heap memory
    }
};

int main() {
    Person p1("Alice", 20);     // calls regular constructor
    cout << "Original p1: ";
    p1.display();

    // Shallow copy
    Person p2 = p1;             // calls copy constructor (deep copy)
    cout << "Copied p2: ";
    p2.display();

    // Modify p1's name
    p1.setName("Emily");
    cout << "After modifying p1: " << endl;
    p1.display();
    p2.display();

    return 0;
}