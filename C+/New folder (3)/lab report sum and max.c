#include <stdio.h>

int main()
{
    int number;
    printf("Enter array size: ");
    scanf("%d", &number);
    int arr[number];
    int i;
    printf("Enter array element: \n");
    for (i = 0; i < number; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (i = 0; i < number; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum of this array is: %d", sum);

    return 0;
}
