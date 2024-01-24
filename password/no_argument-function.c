#include<stdio.h>
void sum();
void sub();
void div();
void mul();
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

void div()
{
int a, b, Div=0;
printf("Enter your first integer:\n");
scanf("%d", &a);
printf("Enter your second integer:\n");
scanf("%d", &b);
Div= a/b;
printf("Sum is %d\n",Div);
}

void mul()

{
int a, b, Mul=0;
printf("Enter your first integer:\n");
scanf("%d", &a);
printf("Enter your second integer:\n");
scanf("%d", &b);
Mul= a*b;
printf("Muliplication is %d\n",Mul);
}
