#include <iostream>
using namespace std;

int main() {
    int n;

    // Prompt the user to enter the number of terms in the Fibonacci series
    cout << "Enter the number of terms for the Fibonacci series: ";
   cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." <<endl;
        //return 1;
    }

    int a = 1, b = 1; // Initialize the first two Fibonacci numbers

   cout << "Fibonacci Series up to " << n << " terms: ";

    if (n >= 1) {
       cout << a << " ";
    }
    if (n >= 2) {
        cout << b << " ";
    }

    for (int i =3; i <= n; i++) {
        int c = a + b;
       cout << c << " ";
        a = b;
        b = c;
    }

   cout <<endl;

    return 0;
}

