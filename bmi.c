#include <stdio.h>
int main(void)

{
double height_m, weight_kg, BMI;

//user prompt to enter height in meters and input assigned to height_cm
printf("Hi there!\n enter your height in meters: ");
scanf("%lf", &height_m);

//user prompt to enter weight in kilograms and input assigned to weight_kg
printf("Enter your weight in kilograms: ");
scanf("%lf", &weight_kg);

//calculate bmi with formular 
BMI = weight_kg / (height_m * height_m);

//print the BMI value
printf("Your BMI is: %.2lf\n", BMI);
}
