#include <stdio.h>
#include <string.h>

int main() {
    char name[30];

    printf("Enter your name:\n");
    fgets(name, sizeof(name), stdin);  // Read the name using fgets

    // Remove the newline character at the end, if present
    if (name[strlen(name) - 1] == '\n') {
        name[strlen(name) - 1] = '\0';
    }

    printf("Your name is: %s\n", name);
    printf("Length of your name is: %lu\n", strlen(name));

    return 0;
}

