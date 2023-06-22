#include<stdio.h>
int main()
{
	int n;
	int i;
	int a[10000];
	int max=0;
	int min;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(max<=a[i])
		{
			max=a[i];
		}
	}
	min=a[1];
	for(i=0;i<n;i++)
	{
		if(min>=a[i])
		{
			min=a[i];
		}
	}
	printf("SO LON NHAT: %d\n",max);
	printf("SO BE NHAT: %d",min);
}
