#include <stdio.h>
int main()
{

int i;
int even = 0, odd = 0;
int a[10];
int oddSum =0 , evenSum =0;

printf("Enter ten numbers:");
for(i =0; i <10; i++)
{
scanf("%d",&a[i]);

if ( a[i] % 2 == 0)
{
	even++;
	evenSum += a[i];
}
else
{

	odd++;
	oddSum += a[i];

}
}

printf("number of even numbers are %d", even);
printf("\nnumber of odd numbers are %d", odd);
printf("Total odd %d", oddSum);
printf("Total even %d", evenSum);
}
