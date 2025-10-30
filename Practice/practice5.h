#ifndef PRACTICE5_H
#define PRACTICE5_H

class Complex {
private:
    double real;
    double img;

public:
    // constructor
    Complex();
    Complex(double r, double i);

    // getters
    double getReal() const;
    double getImg() const;

    // setters
    void setReal(double r);
    void setImg(double i);

    // methods
    void printComplex();
    Complex addition(Complex &comp);
};

// outside of class
Complex additionTwo(Complex &comp1, Complex &comp2);
Complex additionArray(Complex complexArray[], int size);

#endif