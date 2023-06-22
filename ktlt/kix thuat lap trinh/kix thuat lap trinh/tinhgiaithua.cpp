#include<stdio.h>
int main()
{
	
	long long t=1;
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		{
			t=t*i;
		}
	printf("%lld",t);
}
