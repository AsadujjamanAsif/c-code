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
    int sum = 0;
    for (x = 0; x < number; x++)
    {
        sum = sum + arr[x];
    }
    printf("Sum of this array is: %d", sum);

    return 0;
}