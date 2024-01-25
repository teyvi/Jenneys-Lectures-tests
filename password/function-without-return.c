#include<stdio.h>
void sum(float, float);
int main()
{
	float x, y;
	printf("Enter two float numbers\n");
	scanf("%f %f", &x, &y);
	sum(x,y);
}

void sum(float x, float y)
{
	float Sum= 0;
	Sum= x + y;
	printf("sum is %f\n",Sum);
}
