#include <iostream>
#include <string>

using namespace std;

int main() {
    // Assigning a string literal to a string variable
    string str1 = "Hello, World!";

    // Assigning the value of one string to another
    string str2 = str1;

    // Displaying the values of the strings
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;

    // Changing the value of str1
    str1 = "Goodbye!";

    cout << "Updated str1: " << str1 << endl;

    return 0;
}

