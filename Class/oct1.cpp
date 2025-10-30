#include <iostream>
using namespace std;

// Passing objects to functions by value and by reference- be good with this
// Class is a user defined data type
// Watch scope of variables in classes and functions

// ex. pass by value
// void printCircle(Circle c)
// ex. pass by reference
// void printCircleRef(Circle& c) 
// Circle myCircle(5.0);
// printCircle(myCircle);  , pass by value (printCircle is the name of the function)

// Array of objects
// Circle cirleArray[3] = {Circle(3), Circle(4), Circle(5)};   - array of 3 Circle objects
// Each bucket of array carries object of Circle class

// Global variables can be declared and initialized outside or inside of the functions (latest initialization is value used for variable)
// Static variables in normal functions will retain their value between function calls- can reuse, increment, decrement (static int b = 10;)
// In classes, static variables 
// Static variables made in header file for class do not need to be declared as static in .cpp file
// cout << "Number of circle objects created: "         // Because static variable, can access using class name instead of object of class
    // << Circle::getNumberOfObjects() << endl;

//Circle::Circle() - scope resolution operator used for reference or static variables in classes-- when to use?
// Define class, .cpp, .h, static variables, gloabl, functions for exam

// Dynamic memory allocation
// new and delete keywords
// int* reverse(const int* list, int size) { int* result = new int[size];
// new- taking control, more access to memory, persistent (always accessible until delete)
// Object, array, variable can use "new"
// delete- free up memory created by "new" operator, delete[] for arrays
// ex.
int main() {
    int x = 10;
    int* r = new int;            // Can only use delete for memory created by new
    *r = x;
    delete r;
    int* result = new int[6];
    delete[] result;


// Dynamic objects
    //ClassName* pObject = new ClassName();  // can have parameters or not, can use () or not
    // delete pObject;


    string* p = new string("abcdedfg");                        
    cout << "The first three characters in the string are "
    << (*p).substr(0, 3) << endl;
    cout << "The length of the string is " << (*p).length() <<      //Could also use p-> (arrow operator)--- p-> == *p
    endl;

// Objects of classes can be defined by 
//Circle circle1(5);
//Circle circle1 = new Circle();

// Destructors
// Pre-conditions you want for the object will be defined inside the CONstructor
// Post-conditions you want for the object (by new keyword) will be defined inside the DEstructor
    // If there's a delete, the code in destructor will run before the object terminates
    // Destructor name will also be the same as the class- but must put ~Destructor()

// Copy Constructor
    // Every class will have one
    // ClassName(const ClassName&)
    // Used to create an object initialized with another object's data
// Shallow copy- copy course1 to course2. Now course1 and course2 point to the same student.
    // Circle circle2(circle1&);    or Course course2(course1)
// Deep copy- copy course1 to course2. Now course1 and course2 point to two different arrays.

// When shallow copying an object of a class with a pointer, will copy the address of the pointer type- error when trying to change
// Deep copy will work with pointers
    // writing code under copy constructor, overriding the c++ copying. Course::Course(const Course& course)
    // must copy all values of all variables from other object to new object
// Class object(object-copy) which will execute? Whichever one has one parameter.
// Shallow copy and deep copy will be long question on exam

}