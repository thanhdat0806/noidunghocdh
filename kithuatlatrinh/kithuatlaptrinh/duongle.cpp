#include<stdio.h>
int main()
{
	long long n;
	long long t=0;
	long long i;
	scanf("%lld",&n);
	if(n>0&&n<2*10^9)
	{
	
		for( i=1;i<n;i=i+2)
		{
		
				t=t+i;
		}
	}
	printf("%lld",t);
}
