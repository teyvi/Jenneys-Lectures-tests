#include<stdio.h>
void sum();
void sub();
int main()

{
sum();
sub();
}

void sum()
{
int a, b, Sum=0;
printf("Enter your first integer:\n");
scanf("%d", &a);
printf("Enter your second integer:\n");
scanf("%d", &b);
Sum= a + b;
printf("Sum is %d\n",Sum);
}

void sub()
{
int a, b, Sub=0;
printf("Enter your first integer:\n");
scanf("%d", &a);
printf("Enter your second integer:\n");
scanf("%d", &b);
Sub= a - b;
printf("Substraction is %d\n",Sub);

}
