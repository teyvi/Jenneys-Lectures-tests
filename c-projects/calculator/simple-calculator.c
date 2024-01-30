#include<stdio.h>

// Function prototypes
void sum(int a, int b);
void sub(int a, int b);
void mul(int a, int b);
void div(int a, int b);

void sum(int a, int b)
{
    printf("%d\n", a + b);
}

void sub(int a, int b)
{
    printf("%d\n", a - b);
}

void mul(int a, int b)
{
    printf("%d\n", a * b);
}

void div(int a, int b)
{
    if (b != 0)
    {
        printf("%d\n", a / b);
    }
    else
    {
        printf("Error: Division by zero is undefined.\n");
    }
}

int main()
{
    int choice = 0, a, b, ptr;

    // Function pointer array
    void (*ptr[])(int, int) = {sum, sub, mul, div};

    printf("Enter your arithmetic choice: \n0 for addition\n1 for subtraction\n2 for multiplication\n3 for division\n");
    printf("Enter: ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Check if choice is within bounds of the function pointer array
    if (choice >= 0 && choice < sizeof(ptr) / sizeof(ptr[0]))
    {
        // Call the selected function using the function pointer
        ptr[choice](a, b);
    }
    else
    {
        printf("Enter a valid choice\n");
    }

    return 0;
}

