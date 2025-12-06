#ifndef SETTING_H
#define SETTING_H
#include <iostream>
using namespace std;

template <class T>
class Setting {
private:
    T value;

public:
    Setting(const T& v);
    T getValue() const;

    void swapSettings(T& a, T& b);
};

#include "Setting.tpp"
#endif