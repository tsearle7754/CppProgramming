#include <iostream>
using namespace std;
// Do good practice of writing code where you create a class, constructor, function, and object in class. 

// Objects and Classes.
// An object represents a real-world entity. State of an object consists of a set of data fields (properties). Behavior of an object is defined by a set of functions.
// Instantiation is the process of creating the instance of the class (object/instance of class are same thing).
// Object will be exact copy of the class, but can store values

// Classes are constructs that are used to define objects of the same type. Classes use constructors to initialize objects.
// Constructor- same name as the class, can overload constructors (different signature), no return type. Do not NEED constructor, will execute automatically.

// Inclusion guard- prevents a header file from being included multiple times: #ifndef Header_file_name.h and #define Header_file_name.h --- #endif
// If function code ends up in header file, the code will become an inline function
#ifndef A_H
#define A_H

class A {
    public:
    A() {
        //do something;
    }
    double f1() {
        // return a number;
    }
    inline double A::f2();   // inline function
};

#endif

// Data field encapsulation- making data field private
// instead of public, use private
// Accessor and mutator- get and set, respectively
// return Type getPropertyName(dataType, propertyValue)
// if boolean- bool isPropertyName()

class Student {
  string name;
  int age;

  Student(string n, int a) {
    name = n;
    age = a;
  }

  Student(string n) {
    name = n;
    age = 0;
  }

  void display() {
    cout << "Name: " << name << ", Age: " << age << endl;
  }

  main() {
    Student s1("Alice", 20);
    Student s2("Bob");

    s1.display();
    s2.display();

    return 0;
  }
}