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

int main(void)
{
int x[50],a,b,c,i;
printf("enter of elements");
scanf("%d",&a);
for(i=0;i<a;++i)
{
	scanf("%d",&x[i]);
}
printf("enter the element to be inserted");
scanf("%d",&b);
printf("enter the location");
scanf("%d",&c);
for (i=a;i>=c;i--)
{
	x[i] = x[i-1];
}
a++;
x[c - 1] = b;
for (i=0;i< a;i++)
	printf("n %d",x[i]);
return 0;
}
