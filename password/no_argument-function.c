#include<stdio.h>
void sum();
int main()

{
sum();
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
