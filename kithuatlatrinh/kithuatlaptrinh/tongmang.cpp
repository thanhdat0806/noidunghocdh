#include<stdio.h>
int a[10][10];
	int n,m;
	int s=0;
void nhapmang()
{
	printf("nhap n,m");
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
};
int main()
{
	nhapmang();
	for(int i=0;i<n;i++)
	{
		printf("\n");
		for(int j=0;j<m;j++)
		{
			printf("\t%d",a[i][j]);
		}
	}
	
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			s=s+a[i][j];
		}
	
	}
	printf("\n%d",s);
}
