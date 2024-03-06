#include <stdio.h>
#include <string.h>
#include <ctype.h>

void sortName(char name[]) {
    int length = strlen(name);

    // Bubble sort algorithm to sort the characters of the name
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (tolower(name[j]) > tolower(name[j + 1])) {
                // Swap characters
                char temp = name[j];
                name[j] = name[j + 1];
                name[j + 1] = temp;
            }
        }
    }
}

int main() {
    char name[100];

    printf(" ");
    fgets(name, sizeof(name), stdin);

    // Removing the newline character at the end of the input
    name[strcspn(name, "\n")] = '\0';

    sortName(name);

    printf("%s\n", name);

    return 0;
}
