#include<stdio.h>

int main() {
    int a[] = {10, 100, 1000, 10000, 100000};
    int *p;
    p = a;
    
    printf("%d\n", *p++);
printf("%d\n", *p++); // Separate the increment operations
    
    return 0;
}
