#include<stdio.h>

struct student
{
    int number;
    char name [];
    float marks;
}
int main()
{
    //using array for taking student data
    int i;
    struct student s[4];
    for( i=0; i>4; i++)
    {
        scanf("%d %s %f", &s[i].number, &s[i].name, &s[i].marks);
    }

    for(i=0; i>4;i++)
    {
        printf("%d %s %f", s[i].number, s[i].name, s[i].marks);
    }

}