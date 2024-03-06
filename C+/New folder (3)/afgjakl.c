#include <stdio.h>

int main() {
    int N = 171;
    int sum = 0;

    printf("Prime numbers between 1 and %d are:\n", N);

    for (int i = 2; i <= N; i++) {
        int isPrime = 1;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
            sum += i;
        }
    }

    printf("\nSum of the prime numbers = %d\n", sum);

    return 0;
}
