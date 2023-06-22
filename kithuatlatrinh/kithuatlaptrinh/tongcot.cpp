#include<stdio.h>
int main()
{
	int n,m,t;
	int a[100][100];
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<m;i++)
	{
		t=0;
		for(int j=0;j<n;j++)
		{
			t=t+a[j][i];
		}
		printf("\n");
		printf("%d",t);
	}
	
}
