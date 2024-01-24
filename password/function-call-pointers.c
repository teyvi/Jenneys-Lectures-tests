 1 #include<stdio.h>
  2 
  3 void fun(int,int);
  4 int main();
  5 
  6 {
  7         int x= 5, y= 7;
  8         fun(&x,&y);
  9         printf("x= %d, y= %d\n", x,y);
 10 }
 11 
 12 void fun(int *x, int *y)
 13 {
 14         *x= 7;
 15         *y= 5;
 16         printf("x= %d, y= %d", *x,*y);
 17 }
