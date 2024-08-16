#include<iostream>
using namespace std;

// Base class
class ComplexBase {
protected:
    int real;
    float img;

public:
    ComplexBase() : real(0), img(0.0) {}

    ComplexBase(int r, float f) : real(r), img(f) {}

    void getComplex() {
        cout << "\nEnter Real Number:";
        cin >> real;
        cout << "Enter Img Number:";
        cin >> img;
    }

    void displayComplex() {
        cout << "\nThe Complex Number is: " << real << "+i" << img;
    }
};

// Derived class
class Complex : public ComplexBase {
public:
    Complex() : ComplexBase() {}

    Complex(int r, float f) : ComplexBase(r, f) {}

    void addComplex(const Complex& c2) {
        Complex c3;
        c3.real = real + c2.real;
        c3.img = img + c2.img;
        cout << "\nThe resultant number is: " << c3.real << "+i" << c3.img;
    }
};

int main() {
    Complex c1, c2;

    cout << "Enter details for Complex Number 1:\n";
    c1.getComplex();

    cout << "\nEnter details for Complex Number 2:\n";
    c2.getComplex();

    cout << "\nEntered Complex Numbers:\n";
    c1.displayComplex();
    c2.displayComplex();

    c1.addComplex(c2);

    return 0;
}

