/*
 ============================================================================
 Name        : ex5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
void main ()
{
	char x;
	printf("Enter an alphabet:");
	fflush(stdin);fflush(stdout);
	scanf("%c",&x);
	if (x=='A'||x=='B'||x=='C')
		printf("alphabet is %c",x);
	else
		printf("is not alphabet");
}
