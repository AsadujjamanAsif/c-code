#include <iostream>

int main() {
    int arr[] = {12, 5, 45, 8, 23, 17};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (n == 0) {
        std::cout << "The array is empty." << std::endl;
        return 0;
    }

    int maxElement = arr[0];
    int minElement = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }

    std::cout << "Maximum element: " << maxElement << std::endl;
    std::cout << "Minimum element: " << minElement << std::endl;

    return 0;
}

