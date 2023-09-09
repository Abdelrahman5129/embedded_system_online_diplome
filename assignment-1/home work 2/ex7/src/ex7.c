/*
 ============================================================================
 Name        : ex7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
void main()
{
	int x,y;
	unsigned long long int z=1;
	printf("Enter the number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	if (x>0)
	{
		for (y=1;y<=x;y++)
		{
			z*=y;
		}
	printf("sum:%d",z);
	}
	else if (x<0)
		printf("not factorial");
	else
		printf("sum:1");
}
