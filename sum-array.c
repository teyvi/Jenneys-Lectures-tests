#include <stdio.h>
int main ()
{

int a [5], b[5], i;
int sumarray[5];

printf("Enter five numbers:");
for (i = 0; i <5; i++)
	scanf("%d", &a[i]);

printf("Enter five numbers:");
for(i = 0; i <5; i++)
	scanf("%d", &b[i]);

for(i =0; i <5; i++)
{

	sumarray[i] = a[i] + b[i];
	printf("\n The sum of %d is :%d", i,sumarray[i]);
}

}
