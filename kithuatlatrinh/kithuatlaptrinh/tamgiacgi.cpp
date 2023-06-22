#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c)
	{
		if(a=b&&a*a+b*b==c*c)
		{
			printf("VUONG CAN");
		}
		if(a=c&&a*a+c*c==b*b)
		{
			printf("VUONG CAN");
		}
		if(b=c&&b*b+c*c==a*a)
		{
			printf("VUONG CAN");
		}
		if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
		{
			printf("VUONG");
		}
		if(a==b||a==c||c==b)
		{
			printf("CAN");
		}
		if(a==b&&a==c&&b==c)
		{
			printf("DEU");
		}
	}
	else
	{
		printf("KHONGPHAITAMGIAC");
	}
}
