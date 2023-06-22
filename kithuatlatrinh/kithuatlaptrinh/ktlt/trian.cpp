#include<stdio.h>
int main()
{
	int i;
	int a[5000];
	int k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(k==a[i])
		{
			printf("%d",i+1);
		}
	}
}
