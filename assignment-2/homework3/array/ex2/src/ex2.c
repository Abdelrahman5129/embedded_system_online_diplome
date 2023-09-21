#include <stdio.h>
int main()
{
	int v,i;
		float a[100],sum=0.0,m;
		printf("enter the numbers of data:");
		scanf("%d",&v);
		for (i=0;i<v;i++)
		{
			printf("enter number:%f",i+1);
				scanf("%f",&a[i]);
				sum+=a[i];
		}
		m=sum/v;
		printf("average=%f",m);
		return 0;
}
