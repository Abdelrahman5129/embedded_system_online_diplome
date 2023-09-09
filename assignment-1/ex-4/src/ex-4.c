/*
 ============================================================================
 Name        : ex-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
void main()
{
	float a,b,c;
	printf("Enter two numbers:");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&a,&b);
	c=a*b;
	printf("Product:%f",c);
}
