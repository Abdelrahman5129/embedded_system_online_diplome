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

int main(void)
{
	int a,b,x[10][10],y[10][10],i,j;
	printf("enter rows and column of matrix:");
	scanf("%d%d",&a,&b);
	for(i=0;i<a;++i)
		for(j=0;j<b;++j)
		{
			printf("enter elements of  a%d%d",i+1,j+1);
			scanf("%d",&x[i][j]);
		}
	printf("enter matrix :\n");
	for(i=0;i<a;++i)
			for(j=0;j<b;++j)
			{
				printf("%d",x[i][j]);
				if(j==b-1)
					printf("\n\n");
			}
	for(i=0;i<a;++i)
			for(j=0;j<b;++j)
			{
				y[b][a]=x[a][b];
			}
	for(i=0;i<a;++i)
			for(j=0;j<b;++j)
			{
				printf("%d",y[i][j]);
				if(j==a-1)
					printf("\n\n");
			}
	return 0;

}
