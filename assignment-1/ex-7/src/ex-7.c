/*
 ============================================================================
 Name        : ex-7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
// C program to swap two variables
#include <stdio.h>

// Driver code
int main()
{
	int x, y;
	printf("Enter Value of x \n");
	scanf("%d", &x);
	printf("Enter Value of y ");
	scanf("%d", &y);
	fflush(stdin);fflush(stdout);
	int temp=x;
	x=y;
	y=temp;
	printf("After swapping, value of x =%d",x);
	printf("After swapping, value of y =%d",y);
}
