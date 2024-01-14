#include <stdio.h>
#include <string.h>

int main() {
    char name[30];
    int count = 0, i = 0;

    printf("Enter your name:\n");
    fgets(name, sizeof(name), stdin);  // Read the name using fgets

    // count the words
    while (name[i] != '\0') {
        // Check for spaces or newline characters
        if (name[i] == ' ' || name[i] == '\n') {
            count++;
        }
        i++;
    }

    printf("Your name is: %s", name);
    printf("Number of words in your name: %d\n", count);

    return 0;
}

