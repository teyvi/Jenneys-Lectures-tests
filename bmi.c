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

//control statements for each type of obesity

if (BMI < 18.5)
{
 printf("You are underweight\n");
}


else if(BMI >= 18.5 && BMI <24.5)
{
 printf("You are normal weight\n");
}


else if (BMI >= 25 && BMI <29.9)
{
 printf("You are overweight\n");
}


else if (BMI >= 30 && BMI < 34.9)
{
 printf("You are class I obese");
}

else if (BMI >= 35 && BMI <39.9)
{
 printf("You are class II obese\n");
}

else
{
 printf("You are morbid obese\n");
} 

}
