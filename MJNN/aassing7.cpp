#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    std::cout << "Total even elements: " << evenCount << std::endl;
    std::cout << "Total odd elements: " << oddCount << std::endl;

    return 0;
}

