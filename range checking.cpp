#include <iostream>
#include <string>

using namespace std;

int main() {
    string myString = "Hello, World!";

    if (15 < myString.size()) {
        char charAtIndex = myString[15]; // Accessing index 15
        cout << "Character at index 15: " << charAtIndex << endl;
    } else {
        cerr << "Index 15 is out of range." << endl;
    }

    return 0;
}

