#include<stdio.h>
#include<string.h>
int main()
{
	int c,d;
	int dem=0;
	char a[1000];
	char b[1000];
	gets(a);
	c=strlen(a);
	gets(b);
	d=strlen(b);
	if(c<d)
	{
		printf("%d",d);
	}
	else
	printf("%d",c);
	
}
