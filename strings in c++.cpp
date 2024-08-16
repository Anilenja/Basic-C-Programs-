//#include<string>
////string init
//string s;
//string s1("Hello");
//string s2="hello";
//string s3(8,'x');
//string s4=s3;
//string s5(s2,3,2);

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    string s1("Hello");
    string s2 = "hello";
    string s3(8, 'x');
    string s4 = s3;
    string s5(s2, 3, 2);

    // Displaying the initialized strings
    cout << "s: " << s << endl; // Empty string
    cout << "s1: " << s1 << endl; // "Hello"
    cout << "s2: " << s2 << endl; // "hello"
    cout << "s3: " << s3 << endl; // "xxxxxxxx"
    cout << "s4: " << s4 << endl; // "xxxxxxxx"
    cout << "s5: " << s5 << endl; // "lo"

    return 0;
}

