#include<stdio.h>
#include<stdlib.h>
int main()

{
int *ptr;


ptr= (int *)malloc(sizeof(int));
 
if (ptr == NULL)
	{printf("Memory allocation failed\n");
	return 1; //return an error code
	}

*ptr = 10;
											
printf("%d\n",*ptr);
free(ptr);


ptr= NULL;
}
