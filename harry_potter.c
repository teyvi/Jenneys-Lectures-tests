#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    int choice = rand() % 4 + 1; // Generates a random number between 1 and 4

    printf("You belong to ");
    switch (choice) {
        case 1:
            printf("Gryffindor!\n");
            break;
        case 2:
            printf("Hufflepuff!\n");
            break;
        case 3:
            printf("Ravenclaw!\n");
            break;
        case 4:
            printf("Slytherin!\n");
            break;
        default:
            printf("an unknown house... Are you sure you chose a number between 1 and 4?\n");
    }

    return 0;
}

