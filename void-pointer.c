#include<stdio.h>
int main()

//using void pointer 
{
int a = 5;
char str ={howdeepisyourlove};
float f=1.10;
void *vp;

vp=&a;
printf("a=%d\n",*(int*)vp);

vp=&b;
printf("f=%f\n",*(float*)vp);

vp=&ch;
printf("str=%c\n",*(char*)vp);


return 0;
}
