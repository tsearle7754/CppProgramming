#include "Triangle.h"
#include <iostream>
using namespace std;

int main() {
    Triangle t1(4, 4, 4);
    Triangle t2(5, 5, 2);
    Triangle t3(5.5, 5.5, 1);

    t1.display();
    t2.display();
    t3.display();

    if (t1 < t2)
        cout << "t1 is smaller than t2" << endl;
    else
        cout << "t1 is not smaller than t2" << endl;

    if (t1 != t2)
        cout << "t1 and t2 are different" << endl;
    else
        cout << "t1 and t2 are the same" << endl;

    return 0;
}
