#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,b;
	char a[10],c;
	printf("Enter a string:");
	gets(a);
	printf("enter a character to find frequency:");
	scanf("%c",&c);
	for(i=0;a[i]!='\0';i++)
	{
		if (c==a[i])
			++b;
	}
	printf("Frequency of %c=%d",c,b);
	return 0;
}
