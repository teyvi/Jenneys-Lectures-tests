#include <stdio.h>

int main()
{

//converts temperature from celsius to fahrenheit

float c;
float h;
printf("Enter temperature in Celsius:\n");
scanf("%f\n", &c);

h = (c * 9/5) + 32;
printf("It is %f\n", h);

}
