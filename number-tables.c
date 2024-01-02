#include <stdio.h>

int main()

{
int i, number, result;
printf("Enter a number:");
scanf("%d", &number);

for(i =0; i <=12; i ++)
{
	result =number *i;
	printf("%d\n", result);

}
	return 0;
}
