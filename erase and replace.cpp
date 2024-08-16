#include <iostream>
#include <string>

using namespace std;

int main() {
    string myString = "The quick brown fox jumps over the lazy dog.";

    // Using erase() to remove a portion of the string
    myString.erase(10, 5); // Removes 5 characters starting at index 10

    cout << "After erasing: " << myString << endl;

    // Using replace() to replace a portion of the string with another string
    string replacement = "cat";
    myString.replace(16, 3, replacement); // Replaces 3 characters starting at index 16 with "cat"

    cout << "After replacing: " << myString << endl;

    return 0;
}

