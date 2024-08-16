#include <iostream>
#include <string>

using namespace std;

int main() {
    string myString = "The quick brown fox jumps over the lazy dog.";

    // Finding the position of the substring "brown"
    size_t foundPos = myString.find("brown");

    if (foundPos != string::npos) {
        cout << "Substring 'brown' found at position: " << foundPos << endl;
    } else {
        cout << "Substring 'brown' not found." << endl;
    }

    // Finding the position of character 'z'
    size_t foundCharPos = myString.find('z');

    if (foundCharPos != string::npos) {
        cout << "Character 'z' found at position: " << foundCharPos << endl;
    } else {
        cout << "Character 'z' not found." << endl;
    }

    return 0;
}

