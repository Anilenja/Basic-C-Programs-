#include<iostream>
using namespace std;

class A {
protected:
    int a;
public:
    A() {
        a = 10; // Default initialization
        cout<<"in A constructor\n";
    }
    void inputA() {
        cin >> a;
    }
    void displayA() {
        cout << "a=" << a << endl;
    }
};

class B {
protected:
    int b;
public:
    B() {
        b = 20; // Default initialization
         cout<<"in B constructor\n";
    }
    void inputB() {
        cin >> b;
    }
    void displayB() {
        cout << "b=" << b << endl;
    }
};

class C : public A, public B {
    int c;
public:
    C() {
        c = 30; // Default initialization
         cout<<"in C constructor\n";
    }
    void inputC() {
        inputA(); // Input for class A member
        inputB(); // Input for class B member
        cin >> c; // Input for class C member
    }
    void displayC() {
        displayA(); // Displaying class A member
        displayB(); // Displaying class B member
        cout << "c=" << c << endl; // Displaying class C member
    }
};

int main() {
    C cobj;
   // cobj.inputC();
    cobj.displayC();
    return 0;
}

