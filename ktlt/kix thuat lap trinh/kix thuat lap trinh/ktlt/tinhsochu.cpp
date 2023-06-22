#include<stdio.h>
#include<string.h>
int main()
{
	int dem=0;
	int i;
	char s[100];
	printf("nhapchuoi:\t");
	gets(s);
	strcat(s," ");
	while(s[0]==' ')
	{
		for(i=0;i<strlen(s);i++)
		{
			s[i]=s[i+1];		
		}
	}
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]==' '&&s[i+1]!=' ')
		{
			dem=dem+1;
		}
	}
	printf("%d",dem);
}
