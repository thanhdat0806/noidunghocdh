#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i;
	printf("nhapchuoi:\t");
	gets(s);
	int n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]==' ')
		{
			for(int j=i;j<n;j++)
			{
				s[j]=s[j+1];
				i--;
			}
		}
	}
	printf("%s",s);
	
}
