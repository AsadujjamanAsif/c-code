#include <iostream>

int main() {
    int sourceArray[] = {1, 2, 3, 4, 5};
    int n = sizeof(sourceArray) / sizeof(sourceArray[0]);

    int destinationArray[n];

    // Copy elements from the source array to the destination array
    for (int i = 0; i < n; i++) {
        destinationArray[i] = sourceArray[i];
    }

    // Print the destination array
    std::cout << "Source Array: ";
    for (int i = 0; i < n; i++) {
        std::cout << sourceArray[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Destination Array: ";
    for (int i = 0; i < n; i++) {
        std::cout << destinationArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

