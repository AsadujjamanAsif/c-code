#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0.0;

    cout << "Enter the value of n: ";
    cin >> n;

    if (n <= 0) {
       cout << "Please enter a positive integer for n." << endl;
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i; // Calculate the harmonic series sum
    }

    cout << "The sum of the harmonic series for n = " << n << " is: " << sum <<endl;

    return 0;
}

