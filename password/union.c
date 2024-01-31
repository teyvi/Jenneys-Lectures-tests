#include<stdio.h>

union student
{
    int number;
    char name[50];
    float marks;
};

int main()
{
    union.student u;
    union.student *ptr=&u;


    u.number =1;
    u.name = "abena";
    u.marks=45;


    printf("number of student is: %d\n", ptr ->number);
    printf("name of student is: %c\n", ptr ->name);
    printf("marks of student is: %f\n", ptr ->marks);
}   
