#include<stdio.h>
#include<string.h>
int main()
{
	int dem=0;
	char a[1000];
	gets(a);
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]=='A')
		{
			dem=dem+1;
		}
	}
	printf("%d",dem);
}
