#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	int max;
	int vtmax;
	long long a[10000];
	scanf("%d",&n);
	if(n<0&&n>10000)
	{
		exit(0);
	}
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]>=a[i+1])
		{
			max=a[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==max)
		{
			vtmax=i;
			break;
		}
	}
	printf("%d ",max);
	printf("%d",vtmax+1);
}

