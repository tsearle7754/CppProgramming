#include <iostream>
using namespace std;
// Encapsulation, inheritance, polymorphism


// Polymorphism: a variable of a supertype can refer to a subtype object
// Subtype: a type defined by a derived class (child)
// Supertype: a type defined by a base class (parent)
// in parent class reference, you can pass child object

// use WithVirtualtoString  -- will make function virtual
// virtual: if base class is virtual, all other functions will be virtual (no need to redefine)
// Virtual Functions: invoking a function from child class that is also defined in parent class

// Dynamic Binding: 
//  --function must be defined virtual in the base class
//  --variable that references the object for the func must contain the address of thr object

// Abstract functions- declare getter/setter in header file of parent class, implement in child class
    // -- parent class becomes an abstract class
// pass parent class- will pass child classes as well -- (const GeometricObject& g)

// start writing from the main function- pseudocode