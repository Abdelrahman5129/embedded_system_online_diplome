/*
 ============================================================================
 Name        : ex-6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
void main()
{
	float a,b;
	printf("Enter value of a:\nEnter value of b:");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&a,&b);
	printf("After swapping, value of a = %f\n",b);
	printf("After swapping, value of b =%f",a);
}
