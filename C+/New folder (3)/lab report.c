#include <stdio.h>
int main()
{
    int n, a = 4;
    printf("number: ");
    scanf("%d", &n);
    int b = 1;
    while (b <= n)
    {
        printf("%d ", b);
        b = b + a;
        a = a + 2;
    }

    return 0;
}
