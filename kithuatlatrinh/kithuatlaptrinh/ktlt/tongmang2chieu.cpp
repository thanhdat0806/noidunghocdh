#include <stdio.h>
#define max 100

void nhap(int a[][max],int n)
{
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			scanf ("%d",&a[i][j]);
		}
	}
}

int tongCC (int a[][max],int n)
{
	int tong1=0;
	int tong2=0;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if(i==j)
			{
				tong1+=a[i][j];
			}
		}
	}
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if(j==n-i-1)
			{
				tong2+=a[i][j];
			}
		}
	}
	printf ("%d %d",tong1,tong2);
}

int main ()
{
	int a[max][max],n;
	scanf ("%d",&n);
	nhap(a,n);
	tongCC(a,n);
}
