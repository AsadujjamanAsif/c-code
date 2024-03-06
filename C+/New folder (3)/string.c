#include <stdio.h>

int main() {
    char string[100];
    int vowels = 0, consonants = 0, digits = 0, special_symbols = 0;
    int i;

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    for (i = 0; string[i] != '\0'; i++) {
        if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z')) {
            char ch = tolower(string[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        else if (string[i] >= '0' && string[i] <= '9') {
            digits++;
        }
        else if (string[i] != ' ' && string[i] != '\n') {
            special_symbols++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special Symbols: %d\n", special_symbols);

    return 0;
}

