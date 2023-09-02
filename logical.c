#include <stdio.h>

int main(void)

{
int a= 1, b= 6;
int  result1, result2;

//first result
result1= a-- && ++b;

//second result
result2= --a && ++b;

printf("Results of the first one is %d\n", result1);
printf("Results of the second one is %d\n", result2);

return (0);
}
