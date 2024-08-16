#include <iostream>
#include <string>

using namespace std;

int main() {
    string originalString = "Hello, world!";
    
    // Extracting a substring starting at index 7 (inclusive) to the end of the string
    string extractedSubStr1 = originalString.substr(7);
    
    // Extracting a substring starting at index 0 (inclusive) with length 5
    string extractedSubStr2 = originalString.substr(0, 5);
    
    cout << "Original String: " << originalString << endl;
    cout << "Substring from index 7 to end: " << extractedSubStr1 << endl;
    cout << "Substring from index 0 with length 5: " << extractedSubStr2 << endl;

    return 0;
}

