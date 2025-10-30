#include <iostream>
using namespace std;

// Inheritance and polymorphism

// Parent class is called base class, child classes are derived classes
// #include "Parent.h"  ---- in header file
// class Child: public Parent   ---- in header file
// Child .cpp class will be normal  -- no need to repeat any code from parent class
// Child class function has priority- same as python
// Test will be of the base class- #include each header file

// Can use any method from parent class with inheritance
// Geometric object example from slides
// If a function's parameter type is a base class, you may pass an object to this function of any of the derived classes
// Cannot call parent class constructor from child class- must recreate in child class

// Constructor and destructor chaining
// constructing an instance of a class invokes the constructors of all the base classes along the inheritance chain
// base class constructor executes, then derived class - destroyed in opposite order

// Redefining functions:
// to call a parent class function on a child class object, use ::
// circle.GeometricObject::toString()
// redefining- signature is the exact same (return type is same)
// overloading- different signature

// look at BaseClass example on Canvas

// Polymorphism: 