
#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1)
        return 0;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

// Function to check if a number is palindrome
int isPalindrome(int num) {
    int reversed = 0;
    int original = num;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    if (original == reversed)
        return 1;

    return 0;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num) && isPalindrome(num))
        printf("%d is both a palindrome and prime.\n", num);
    else
        printf("%d is not both a palindrome and prime.\n", num);

    return 0;
}
