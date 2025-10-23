#include "Tambryn_Searle_Prob3_Assignment4.h"
#include <iostream>
using namespace std;

// constructor
MySet::MySet(unsigned r) {
    range = r;
    size = 0;
    set = new bool[range + 1];
    for(unsigned int i = 0; i <= range; i++)
        set[i] = false;
}

// copy constructor
MySet::MySet(const MySet& other) {
    range = other.range;
    size = other.size;
    set = new bool[range + 1];
    for(unsigned int i = 0; i<= range; i++)
        set[i] = other.set[i];
}

// destructor
MySet::~MySet() {
    delete[] set;
}

// insert
void MySet::insertElement(int k) {
    if(k < 0 || k > (int)range) {
        cout << "Invalid insert attempt for the number " << k << "!" << endl;
        return;
    }
    if(!set[k]) {
        set[k] = true;
        size++;
    }
}

// delete
void MySet::deleteElement(int m) {
    if(m < 0 || m > (int)range) {
        cout << "Invalid delete attempted for the number " << m << "!" << endl;
        return;
    }
    if(set[m]) {
        set[m] = false;
        size--;
    }
}

// print
void MySet::printSet() const {
    if(size == 0) {
        cout << "{ --- }" << endl;
        return;
    }
    cout << "{ ";
    bool first = true;
    for(unsigned int i = 0; i <= range; i++) {
        if(set[i]) {
            if(!first) cout << ", ";
            cout << i;
            first = false;
        }
    }
    cout << " }" << endl;
}

// isEqualTo
bool MySet::isEqualTo(const MySet& other) const {
    if(range != other.range)
        return false;
    for(unsigned int i = 0; i <= range; i++) {
        if(set[i] != other.set[i])
            return false;
    }
    return true;
}