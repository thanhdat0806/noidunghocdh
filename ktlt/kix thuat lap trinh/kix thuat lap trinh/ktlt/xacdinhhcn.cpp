#include<stdio.h>
#include<stdlib.h>
int main()
{
	int  a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>0&&b>0&&c>0&&d>0)
	{
	
	if(a==b&&c==d)
	{
		printf("%d",a+b+c+d);
		exit(0);
	}
	if(a==c&&b==d)
	{
		printf("%d",a+b+c+d);
		exit(0);
	}
	if(a==d&&c==b)
	{
		printf("%d",a+b+c+d);
		exit(0);
	}
	}
	printf("-1");
}
