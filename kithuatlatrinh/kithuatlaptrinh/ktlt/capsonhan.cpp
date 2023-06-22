#include<stdio.h>
int main()
{
	long long m,n,k;
	scanf("%lld%lld%lld",&m,&n,&k);
	if(n%m==k%n&&m!=0&&n!=0&&k!=0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
}
