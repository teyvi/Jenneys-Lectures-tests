//This code uses switch statement to do simple calculation

#include<stdio.h>
int main (void)

{
int a, b, sum, div, sub, mul;
char operator;

//enter operator and operants
printf("Enter your operator\n");
scanf("%c", &operator);

printf("Enter your two operants\n");
scanf("%d %d", &a, &b);

//switch statement
switch(operator)
{
case '+': sum= a+b;
          printf("sum= %d",sum);
          break;

case '/':div= a/b;
         printf("div = %d",div);
         break;

case '*':mul= a*b;
         printf("mul = %d",mul);
         break;
case '-':sub= a-b;
         printf("sub = %d",sub);
         break;
}
 

return(0);
}

