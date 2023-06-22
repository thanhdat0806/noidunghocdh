#include<stdio.h>
int main()
{
	long long x,y,z;
	long long i=0;
	scanf("%lld%lld%lld",&x,&y,&z);
	if(x>0&&y>0&&z<2^31)
	{
	if(2*z+y<x*1000)
	{
		i++;
		x=x*1000-(2*z+y);printf("%lld",i);
	}
	
	}
	return 0;
}
