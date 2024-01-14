#include <stdio.h>
#include <string.h>

int main() {
    char name[30];
    int count=0, i =0;

    printf("Enter your name:\n");
    fgets(name, sizeof(name), stdin);  // Read the name using fgets

    // count the strings
    while (name[i] !='\0')
{
	count++;
	i++;



}

    printf("Your name is: %s\n", name);
    printf("Length of your name is: %d\n",  count);

    return 0;
}

