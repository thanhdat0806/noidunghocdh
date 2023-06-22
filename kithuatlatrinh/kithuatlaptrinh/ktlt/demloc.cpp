#include<stdio.h>
int main()
{
	int a[100];
	int n;
	int m=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			m++;
		}
	}
	printf("%d",m/3);
}
