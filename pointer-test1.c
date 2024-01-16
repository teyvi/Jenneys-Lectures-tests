#include<stdio.h>
int main()
{

const int a= -11;
int  *p= &a;
*p=10;
printf("a is %d\n",a);

}
