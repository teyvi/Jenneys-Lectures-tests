#include <stdio.h>

int main() {
    char char1 = '@';
    char char2 = '#';

    if (char1 < char2) {
        printf("%c comes before %c in ASCII order\n", char1, char2);
    } else if (char1 == char2) {
        printf("%c and %c have the same ASCII value\n", char1, char2);
    } else {
        printf("%c comes after %c in ASCII order\n", char1, char2);
    }

    return 0;
}

