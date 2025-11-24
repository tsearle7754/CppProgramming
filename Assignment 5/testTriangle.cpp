#include "Triangle.h"
#include <iostream>
using namespace std;

int main() {
    Triangle t1(4, 4, 4);
    Triangle t2(5, 5, 2);
    Triangle t3(5.5, 5.5, 1);

    cout << "Triangle t1:\n";
    t1.display();
    cout << endl;

    cout << "Triangle t2:\n";
    t2.display();
    cout << endl;

    cout << "Triangle t3:\n";
    t3.display();
    cout << endl;

    cout << "Comparisons:\n";
    cout << "t1 < t2: " << (t1 < t2) << endl;
    cout << "t2 >= t3: " << (t2 >= t3) << endl;
    cout << "t1 != t3: " << (t1 != t3) << endl;

    return 0;
}
