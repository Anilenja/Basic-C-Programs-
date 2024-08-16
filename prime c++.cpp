/*#include<iostream>

int main() {
    using namespace std; // Add this line to use the std namespace

    int i,min,max,count;
    cout<<"enter the starting number:";
    cin>>min;
    cout<<"\nenter the ending number:";
    cin>>max;
    for(i=min;i<=max;i++){
    	min++;
    	count=0;
    	if(min%i==0)
    	count++;
	}
	cout<<count;
    return 0;
}
*/
#include<iostream>

int main() {
    using namespace std; // Add this line to use the std namespace

    int i, min, max, count = 0;

    cout << "Enter the starting number: ";
    cin >> min;

    cout << "\nEnter the ending number: ";
    cin >> max;

    for (int num = min; num <= max; ++num) {
        // Check if num is greater than 1
        if (num > 1) {
            bool isPrime = true;

            // Check for factors from 2 to the square root of num
            for (i = 2; i * i <= num; ++i) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }

            // If isPrime is still true, num is prime
            if (isPrime) {
                ++count;
            }
        }
    }

    cout << "Number of prime numbers between " << min << " and " << max << ": " << count << endl;

    return 0;
}

