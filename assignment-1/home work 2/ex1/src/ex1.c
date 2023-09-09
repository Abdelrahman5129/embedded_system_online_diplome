/*
 ============================================================================
 Name        : ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
void main()
{
	int x;
	printf("Enter an integer you want to check :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	if ((x%2)==0)
		printf("%d is even",x);
	else
		printf("%d is ood",x);
}
