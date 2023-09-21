/*
 ============================================================================
 Name        : ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char c[100];
	int i;
	printf("enter a string:");
	scanf("%s",c);
	for (i=0;c[i]!='\0';i++);
	prinf("length of string :%d",i);
	return 0;
}
