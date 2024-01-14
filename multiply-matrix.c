#include <stdio.h>
int main()
{

int i, j;
int a[2][2], b[2][2], c[2][2];


printf("Enter the first matrix:\n");
for(i=0; i<2; i++)
{
	for(j=0; j<2; j++)
	scanf("%d\t", &a[2][2]);

}

for(i=0; i<2; i++)
{       
        for(j=0; j<2; j++)
        scanf("%d\t", &b[2][2]);

}

printf("\nThe first matrix is:\n");
for(i=0; i<2; i++)
{       
        for(j=0; j<2; j++)
        printf("%d\t",a[2][2]);

}
printf("\n");


printf("\nThe second matrix is:\n");
for(i=0; i<2; i++)
{
        for(j=0; j<2; j++)
        printf("%d\t",b[2][2]);

}
printf("\n");


printf("\nThe product of the two matrix are:\n");
for(i=0; i<2; i++)
{
        for(j=0; j<2; j++)
       {
	c[2][2]= a[2][2] * b[2][2];
	 printf("%d\t",c[2][2]);
	}
}

printf("\n");
}
