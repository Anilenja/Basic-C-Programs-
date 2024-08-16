#include <iostream>
using namespace std;

// Function template that swaps two values of any type
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    cout << "Before swap: x = " << x << ", y = " << y << endl;

    // Swap integers using the function template
    swapValues(x, y);

    cout << "After swap: x = " << x << ", y = " << y << endl;

    double a = 3.14, b = 6.28;
    cout << "Before swap: a = " << a << ", b = " << b << endl;

    // Swap doubles using the same function template
    swapValues(a, b);

    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}

