#include <stdio.h>

int main() {
    // Initializing an array of integers during declaration
    int numbers1[] = {1, 2, 3, 4, 5};

    // Initializing an array of characters during declaration
    char characters[] = {'a', 'b', 'c', 'd', 'e'};

    // Printing the initialized arrays
    printf("Initialized integers: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers1[i]);
    }

    printf("\nInitialized characters: ");
    for (int i = 0; i < 5; i++) {
        printf("%c ", characters[i]);
    }

    return 0;
}

