#include<stdio.h>

int A[100][100],n,i,j,gt,d,hang,cot;

void tao()
{
	d=0; gt=1; hang=n-1; cot=n-1;
	while(d<=n/2)
	{
		for(i=d;i<=cot;i++)		A[d][i]=gt++;
		for(i=d+1;i<=hang;i++)	A[i][cot]=gt++;
		for(i=cot-1;i>=d;i--)	A[hang][i]=gt++;
		for(i=hang-1;i>d;i--)	A[i][d]=gt++;
		d++; hang--; cot--;
	}
}

void ketqua()
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%d ", A[i][j]);
		printf("\n");
	}
}

int main()
{
	scanf("%d",&n);
	tao();
	ketqua();
}
