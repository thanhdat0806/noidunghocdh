#include<stdio.h>
#include<string.h>
int main()
{
	char s[10^6];
	int t=0;
	scanf("%s",s);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]%2==0)
		{
			printf("%c\n",s[i]);
			t=t+s[i];
		}
	}
	printf("%d",t);
}
