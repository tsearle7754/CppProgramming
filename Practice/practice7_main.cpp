#include "practice7.h"
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    Circle2D* pCir1 = new Circle2D(2, 2, 5.5);
    Circle2D cir2(-6, -3, 1.5);
    cout << Circle2D::getNumberOfCircles() << endl;
    Circle2D cir3(cir2);

    if(pCir1->overlaps(cir2))
        cout << "pCir1 overlaps cir2" << endl;
    else
        cout << "pCir1 does not overlap cir2" << endl;

    if(cir3.overlaps(cir2))
        cout << "cir3 overlaps cir2" << endl;
    else
        cout << "cir3 does not overlap cir2" << endl;

    delete pCir1;
    cout << Circle2D::getNumberOfCircles() << endl;
}