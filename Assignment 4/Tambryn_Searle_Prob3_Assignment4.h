#ifndef MYSET_H
#define MYSET_H

class MySet {
private:
    unsigned int range;
    unsigned int size;
    bool* set;

public:
    MySet(unsigned r);
    MySet(const MySet& other);
    ~MySet();

    void insertElement(int k);
    void deleteElement(int k);
    void printSet() const;
    bool isEqualTo(const MySet& other) const;
};

#endif
