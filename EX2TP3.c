/*
 ============================================================================
 Name        : EX2TP3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
  main(void)
  {
	int a,b,r,pgcd,verif;

	do
	{
		printf("donner 2 entiers positif \n");
	     scanf("%d" "%d",&a,&b);
	     if((a>0)&&(b>0))
	    	verif=1;
	}while((a<b)&&(verif!=1));
	r=1;
	while(r!=0)
	{
	r=a%b;

	if (r==0)
		pgcd=b;
	else
	{	a=b;
	    b=r;}}
	printf("le pgcd est %d",pgcd);
}
