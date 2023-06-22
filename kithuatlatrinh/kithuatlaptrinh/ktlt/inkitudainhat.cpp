#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	char s[100];
	int dem=0,max=0;
	
	int t=0;
	system("cls");
	printf("nhap chuoi:\t");
	
	gets(s);

	int n=strlen(s);
	for(int i=0;i<n;i++)
	{
		if(s[i]!=' ')
		{
			dem=dem+1;
		}
		if(s[i]==' '||i==n-1)
		{
			if(dem>=max)
			{
				max=dem;
				dem=0;
			}
		}
	}
	
	printf("%d",max);
/*	for(int i=0;i<n;i++)
	{
		if(s[i]!=' ')
		{
			t=t+1;
		}
		if(s[i]==' '||i==n-1)
		{
			if(t==max)
			{
				for(int k=i-max+1;k=i;k++)
				{
					printf("%c",s[k]);
				}
			}
		}
	}*/

}
