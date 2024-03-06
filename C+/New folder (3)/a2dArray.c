// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int row, col;
    printf("Enter array row: ");
    scanf("%d", &row);
    printf("Enter array collum: ");
    scanf("%d", &col);
    int arr[row][col];
    int x, y;
    printf("Enter array element: \n");
    for (x = 0; x < row; x++)
    {
        for (y = 0; y < col; y++)
        {
            printf("arr[%d] [%d] : ", x, y);
            scanf("%d", &arr[x][y]);
        }
    }
    printf("Now 2d arry:\n");
    for (x = 0; x < row; x++)
    {
        for (y = 0; y < col; y++)
        {
            printf("%d ", arr[x][y]);
        }
        printf("\n");
    }

    return 0;
}