#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000];
	gets(a);
	printf("%s",strrev(a));
}
