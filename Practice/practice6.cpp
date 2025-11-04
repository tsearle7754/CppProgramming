#include "practice6.h"
#include <iostream>
using namespace std;

double MyInteger::averageOfIntegers = 0.0;
int MyInteger::sumOfIntegers = 0;
int MyInteger::numberOfObjects = 0;

MyInteger::MyInteger(int v) {
    value = v;
    numberOfObjects++;
    sumOfIntegers += v;
}

int MyInteger::getValue() const { return value; }

bool MyInteger::isEven(int v) const { return v % 2 == 0; }
bool MyInteger::isOdd(int v) {return v % 2 != 0; }

bool MyInteger::equals(int myInt) const { return value == myInt; }
bool MyInteger::equals(const MyInteger& myInt) const { return value == myInt.value; }

double MyInteger::getAverageOfIntegers() {
    if(numberOfObjects == 0) {
        return 0.0;
    }
    return static_cast<double>(sumOfIntegers) / numberOfObjects;
}