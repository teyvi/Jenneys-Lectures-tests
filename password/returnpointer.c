#include<stdio.h>

int* pointer(int[]);
int main
{

	int a=[1,2,3,4,5];
	p= pointer(a);
	printf("%d\n",*p);
	
}

int* pointer(int a[])
{
	return a+2;
}
