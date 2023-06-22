#include<stdio.h>
int main()
{
	int n,a[100][100];
	int t=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++)
	{
		t=t+a[i][i];
	}
	printf("%d",t);
}
