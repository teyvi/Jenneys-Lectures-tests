#include <stdio.h>
int main()
{

int i, j;
int a[2][2], b[2][2], c[2][2];


printf("Enter the first matrix:\n");
for(i=0; i<2; i++)
{
	for(j=0; j<2; j++)
	scanf("%d\t", &a[i][j]);

}
printf("\nEnter the second matrix:\n");
for(i=0; i<2; i++)
{       
        for(j=0; j<2; j++)
        scanf("%d\t", &b[i][j]);
}



printf("\nThe first matrix is:\n");
for(i=0; i<2; i++)
{       
        for(j=0; j<2; j++)
        printf("%d\t",a[i][j]);
}
printf("\n");


printf("\nThe second matrix is:\n");
for(i=0; i<2; i++)
{
        for(j=0; j<2; j++)
        printf("%d\t",b[i][j]);

}
printf("\n");


printf("\nThe product of the two matrix are:\n");
for(i=0; i<2; i++)
{
        for(j=0; j<2; j++)
       {
	c[i][j]= a[i][j] * b[i][j];
	 printf("%d\t",c[i][j]);
	}
}

printf("\n");
}
