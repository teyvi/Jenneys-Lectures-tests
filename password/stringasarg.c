#include<stdio.h>

void modify(char*,char*);
void main()
{
	char str1[]="Jenny";
	char str2[]="Teyvi";
	modify(str1,str2);
}

void modify(char* str1,char* str2)
{
	int i, lenght=0;

	for(i=0;str1[i] !="\0";i++)
	{
		lenght=lenght+1;
	}

	str[1]="z";
	printf("lenght of string is :%d\n",lenght);
	printf("both the strings are %s %s",str1,str2);
}

