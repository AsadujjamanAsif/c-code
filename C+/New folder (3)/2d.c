#include <stdio.h>

// Function to print the elements of a 2D array
void printArray(int arr[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Define a 2D array with 3 rows and 3 columns
    int array[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Call the function to print the array
    printf("Array elements:\n");
    printArray(array, 3, 3);

    return 0;
}
