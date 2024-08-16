#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = "World";

    cout << "Before swapping:" << endl;
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;

    // Using std::swap function
    std::swap(str1, str2);

    cout << "\nAfter swapping using std::swap:" << endl;
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;

    // Reset strings
    str1 = "Hello";
    str2 = "World";

    // Using swap member function of std::string
    str1.swap(str2);

    cout << "\nAfter swapping using member function swap:" << endl;
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;

    return 0;
}

