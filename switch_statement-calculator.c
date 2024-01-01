i#include <stdio.h>

int  main()

{

int a, b, sum, div, sub,mul;
char operator;

printf("Enter your Operator:");
scanf(" %c", &operator);

printf("Enter your first integer Operant:");
scanf("%d", &a);

printf("Enter your second integer Operant:");
scanf("%d", &b);

switch(operator)
{
	case '-': sub = a-b;
	printf("sub = %d\n", sub);
	break;

	case '+': sum = a+b;
	printf("sum = %d\n", sum);
	break;
	
	case '*': mul = a*b;
	printf("mul = %d\n", mul);
	break;

	case '/': div = a/b;
	if (b !=0)
	{	div = a/b;
		printf("div = %d\n", div);
	}
	else{
		printf("div = %d"\n, div);
		}
	break; 

	default:
	printf("Error: Invalid Operator");
}
}
