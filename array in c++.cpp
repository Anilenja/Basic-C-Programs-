#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the array length: ";
    cin >> n;

    int a[n];  // Declare an array of size n

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Array elements are as follows: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] <<" ";
    }

    cout << endl;

    return 0;
}

