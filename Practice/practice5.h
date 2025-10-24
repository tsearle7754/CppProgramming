#ifndef PRACTICE5_H
#define PRACTICE5_H

class Complex {
private:
    double real;
    double img;

public:
    // constructor
    Complex();
    Complex(double real, double img);

    // getters
    double getReal() const;
    double getImg() const;

    // setters
    void setReal(double r) const;
    void setImg(double i) const;

    // methods
    void printComplex();
    Complex addition(Complex &comp);
};

Complex additionTwo(Complex &comp1, Complex &comp2);
Complex additionArray(Complex complexArray[], int size);

#endif