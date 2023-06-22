#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a*a==b*b+c*c)
	{
		printf("Ba so da nhap la bo so Pi-ta-go");
		exit(0);
	}
	if(b*b==a*a+c*c)
	{
		printf("Ba so da nhap la bo so Pi-ta-go");
		exit(0);
	}
	if(c*c==b*b+a*a)
	{
		printf("Ba so da nhap la bo so Pi-ta-go");
		exit(0);
	}
	printf("Ba so da nhap khong la bo so Pi-ta-go");
}
