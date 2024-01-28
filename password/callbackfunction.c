#include<stdio.h>
int main
{
	display(sum);
	display(sub);
}


void sum(int a, int b)
{
	printf("sum= %d\n", a+b);
}

void sub(int a, int b)
{
	printf("sub= %d\n", a-b);
}

void display ((void (*ptr)(int,int))
{
	ptr(5,7);
}
