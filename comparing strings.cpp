#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = "World";

    int comparison = str1.compare(str2);

    if (comparison == 0) {
        cout << "The strings are equal." << endl;
    } else if (comparison < 0) {
        cout << "str1 comes before str2 lexicographically." << endl;
    } else {
        cout << "str1 comes after str2 lexicographically." << endl;
    }

    return 0;
}

