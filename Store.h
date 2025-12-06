#ifndef STORE_H
#define STORE_H
#include "Product.h"
#include "Electronics.h"
#include <iostream>
using namespace std;

class Store {
private:
    Electronics* items; //dynamic array
    int capacity;
    int size;

public:
    Store(int capacity);
    ~Store();

    void addItem(const Electronics& e);

    template<typename T>
    int search(const T& key) const;
    void saveToFile(const string& filename) const;
};

#endif