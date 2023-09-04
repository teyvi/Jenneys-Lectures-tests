#include <stdio.h>

int main(void)
//this code will use if control statement to know the age of people joining censored sites
{
int age;

//allow user to input age and c to assign the age to our scanf
printf("Enter your age:");
scanf("%d", &age);

//if statements
  if (age < 18)

{
//statement controls
printf("hold your horses pal, you are not allowed here\n");
}

  else

{
printf("come on in!\n");
}

}
