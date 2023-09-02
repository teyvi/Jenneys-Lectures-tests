#include <stdio.h>
int main(void)

{
int a= 8, b;
b = (a++, ++a, a>>2);

//print results
printf("The value of b is %d\n", b);
printf("The value of a is %d\n", a);

return(0);
}
