/*
 ============================================================================
 Name        : ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
void main()
{
	float x,y,z;
	printf("Enter the number:");
	fflush(stdin);fflush(stdout);
	scanf("%f %f %f",&x,&y,&z);
	if (x>=y&&x>=z)
		printf("Largest number:%f",x);
	else if (y>=x&&y>=z)
			printf("Largest number:%f",y);
	else (z>=x&&z>=y);
	printf("Largest number:%f",z);
}
