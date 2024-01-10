#include <stdio.h>
int main()
{

int i;
int even = 0, odd = 0;
int a[10];

printf("Enter ten numbers:");
for(i =0; i <10; i++)
{
scanf("%d",&a[i]);

if ( a[i] % 2 == 0)

	even++;

else

	odd++;

}

printf("number of even numbers are %d", even);
printf("\nnumber of odd numbers are %d", odd);

}
