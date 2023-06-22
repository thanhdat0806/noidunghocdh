#include<stdio.h>
int main()
{
	long long a,b,c,d;
	long long dA,dB;
	scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
	dA=a*a+b*b;
	dB=c*c+d*d;
	if(dA==dB)
	{
		printf("BANG NHAU");
	}
	if(dA>dB)
	{
		printf("B");
	}
	if(dA<dB)
	{
		printf("A");
	}
}
