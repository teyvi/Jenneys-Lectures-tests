#include<stdio.h>

// Function prototypes
void sum(int a, int b);
void sub(int a, int b);
void display(void (*ptr)(int, int));

void sum(int a, int b)
{
    printf("sum= %d\n", a + b);
}

void sub(int a, int b)
{
    printf("sub= %d\n", a - b);
}

void display(void (*ptr)(int, int))
{
    ptr(5, 7);
}

int main() {
    display(sum);
    display(sub);

    return 0;
}