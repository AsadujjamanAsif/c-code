#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int term = 1;
    int common_diff = 6;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", term);
        term += common_diff;
    }

    return 0;
}

