/*
 ============================================================================
 Name        : ex6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
void main()
{
	float x,i,y=0;
	printf("Enter the number:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&x);
	for (i=1;i<=x;++i)
	{
		y+=i;
	}
	printf("sum:%f",y);
}
