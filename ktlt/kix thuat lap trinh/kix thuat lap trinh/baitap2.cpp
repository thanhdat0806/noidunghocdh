#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	char a[100];
	printf("nhap chuoi:\t");
	gets(a);
	strcpy(s,a);
	strlwr(a);
	int n=strlen(s);
	for(int i=0;i<n;i++)
	{
		if(s[i]==' '&&s[i+1]==' ')
		{
			for(int j=i;j<n;j++)
			{
				s[j]=s[j+1];
				i--;
			}
		}
	}
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]==' ')
		{
			for(int j=0;j<strlen(s);j++)
			{
				s[j]=s[j+1];
				i--;
			}
		}
	}
	while(s[strlen(s)]==' ')
	{
		s[strlen(s)]=s[strlen(s)-1];
		
	}
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]==' ')
		{
			s[i+1]=s[i+1]-32;
		}
	}
	s[0]=s[0]-32;
	printf("%s",s);
}
