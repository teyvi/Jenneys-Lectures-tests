#include<stdio.h>
int sum();
int main()
{
	int s;
	s =sum();
	printf("sum =%d\n",s);
	return 0;
}

int sum()
{
	int a ,b ,Sum = 0;
	printf("Enter a and b\n");
	scanf("%d %d", &a,&b);
	Sum = a+b;
	return Sum;
}
