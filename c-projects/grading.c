#include<stdio.h>

struct student-marks
{
    char
    int semester;
    float EngineeringMaths;
    float Thermodynamics;
    float Algebra;
    float French;
    float Fluid Mechanics;
    float BioMaths;
}

int main()
{
    //take inputs on semester and grade student
    struct student mark1;
    printf("Enter the semester:\n");
    scanf("%d", &mark1.semester);

    printf("Enter grade for Engineering-Maths:\n");
    scanf("%f", &mark1.EngineeringMaths);

    printf("Enter grade for Thermodynamics:\n");
    scanf("%f", &mark1.Thermodynamics);

    printf("Enter grade for Algebra:\n");
    scanf("%f", &mark1.Algebra);

    printf("Enter grade for French:\n");
    scanf("%f", &mark1.Frenchs);

    printf("Enter grade for FluidMechanicss:\n");
    scanf("%f", &mark1.FluidMechanics);

    printf("Enter grade for BioMaths:\n");
    scanf("%f", &mark1.BioMaths);
    




}