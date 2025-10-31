#include <iostream>
using namespace std;

//chp 12 and 14 quiz
//office hours to go over exam scores 
// Mon 11:15 AM – 12:15 PM BARC 2231

// Base class
class BaseClass {
private:
    int _x, _y;

public:
    BaseClass(int _x, int _y) {
        this->_x = _x;
        this->_y = _y;
    }

    void display() {
        cout << "Base Class - x: " << this->_x << ", y" << this->_y << endl;
    }
};

// Derived class inheriting from BaseClass
class DerivedClass : public BaseClass {
private:
    int _z;

public:
    
};