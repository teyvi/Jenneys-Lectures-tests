#include<stdio.h>
int main()
//code to show pointer to a pointer
{
int a=10;
int *p=&a;
int **q=&p;

printf("a=%d %d %d\n",a,*p,**q);
}
