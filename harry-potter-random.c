#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int choice;

    printf("Choose a number between 1 and 4: ");
    
    while (1) {
        scanf("%d", &choice);

        if (choice < 1 || choice > 4) {
            printf("Please enter a number between 1 and 4: ");
            continue;
        }

        printf("You belong to ");

        switch (rand() % 4 + 1) {
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
        }

        printf("Choose another number between 1 and 4 (or enter 0 to exit): ");
    }

    return 0;
}

