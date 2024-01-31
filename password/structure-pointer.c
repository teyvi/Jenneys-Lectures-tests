#include<stdio.h>

struct student
{
    int number;
    char name[50];
    float marks;
};

int main()
{
    struct student s1 ={2,'Fawzy',4.5};
    //struct student s2;
    struct student *ptr= &s1;
    printf("%d %s %f", ptr-> number,ptr-> name,ptr-> marks);

    return 0;
}

