#include<stdio.h>
int main ()
{

int d;
int a[]={0, -1, 2, 3, 67};
int *p=&a[0];
int *q=&a[3];

d=q-p;
q=q-2;
p=q-2;

printf("d is %d q is %d and p is %d\n", d,*q,*p);


}
