/*
 ============================================================================
 Name        : ex8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main()
{
	char z;
	float x,y;
	printf("Enter operator either + or - or * or / :");
	printf("Enter two operands:");
	fflush(stdin); fflush(stdout);
	scanf("%c",&z);
	scanf("%f %f",&x,&y);
	switch(z)
	{
	case '+':
		printf("%f+%f=%f",x,y,x+y);
		break;
	case '-':
		printf("%f+%f=%f",x,y,x-y);
	    break;
	case '*':
			printf("%f+%f=%f",x,y,x*y);
		    break;
	case '/':
			printf("%f+%f=%f",x,y,x/y);
		    break;
	}
	return 0;
}
