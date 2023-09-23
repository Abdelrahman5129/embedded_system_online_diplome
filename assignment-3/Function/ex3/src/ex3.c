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
#include <stdlib.h>
void reverse()
{
	char a;
	scanf("%c",&a);
	if (a != '\n')
	{
		reverse();
		printf("%c",a);
	}
}

int main(void)
{
	printf("Enter a sentence:");
	fflush(stdin);fflush(stdout);
	reverse();
	return 0;

}

