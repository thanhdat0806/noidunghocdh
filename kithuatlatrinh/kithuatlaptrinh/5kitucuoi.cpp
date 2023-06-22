#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000];
	gets(s);
	int i=5;
	while(i!=0)
	{
		printf("%c",s[strlen(s)-i]);
		i--;
	}
}
