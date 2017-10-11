/*
 ============================================================================
 Name        : EX5TP3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
void main ()
{
	int a,b,i,j;
	do
	{
		printf("donner la largeur \n");
		        scanf("%d",&a);
		printf("donner la hauteur \n");
				scanf("%d",&b);
	}while((a<0)&&(b<0));
	for(i=1;i<=b;i++)
	{
		printf("\n");
		for(j=1;j<=a;j++)
		{
			printf("*");
		}
	}
}
