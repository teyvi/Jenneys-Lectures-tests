#include<stdio.h>

struct student
{
    int number;
    char name [];
    float marks;
}
void main()
{
    //order matters
    struct student s1{1,'Namay',4.5};
    struct student s2{2,'Jenny',3.9};
    printf("%d",s1.number);
}