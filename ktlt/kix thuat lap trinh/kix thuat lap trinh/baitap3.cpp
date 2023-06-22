#include<stdio.h>
#include<string.h>
char s[100];
void xoakhoangtrang()
{
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
};
int main()
{

	printf("nhap chuoi:\t");
	gets(s);
	xoakhoangtrang();
	printf("%s",s);
	
}
