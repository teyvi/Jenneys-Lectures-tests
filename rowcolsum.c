#include <stdio.h>
int main()
{

int i, j, sumrow, sumcol;
int a[3][3];

printf("Enter a 3x3 matrix:");
for(i = 0; i <3; i++)
{
	for (j =0; j <3; j++)
{
	scanf("%d", &a[i][j];

}

for(i = 0; i <3; i++)
{	
	sumrow=sumcol=0;
        for (j =0; j <3; j++)
{	
	
        sumrow = sumrow + a[i][j];
	sumcol = sumcol + a[j][i];

}

printf("\nSum of row= %d, sum of column = %d", sumrow, sumcol);


}

}
