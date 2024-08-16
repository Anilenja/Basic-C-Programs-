#include <iostream>
#include <cstring>
using namespace std;

int countVowels(const char *str) {
    int count = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        char ch = tolower(str[i]);  // Convert the character to lowercase for case-insensitive comparison

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    return count;
}

int main() {
    const int MAX_SIZE = 100;  // Maximum size of the input string
    char input[MAX_SIZE];

    cout << "Enter a string: ";
    cin.getline(input, MAX_SIZE);

    int vowelCount = countVowels(input);

    cout << "Number of vowels in the string: " << vowelCount << endl;

    return 0;
}

