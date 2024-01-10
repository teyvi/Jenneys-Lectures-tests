#include <stdio.h>
int main()
//program to calculate the grade of five students using indexing 
{

float grade[5];
int  i;
float avg, sum =0;

printf("Enter the grades of five students:");

for(i =0; i <5; i++)
scanf("%d", &grade[i]);

for (i =0; i <5; i++)
sum = sum + grade[i];
avg = (float)sum/5;

printf("The average is %f and the sum is %d\n", avg, sum); 

}
