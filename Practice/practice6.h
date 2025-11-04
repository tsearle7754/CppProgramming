#ifndef PRACTICE6_H
#define PRACTICE6_H
#include <iostream>
using namespace std;

class MyInteger {
private:
    int value;
    static double averageOfIntegers;
    static int sumOfIntegers;
    static int numberOfObjects;

public:
    MyInteger(int value);

    int getValue() const;

    bool isEven(int v) const;
    static bool isOdd(int v);

    bool equals(int v) const;
    bool equals(const MyInteger& myInt) const;

    static double getAverageOfIntegers();
};

#endif