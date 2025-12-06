#include "Setting.h"
#include <iostream>
#include <string>
using namespace std;

template <class T>
Setting<T>::Setting(const T& v) {
    value = v;
}

template <class T>
T Setting<T>::getValue() const {
    return value;
}

template <class T>
void swapSettings(T& a, T& b) {
    temp = a.getValue();
    value_b = temp;
    value_a = b.getValue();
}