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
int Factorial(int x)
{
	int f=1;
	for(f=1;x>0;x--)
		f *= x;
	return f;
}
int main(void)
{
	int n;
	printf("Enter an positive number");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	printf("%d = %d",n,Factorial(n));

}
