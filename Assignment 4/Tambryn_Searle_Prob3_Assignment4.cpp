#include <iostream>
using namespace std;

class MySet {
private:
    unsigned int range;
    unsigned int size;
    bool* set;

public:
    // constructor
    MySet(unsigned r) {
        range = r;
        size = 0;
        set = new bool[range + 1];
        for(unsigned int i = 0; i <= range; i++)
            set[i] = false;
    }

    // copy constructor
    MySet(const MySet& other) {
        range = other.range;
        size = other.size;
        set = new bool[range + 1];
        for(unsigned int i = 0; i<= range; i++)
            set[i] = other.set[i];
    }

    // destructor
    ~MySet() {
        delete[] set;
    }

    // insert
    void insertElement(int k) {
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
    void deleteElement(int m) {
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
    void printSet() const {
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
    bool isEqualTo(const MySet& other) const {
        if(range != other.range)
            return false;
        for(unsigned int i = 0; i <= range; i++) {
            if(set[i] != other.set[i])
                return false;
        }
        return true;
    }
};


int main() {
    MySet s1(20);
    s1.insertElement(13);
    s1.insertElement(7);
    s1.insertElement(20);
    s1.insertElement(21);
    s1.printSet();

    s1.deleteElement(22);
    s1.deleteElement(13);
    s1.printSet();

    MySet s2(100);
    s2.printSet();

    MySet s3 = s1;      // copy constructor
    cout << "s3.isEqualTo(s) = " << s3.isEqualTo(s1) << endl;

    return 0;
}