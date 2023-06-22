#include<stdio.h>
int main()
{
	long long t=0;
	long long n;
	scanf("%lld",&n);
	for(int i=1;i<=n;i=i+2)
	{
		t=t+i;
	}
	printf("%lld",t);
}
