#include <iostream>
#include "practice5.h"
using namespace std;

Complex::Complex() {
    real = 0.0;
    img = 0.0;
}

Complex::Complex(double r, double i) {
    real = r;
    img = i;
}

double Complex::getReal() const { 
    return real; 
}
double Complex::getImg()  const { 
    return img; 
}

void Complex::setReal(double r) {
    real = r;
}
void Complex::setImg(double i) {
    img = i;
}

void Complex::printComplex() {
    // func needs to handle positive and negative img parts
    cout << real;
    if(img >= 0) {
        cout << " + " << img << "i";
    } else {
        cout << " - " << -img << "i";
    }
}

Complex Complex::addition(Complex &comp) {
    double newReal = this->real + comp.real;
    double newImg = this-> img + comp.img;

    Complex sum(newReal, newImg);
    return sum;
}