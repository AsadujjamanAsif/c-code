#include <stdio.h>
int main()
{
    int n, a = 4;
    printf("number: ");
    scanf("%d", &n);
    int x = 1;
    while (x <= n)
    {
        printf("%d ", x);
        x = x + a;
        a = a + 2;
    }

    return 0;
}
