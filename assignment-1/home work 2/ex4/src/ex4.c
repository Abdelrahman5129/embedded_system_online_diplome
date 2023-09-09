/*
 ============================================================================
 Name        : ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
void main()
{
	float x;
	printf("Enter the number:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x);
	if (x>0)
	printf("%f positive",x);
	else if (x<0)
		printf("%f negative",x);
	else
		printf("zero",x);
}
