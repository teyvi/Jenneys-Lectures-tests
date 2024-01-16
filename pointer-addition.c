#include<stdio.h>
int main()
{

int a[5]={0,1,-1,10,11};
int *p=&a[0];
p=p+2;
printf("%d\n",*p);

}
