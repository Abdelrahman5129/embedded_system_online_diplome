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
#include <stdlib.h>


int power (int a,int b)
{
	if(b!=0)
		return (a*power(a,b-1));
}

int main (void)
{
	int a,b;
	printf("enter base number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&a);
	printf("enter power number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&b);
	printf("%d^%d = %d",a,b,power(a,b));
}
