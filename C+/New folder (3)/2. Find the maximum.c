// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int number, position;
    printf("Enter array size: ");
    scanf("%d", &number);
    int arr[number];
    int x;
    printf("Enter array element: \n");
    for (x = 0; x < number; x++)
    {
        scanf("%d", &arr[x]);
    }
    int maxNum = arr[0];
    for (x = 0; x < number; x++)
    {
        if (maxNum < arr[x])
        {
            maxNum = arr[x];
            position = x;
        }
    }
    printf("largest number of the array is: %d\nAnd array index is: %d", maxNum, position);

    return 0;
}