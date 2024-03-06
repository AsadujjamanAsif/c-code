#include <iostream>
#include <algorithm>

void sortElements(int n[], int size) {
    std::sort(n, n + size, std::greater<int>()); // Sort in descending order
}

int main() {
    int arr[] = {5, 2, 8, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    sortElements(arr, n);

    std::cout << "Sorted array in descending order: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

