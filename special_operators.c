#include <stdio.h>

int main(void)
{
int a= 8, b;
b = (a++,a++);
printf("The value of b is %d\n");
return (0);
}
