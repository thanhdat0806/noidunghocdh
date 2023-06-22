#include<stdio.h>
#include<string.h>
int main()
{
	int dem=0;
	char a[1000];
	gets(a);
	strlwr(a);
	a[0]=a[0]-32;
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]==' ')
		{
			a[i+1]=a[i+1]-32;
		}
	}
	printf("%s",a);
}
