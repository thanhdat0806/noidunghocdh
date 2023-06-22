#include<stdio.h>
int main()
{
	int n,m;
	int dem=0;
	int a[100][100];
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]%3==0)
			{
				dem=dem+1;
			}
		}
	}
	printf("%d",dem);
}
