#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i;
	int t=0;
	printf("nhap chuoi:\t");
	gets(s);
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]==' ')
		{
			break;
		}
		else
		{
			t=t+1;
		}
	}
	for(i=0;i<strlen(s);i++)
	{
		
	}
	printf("%d",t);
}
