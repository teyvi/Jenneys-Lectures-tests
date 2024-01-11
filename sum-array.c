#include <stdio.h>
int main ()
{

int a [5], b[5], i;
float sumarray = 0;

printf("Enter five numbers:");
for (i = 0; i <5; i++)
	scanf("%d", &a[i]);

printf("Enter five numbers:");
for(i = 0; i <5; i++)
	scanf("%d", &a[i]);

for(i =0; i <5; i++)
{
	scanf("%d", &a[i]);
	sumarray = a[i] + b[i];
}

printf("The sum of %d is %f:", a[i], sumarray);


}
