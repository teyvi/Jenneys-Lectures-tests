#include <stdio.h>

int main() {
    int number = 42;
    char character = 'A';
    float floatingPoint = 3.14;

    // Using pointers to access memory
    int *intPointer = &number;
    char *charPointer = &character;
    float *floatPointer = &floatingPoint;

    // Printing memory addresses and values
    printf("Variable 'number':\n");
    printf("  Address: %p\n", (void*)&number);
    printf("  Value:   %d\n", *intPointer);

    printf("\nVariable 'character':\n");
    printf("  Address: %p\n", (void*)&character);
    printf("  Value:   %c\n", *charPointer);

    printf("\nVariable 'floatingPoint':\n");
    printf("  Address: %p\n", (void*)&floatingPoint);
    printf("  Value:   %f\n", *floatPointer);

    return 0;
}

