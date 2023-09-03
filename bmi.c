#include <stdio.h>
int main(void)

{
float a, b,  bmi;
printf("Type your weight in kilograms\n");
printf("Type your height in centimenters");
scanf("%f %f", &a, &b);
bmi=b/a;
printf("Your BMI value is: %f\n", bmi);
}
