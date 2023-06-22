#include<bits/stdc++.h>
int main()
{
	int dem=0;
	int a[100000];
	int n;
	int k;
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]==k)
		{
			dem=dem+1;
		}
	}
	if(dem==0)
	{
		printf("NO");
		exit(0);
	}
	printf("%d\n",dem);
	for(int i=1;i<=n;i++)
	{
		if(a[i]==k)
		{
			printf("%d ",i);
		}
	}
}
