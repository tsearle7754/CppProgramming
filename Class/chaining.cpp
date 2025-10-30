#include <iostream>
using namespace std;

//chp 12 and 14 quiz
//office hours to go over exam scores 

// Base class
class BaseClass {
private:
    int x, y;

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
    
}
class