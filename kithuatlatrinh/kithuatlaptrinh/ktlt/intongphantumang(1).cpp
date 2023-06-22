#include<stdio.h>
int main()
{
	int n,m;
	int T=0;
	int a[100][100];
	printf("nhap n,m\t");
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("nhap a[%d][%d]\t",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			T=T+a[i][j];
		}
	}
	printf("%d",T);
}
