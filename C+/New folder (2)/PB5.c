#include <stdio.h>

int main() {
    int n;
    for (n = 1; n <= 10; n++) {
        int value = n * n - n + 1;
        printf("%d ", value);
    }
    printf("\n");
    return 0;
}
