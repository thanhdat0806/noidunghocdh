#include<stdio.h>
int main()
{
	long long a,b;
	scanf("%lld%lld",&a,&b);
	if(a>=1&&b<=10^6)
	{
		printf("%0.2f",(float (a)*float (b))/2);
	}
}

