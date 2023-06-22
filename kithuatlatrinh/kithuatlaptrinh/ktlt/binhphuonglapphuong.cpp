#include<stdio.h>
int main()
{
	long long  m,n,k;
	scanf("%lld%lld%lld",&m,&n,&k);
	if(m<0)
	{
		printf("%lld ",m*m);	
	}
	if(m>0)
	{
		printf("%lld ",m*m*m);
	}
	if(n<0)
	{
		printf("%lld ",n*n);
	}
	if(n>0)
	{
		printf("%lld ",n*n*n);
	}
	if(k<0)
	{
		printf("%lld",k*k);
	}
	if(k>0)
	{
		printf("%lld",k*k*k);
	}
}
