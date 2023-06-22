#include<stdio.h>
int main()
{
	int a[100][100];
	int i,j,n;
	int T=0;
	int Q=0;
	printf("nhap n\t");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("nhap a[%d][%d]\t",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==j)
			{
				T=T+a[i][j];
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i+j==(n+1))
			{
				Q=Q+a[i][j];
			}
		}
	}
	printf("tong cheo chinh\t%d\ntongcheophu\t%d",T,Q);
}
