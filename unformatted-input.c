#include <stdio.h>

int main(void)

{
//declare the character variable
char ch;

//ask user for a character input
printf("Enter a character:");

//use getchar to receive that single character

ch= getchar();

//print character enter by user
printf("\n Your character is %c", ch);

return (0);
}
