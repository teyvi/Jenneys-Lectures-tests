#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr =10;

int *ptr= (int*malloc(sizeof(int);

if (ptr == NULL)
	{printf("Memory allocation failed\n");

	return 1; //return an error code
	}
											
printf("%d",*ptr);
free(ptr);


ptr= NULL;

printf("%d",*ptr);

}
