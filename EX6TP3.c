/*
 ============================================================================
 Name        : EX6TP3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
void main()
{
	int a,i,j,s,f,c,k ;

	printf("donner a \n");
	scanf("%d",&a);
	f=a;
	for(k=1;k<=f;k++)
	{
		printf(" ");
	}
printf("*");

s=1;
for(i=1;i<a;i++)
{
	s=s+2;
	printf("\n");
	f=f-1;
	for(c=1;c<=f;c++)

	{
		printf(" ");
	}
for(j=1;j<=s;j++)
{
printf("*");
}
}
}
