/*
 ============================================================================
 Name        : 2TP3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
void main()
{
int n,f,i;
do
{	printf("donner un entier positif \n");
     scanf("%d",&n);
}while(n<0);
f=1;
i=1;
do
{
f=f*i;
		i++;
}
	while(i<=n);

printf("la factoriel de %d est %d",n,f);

}
