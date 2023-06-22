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
		while(s[i]=!' ')
		{
			t=t+1;
		}
	}
	printf("%d",t);
}
