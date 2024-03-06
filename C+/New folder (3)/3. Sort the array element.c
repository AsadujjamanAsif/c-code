// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int number;
    printf("Enter array size: ");
    scanf("%d", &number);
    int arr[number];
    int x;
    printf("Enter array element: \n");
    for (x = 0; x < number; x++)
    {
        scanf("%d", &arr[x]);
    }
    for (x = 0; x < number; x++)
    {
        for (int y = x + 1; y < number; y++)
        {
            if (arr[y] < arr[x])
            {
                arr[x] = arr[x] + arr[y];
                arr[y] = arr[x] - arr[y];
                arr[x] = arr[x] - arr[y];
            }
        }
    }
    printf("sorted arry:\n");
    for (x = 0; x < number; x++)
    {
        printf("%d ", arr[x]);
    }

    return 0;
}