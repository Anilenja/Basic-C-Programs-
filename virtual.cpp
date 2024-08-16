#include<iostream>
using namespace std;

// Dynamic polymorphism using pure virtual function
class base {
public:
    // Pure virtual function
    virtual void show() = 0;
};

class derived : public base {
public:
    // Override the pure virtual function
    void show() override {
        cout << "in derived class show\n";
    }
};

int main() {
    base *bref;
    
    // This line won't compile as base is now an abstract class
    // base bobj;

    // You can't create an object of an abstract class, but you can create a pointer
    derived dobj;
    bref = &dobj;
    bref->show();  // Calls derived class function due to dynamic binding

    return 0;
}

