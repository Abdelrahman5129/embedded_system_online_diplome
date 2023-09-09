/*
 ============================================================================
 Name        : ex-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main()
{
	int a;
	int b;
	int c;
	printf("Enter two integers:");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("sum:%d",c);
	return 0;
}
