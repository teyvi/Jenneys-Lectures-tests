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
    printf("%d\n", a / b);
}


int main()
{
    int choice = 0, a, b;
    int (*ptr)(int,int)=[sum,sub,mul,div];

    printf("Enter your arithmetic choice: \n0 for addition\n1 for subtraction\n2 for multiplication\n3 for division\n");
    printf("Enter: ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    /*switch (choice)
    {
    case 0: sum(a, b); break;
    case 1: sub(a, b); break;
    case 2: mul(a, b); break;
    case 3: div(a, b); break;
    default: printf("Enter a valid choice\n");
    }*/
    //instead of the switch statement, function pointer is used
    (*ptr[choice])(a,b);
    return 0;
}
