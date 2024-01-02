#include <stdio.h>

int main ()
//program that finds the sum of numbers from 1-100

{

int i, sum;

for ( i = 1; i <= 100; i ++)

{ 
sum += i;

printf("%d + %d = %d\n", i, sum - i, sum);

}

return 0;
}
