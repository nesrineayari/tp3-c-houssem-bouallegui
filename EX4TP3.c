/*
 ============================================================================
 Name        : EX4TP3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
void main()
{
	int s,i,c;
	for (i=1;i<1000;i++)
	{
		s=0;
		for (c=1;c<i;c++)
		{
			if(i%c==0)
				s=s+c;
		}
		if(s==i)
			printf("%d est parfait \n",i);

	}

}
