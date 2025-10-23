#include <iostream>
#include "Tambryn_Searle_Prob3_Assignment4.h"
using namespace std;

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