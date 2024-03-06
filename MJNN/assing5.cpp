#include <iostream>
#include <climits>

int main() {
    int arr[] = {12, 5, 45, 8, 23, 17};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (n < 2) {
        std::cout << "The array does not have a second largest element." << std::endl;
        return 0;
    }

    int firstMax = INT_MIN;  // Initialize to the smallest possible integer
    int secondMax = INT_MIN; // Initialize to the smallest possible integer

    for (int i = 0; i < n; i++) {
        if (arr[i] > firstMax) {
            secondMax = firstMax;
            firstMax = arr[i];
        } else if (arr[i] > secondMax && arr[i] != firstMax) {
            secondMax = arr[i];
        }
    }

    if (secondMax == INT_MIN) {
        std::cout << "There is no second largest element in the array." << std::endl;
    } else {
        std::cout << "Second largest element: " << secondMax << std::endl;
    }

    return 0;
}

