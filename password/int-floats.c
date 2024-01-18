#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;

    if (a < b) {
        printf("a is less than b\n");
    } else if (a == b) {
        printf("a is equal to b\n");
    } else {
        printf("a is greater than b\n");
    }

    float x = 3.14;
    float y = 2.71;

    if (x < y) {
        printf("x is less than y\n");
    } else if (x == y) {
        printf("x is equal to y\n");
    } else {
        printf("x is greater than y\n");
    }

    return 0;
}

