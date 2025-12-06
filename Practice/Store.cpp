#include "Store.h"
#include "Electronics.h"
#include "Product.h"
#include <iostream>
using namespace std;

Store::Store(int capacity) {
    this->capacity = capacity;
    size = 0;
    items = new Electronics[capacity];
}

Store::~Store() {
    delete [] items;
}

void Store::addItem(const Electronics& e) {
    if (size >= capacity) {
        throw std::runtime_error("Store Full");
    }
    items[size] = e;
    size++;
}

template <typename T>
int Store::search(const T& key) const {
    for (int i = 0; i < size; i++) {
        if (items[i] == key) {
            return i;
        }
    }
    return -1;
}