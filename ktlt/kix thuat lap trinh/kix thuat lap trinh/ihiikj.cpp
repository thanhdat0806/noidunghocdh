#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
		if(a+b==c+d)
		{
			printf("%d",a+b);
			exit(0);
		}
		if(a+c==b+d)
		{
			printf("%d",a+c);
			exit(0);
		}
		if(a+d==c+b)
		{
			printf("%d",a+d);
			exit(0);
		}
		if(a+b+c==d)
		{
			printf("%d",d);
			exit(0);
		}
		if(a+b+d==c)
		{
			printf("%d",c);
			exit(0);
		}
		if(a+d+c==b)
		{
			printf("%d",b);
			exit(0);
		}
		if(b+c+d==a)
		{
			printf("%d",a);
			exit(0);
		}
	printf("-1");
}
