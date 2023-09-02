#include <stdio.h>

int main (void)
{
int a= 8, b;
b= a++,++a;
printf("The result of b is %d\n",b);
return(0);

}
