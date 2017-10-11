/*
 ============================================================================
 Name        : 3TP3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
void main()
{
int n,i;
long int f;
do
{	printf("donner un entier positif \n");
     scanf("%d",&n);
}while(n<0);
f=1;
for(i=1;i<=n;i++)
	{
	f=f*i;
	}
printf("la factoriel de %d est %d",n,f);


}
