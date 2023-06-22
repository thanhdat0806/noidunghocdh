#include<stdio.h>
int main()
{
	long long max,a,b,c;
	scanf("%lld%lld%lld",&a,&b,&c);
	if(a<b)
	{
		max=b;
	}
	else
	{
		max=a;
	}
	if(max>c)
	{
		printf("So lon nhat: %d",max);
	}
	else
	{
		printf("So lon nhat: %d",c);
	}
}
