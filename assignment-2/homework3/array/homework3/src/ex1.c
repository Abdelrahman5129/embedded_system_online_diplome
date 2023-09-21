#include <stdio.h>
int main ()
{
	float a[2][2], b[2][2], c[2][2];
	int x , y ;
	printf("enter the elements of 1st matrix\n");
	for (x=0;x<2;++x)
		for(y=0;y<2;++y)
		{
			printf("enter a:%d%d",x+1,y+1);
			scanf("%f",&a[x][y]);
		}
	printf("enter the elements of 2st matrix\n");
	for (x=0;x<2;++x)
			for(y=0;y<2;++y)
			{
				printf("enter a:%d%d",x+1,y+1);
				scanf("%f",&a[x][y]);
			}
	for (x=0;x<2;++x)
			for(y=0;y<2;++y)
			{
				c[x][y]=a[x][y]+b[x][y];
			}
	printf("\nsum of matrix");
	for (x=0;x<2;++x)
			for(y=0;y<2;++y)
			{
				printf("enter a:%d%d",x+1,y+1);
				scanf("%f\t",&c[x][y]);
				if(y==1)
					printf("\n");
			}
	return 0;
}
