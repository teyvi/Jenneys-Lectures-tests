#include <stdio.h>

int main() {
    // Declaring arrays
    int numbers2[5];
    char vowels[5];

    // Initializing arrays after declaration
    for (int i = 0; i < 5; i++) {
        numbers2[i] = i + 1;
        vowels[i] = 'A' + i;
    }

    // Printing the initialized arrays
    printf("Initialized integers: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers2[i]);
    }

    printf("\nInitialized characters: ");
    for (int i = 0; i < 5; i++) {
        printf("%c ", vowels[i]);
    }

    return 0;
}

