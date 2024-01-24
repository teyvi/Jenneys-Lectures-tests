#include<stdio.h>

//declare prototype
void Sum();

int main()

{
Sum();
return 0;
}

void Sum()
{
int a,b;
int sum = 0;
printf("Enter two numbers:\n");
scanf("%d %d",&a,&b);
sum = a + b;
printf("Sum of the numbers are %d:\n", sum);

}
