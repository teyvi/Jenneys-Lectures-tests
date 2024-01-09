#include <stdio.h>
void main()
//program to calculate the grade of five students using indexing 
{

int grade[5];
int sum=0, i;
float avg;

printf("Enter the grades of five students:");

for(i =0; i <5; i++)
scanf("%d", grade[i]);

for (i =0; i <5; i++)
sum = sum + grade[i];
avg = sum/5;

printf("%f %d\n", avg, sum); 

}
