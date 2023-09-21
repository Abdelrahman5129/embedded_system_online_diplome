#include <stdio.h>

int main(void)
{
	char s[100];
	int i,j,a;
	printf("enter the string:\n");
	gets(s);
	while (i<j)
	{
		a = s[i];
		s[i]=s[j];
		s[j]=a;
	}
	printf("reverse string is:%s\n",a);
	return 0;
}
