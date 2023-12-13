#include <stdio.h>

int main()
{

//converts temperature from celsius to fahrenheit

int c, f;
printf("Enter temperature in Celsius:\n");
scanf("%d\n", &c);

f = (c * 9/5) + 32;
printf("It is %d\n", f);

}
