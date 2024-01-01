#include <stdio.h>

int  main()

{

int a, b, sum, div, sub,mul;
char operator;

printf("Enter your Operator:");
scanf("%c", &operator);

printf("Enter your first integer Operant:");
scanf("%d", &a);

printf("Enter your second integer Operant:");
scanf("%d", &b);

switch(operator)
{
	case '-': sub = a-b;
	printf("sub = %d", sub);
	break;

	case '+': sum = a+b;
	printf("sum = %d", sum);
	break;
	
	case '*': mul = a*b;
	printf("mul = %d", mul);
	break;

	case '/': div = a/b;
	printf("div = %d", div);

}
}
